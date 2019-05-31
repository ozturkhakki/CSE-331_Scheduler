#include <linux/changeschedule.h>
#include <asm/current.h>
#include <linux/types.h>
#include <linux/sched.h>

/* This will be automatically initialized to 0 */
int sched_type;

asmlinkage int sys_changeschedule(int new_schedule) {
	/* 0 is the linux schedule, 1 is the implemented schedule */
	if (new_schedule == 0 || new_schedule == 1) {
		sched_type = new_schedule;
		printk("sched_type set to: %d\n", sched_type);
		return 0;
	}
	else {
		printk("invalid new_schedule value, ignored\n");
		return -1;
	}
}
