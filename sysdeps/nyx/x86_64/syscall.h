#ifndef NYX_X86_64_SYSCALL_H
#define NYX_X86_64_SYSCALL_H

#define GAIA_SYS_LOG		   0
#define GAIA_SYS_EXIT		   1
#define GAIA_SYS_MSG		   2
#define GAIA_SYS_ALLOC_PORT	   3
#define GAIA_SYS_GET_PORT	   4
#define GAIA_SYS_REGISTER_PORT 5
#define GAIA_SYS_VM_MAP		   6
#define GAIA_SYS_CREATE_TASK   7
#define GAIA_SYS_START_TASK	   8
#define GAIA_SYS_VM_WRITE	   9

#define syscall1(num, param)                                                   \
 __asm__ volatile("int $0x42" ::"a"(num), "D"(param));

#define syscall2(num, param1, param2)                                          \
 __asm__ volatile("int $0x42" ::"a"(num), "D"(param1), "S"(param2));

#endif
