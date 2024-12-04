#include <stdint.h>

#include "bootparam.h"
#include "print.h"

int _start(bootparam_t *bootpar)
{
    bootp = bootpar;
    for (int i = 0; i < bootp->width * bootp->height; i++)
        bootp->framebuffer[i] = 0x000000;

    print(bootp->height/bootp->height , bootp->height/bootp->height , "Hello from kernel!");

    while (1)
    {
    }

    return 0;
}