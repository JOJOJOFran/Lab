#include <stdint.h>
#include <stdlib.h>

typedef struct
{

    //%rax
    union
    {
        uint64_t rax;
        uint32_t eax;
        uint16_t ax;
        struct
        {
            uint8_t al;
            uint8_t ah;
        }
    }
    
    //%rbx
    union
    {
        uint64_t rbx;
        uint32_t ebx;
        uint16_t bx;
        struct
        {
            uint8_t bl;
            uint8_t bh;
        }
    }
}