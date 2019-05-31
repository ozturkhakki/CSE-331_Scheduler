#!/bin/bash

mv -f "entry.S" "/usr/src/linux-2.4.20/arch/i386/kernel/entry.S";

mv -f "unistd.h" "/usr/src/linux-2.4.20/include/asm-i386/unistd.h";
mv -f "user_unistd.h" "/usr/include/asm/unistd.h";

mv -f "changeuserpri.h" "/usr/src/linux-2.4.20/include/linux/changeuserpri.h";
mv -f "changeuserpri.c" "/usr/src/linux-2.4.20/fs/changeuserpri.c";
mv -f "user_changeuserpri.h" "/usr/include/linux/changeuserpri.h";

mv -f "changeschedule.h" "/usr/src/linux-2.4.20/include/linux/changeschedule.h";
mv -f "changeschedule.c" "/usr/src/linux-2.4.20/fs/changeschedule.c";
mv -f "user_changeschedule.h" "/usr/include/linux/changeschedule.h";

mv -f "sched.h" "/usr/src/linux-2.4.20/include/linux/sched.h";
mv -f "sched.c" "/usr/src/linux-2.4.20/kernel/sched.c";
mv -f "user.c" "/usr/src/linux-2.4.20/kernel/user.c";

mv -f "Makefile" "/usr/src/linux-2.4.20/fs/Makefile";
