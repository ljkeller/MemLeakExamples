==13553== Memcheck, a memory error detector
==13553== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==13553== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==13553== Command: ./bad_operator1
==13553== Parent PID: 11596
==13553== 
==13553== Mismatched free() / delete / delete []
==13553==    at 0x484CA8F: operator delete[](void*) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==13553==    by 0x109195: main (bad_operator1.cpp:6)
==13553==  Address 0x4dddc80 is 0 bytes inside a block of size 4 alloc'd
==13553==    at 0x4849013: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==13553==    by 0x10917E: main (bad_operator1.cpp:4)
==13553== 
==13553== 
==13553== HEAP SUMMARY:
==13553==     in use at exit: 0 bytes in 0 blocks
==13553==   total heap usage: 2 allocs, 2 frees, 72,708 bytes allocated
==13553== 
==13553== All heap blocks were freed -- no leaks are possible
==13553== 
==13553== For lists of detected and suppressed errors, rerun with: -s
==13553== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
