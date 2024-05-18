#include <iostream>
#include <thread>

namespace HAL
{

    namespace datail
    {
        typedef std::unit16_t channel_id_type;

        enum ADC_Instance : uint32_t{
            ADC1_Instance = 0x40008000 // Address of ADC1
        };
    }

    class ADC
    {
    public:
        ADC(datail::channel_id_type id) : channel_id(id)
        {
            // Initialization
        }

        double read()
        {
            return data;
        }

        void * operator new(size_t, datail::ADC_Instance Instance)
        {
            return reinterpret_cast<void *>(Instance);
        }

    private:
        datail::channel_id_type channel_id;
        double data;
    };

    class ISensor
    {
        virtual void read(std::uint32_t &data) = 0;
    };

    class TemperatureSensor : public ISensor
    {
    public:
        TemperatureSensor(datail::channel_id_type t_ch_id) : id(t_ch_id)
        {
            adc = new (datail::ADC1_Instance) ADC(id);
        }
        void read(std::uint32_t &data)
        {
            data = adc->read();
        }

    private:
        ADC *adc;
        datail::channel_id_type id;
    };
}

namespace Communication
{
    template <class T>
    class SensorService
    {
        virtual void offerService() = 0;
        virtual void update(T &value) = 0;
    };

    class TemperatureService : public SensorService<uint32_t>
    {
        void offerService() override
        {
            // do something
        }
        void update(uint32_t &value) override
        {
            // update process
            temp_sensor.read(value);
        }
        private:
        HAL::TemperatureSensor temp_sensor;
    };
}

void communicationThread()
{
    Communication::TemperatureService service;
    service.offerService();

    while(1)
    {
        uint32_t value = 8;
        service.update(value);
    }
}
int main()
{
    std::thread temp_server(communicationThread);

    return 0;
}