==16024== Memcheck, a memory error detector
==16024== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16024== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==16024== Command: ./exception_handling
==16024== Parent PID: 11596
==16024== 
==16024== 
==16024== HEAP SUMMARY:
==16024==     in use at exit: 4,096 bytes in 1 blocks
==16024==   total heap usage: 4 allocs, 3 frees, 76,973 bytes allocated
==16024== 
==16024== 4,096 bytes in 1 blocks are definitely lost in loss record 1 of 1
==16024==    at 0x484A2F3: operator new[](unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==16024==    by 0x109280: main (exception_handling.cpp:9)
==16024== 
==16024== LEAK SUMMARY:
==16024==    definitely lost: 4,096 bytes in 1 blocks
==16024==    indirectly lost: 0 bytes in 0 blocks
==16024==      possibly lost: 0 bytes in 0 blocks
==16024==    still reachable: 0 bytes in 0 blocks
==16024==         suppressed: 0 bytes in 0 blocks
==16024== 
==16024== For lists of detected and suppressed errors, rerun with: -s
==16024== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
