#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

#define EXC_RESET 1
#define EXC_NMI 2
#define EXC_HARDFAULT 3
/* Reserved without the Main Extension
#define EXC_MEMMANAGEFAULT 4
#define EXC_BUSFAULT 5
#define EXC_USAGEFAULT 6
#define EXC_SECUREFAULT 7
*/
// Exception numbers 8-10 are reserved
#define EXC_SVCALL 11
//#define EXC_DEBUGMONITOR 12 Reserved without Main Extension
// 13 is reserved
#define EXC_PENDSV 14
#define EXC_SYSTICK 15
#define EXC_EXTERN_0 16

#endif