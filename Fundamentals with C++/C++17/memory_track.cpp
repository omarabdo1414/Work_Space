#include <iostream>
#include <cstdint>
#include <memory>

struct AllocationMatrics
{
    uint32_t allocated_memory = 0;
    uint32_t freed_memory = 0;

    uint32_t CurruntUsage()
    {
        return allocated_memory - freed_memory;
    }
};

static AllocationMatrics s_Allocation;

void *operator new(size_t size)
{
    s_Allocation.allocated_memory += size;

    return malloc(size);
}

void operator delete(void *memory, size_t size)
{
    s_Allocation.freed_memory += size;

    free(memory);
}

struct Object
{
    int x, y, z;
};

static void print_Memory_Usage()
{
    std::cout << "Memory Usage: " << s_Allocation.CurruntUsage() << " Bytes." << std::endl;
}

int main()
{
    print_Memory_Usage();
    Object *obj = new Object;
    {
        std::unique_ptr<Object> name = std::make_unique<Object>();
        print_Memory_Usage();
    }
    print_Memory_Usage();
    delete obj;
    print_Memory_Usage();

    return 0;
}