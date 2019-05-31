#include <linux/changeuserpri.h>
#include <asm/current.h>
#include <linux/types.h>
#include <linux/sched.h>

asmlinkage int sys_changeuserpri(int new_pri) {
	if (new_pri == 1 || new_pri == 2) {
		current->user->priority = new_pri;
		printk("priority set to: %d\n", current->user->priority);
		return 0;
	}
	else {
		printk("invalid priority value, ignored\n");
		return -1;
	}
}
