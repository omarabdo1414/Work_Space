class Rectangle
{
    private:
        float length;
        float width;
    
    public:
        Rectangle();
        Rectangle(float len, float wid);
        void set_length(float len);
        void set_width(float wid);
        float get_length();
        float get_width();
        float get_area();
        ~Rectangle();
};