# CSE-331_Scheduler
This is a project I have completed with a team of 3 for CSE-331 (Operating Systems and Designs) course in my university education.

Our team have implemented a scheduler which used user priority for sharing CPU time among active processes.

Example Scenerio:

    Users                    : Test, West, Nest
    Priorities               : 1   , 2   , 1
    Process Counts           : 2   , 2   , 1
    Expected CPU% per process: 12.5, 25  , 25

We have implemented this scheduler for 2.4.20-8 linux kernel (2004). To test it, using a file sharing application (like FileZilla);

    1) copy the files to a directory of your choice,
    2) run "move.sh",
    3) and then run kernel_compile

Afterwards, you need to edit /etc/grub.conf and append the following;

    title CSE331-Test (2.4.20-10)
        root (hd0, 0)
        kernel /bzImage-2.4.20-10 ro root=/dev/hda2 hdc=ide-scsi
        initrd /initrd-2.4.20-10.img

Reboot the system and select "CSE331-Test" for booting in grub selection menu. To change the scheduler and run tests, just compile "test_sched.c" and run it in command line "/path/to/compile/result/sched 1". Afterwards you are free to test things out.

Note: Files with "user_" prefix are for user space while others are for kernel space.

---

# EXAMPLE TEST RUN

For the test we were doing, we had 3 users;

    usernames      ; test1, yest1, west1
    priorities     ; 1    , 2    , 1
    process counts ; 2    , 2    , 6

With these we obtained averages for processes for each user:

    for user test1: 11.5067     expected: 12.5
    for user yest1: 19.7583     expected: 25
    for user west1: 6.4237      expected: 4.16

Mean Square Error; 5.7954,

which means we are 5.8% off of our expectations.
