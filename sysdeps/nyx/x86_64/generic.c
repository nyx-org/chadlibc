#include "syscall.h"

void
sys_exit(int status)
{
	syscall1(GAIA_SYS_EXIT, status);
}
