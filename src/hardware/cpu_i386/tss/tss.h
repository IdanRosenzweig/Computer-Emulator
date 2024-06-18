#ifndef EMULATOR_TSS_H
#define EMULATOR_TSS_H

#include <stdint.h>

struct TSS {
    uint16_t prev_sel;
    uint16_t : 16;
    uint32_t esp0;
    uint16_t ss0;
    uint16_t : 16;
    uint32_t esp1;
    uint16_t ss1;
    uint16_t : 16;
    uint32_t esp2;
    uint16_t ss2;
    uint16_t : 16;
    uint32_t cr3;
    uint32_t eip;
    uint32_t eflags;
    uint32_t eax;
    uint32_t ecx;
    uint32_t edx;
    uint32_t ebx;
    uint32_t esp;
    uint32_t ebp;
    uint32_t esi;
    uint32_t edi;
    uint16_t es;
    uint16_t : 16;
    uint16_t cs;
    uint16_t : 16;
    uint16_t ss;
    uint16_t : 16;
    uint16_t ds;
    uint16_t : 16;
    uint16_t fs;
    uint16_t : 16;
    uint16_t gs;
    uint16_t : 16;
    uint16_t ldtr;
    uint16_t : 16;
    uint16_t T: 1;
    uint16_t : 15;
    uint16_t io_base;
};

#endif
