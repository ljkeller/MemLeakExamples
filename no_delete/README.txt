==19013== Memcheck, a memory error detector
==19013== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==19013== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==19013== Command: ./forgetting
==19013== Parent PID: 11596
==19013== 
==19013== 
==19013== HEAP SUMMARY:
==19013==     in use at exit: 4 bytes in 1 blocks
==19013==   total heap usage: 2 allocs, 1 frees, 72,708 bytes allocated
==19013== 
==19013== 4 bytes in 1 blocks are definitely lost in loss record 1 of 1
==19013==    at 0x4849013: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==19013==    by 0x10915E: main (forgetting.cpp:5)
==19013== 
==19013== LEAK SUMMARY:
==19013==    definitely lost: 4 bytes in 1 blocks
==19013==    indirectly lost: 0 bytes in 0 blocks
==19013==      possibly lost: 0 bytes in 0 blocks
==19013==    still reachable: 0 bytes in 0 blocks
==19013==         suppressed: 0 bytes in 0 blocks
==19013== 
==19013== For lists of detected and suppressed errors, rerun with: -s
==19013== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
