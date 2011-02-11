#ifndef _DS24XX_H_
#define _DS24XX_H_

#define VENDOR_EMBEST		1
#define VENDOR_FLEX		2

extern void one_wire_hw_init(void);
extern unsigned int get_cm_sn();
extern char get_cm_rev();
extern unsigned int get_cm_vendor();

#endif
