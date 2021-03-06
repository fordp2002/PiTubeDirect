// info.h

#ifndef INFO_H
#define INFO_H

#include "rpi-mailbox-interface.h"

typedef struct {
   int rate;
   int min_rate;
   int max_rate;
} clock_info_t;

extern char *get_info_string();

extern int get_clock_rate(int clk_id);

extern float get_temp();

#define    COMPONENT_CORE 1
#define COMPONENT_SDRAM_C 2
#define COMPONENT_SDRAM_P 3
#define COMPONENT_SDRAM_I 4

float get_voltage(int component_id);

extern clock_info_t *get_clock_rates(int clk_id);

extern void dump_useful_info();

extern char *get_cmdline();

extern char *get_cmdline_prop(char *prop);

#endif
