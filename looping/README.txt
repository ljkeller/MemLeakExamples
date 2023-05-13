==16713== Memcheck, a memory error detector
==16713== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==16713== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==16713== Command: ./loop
==16713== Parent PID: 11596
==16713== 
==16713== 
==16713== HEAP SUMMARY:
==16713==     in use at exit: 2,048 bytes in 512 blocks
==16713==   total heap usage: 1,025 allocs, 513 frees, 76,800 bytes allocated
==16713== 
==16713== 2,048 bytes in 512 blocks are definitely lost in loss record 1 of 1
==16713==    at 0x4849013: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==16713==    by 0x109185: main (loop.cpp:7)
==16713== 
==16713== LEAK SUMMARY:
==16713==    definitely lost: 2,048 bytes in 512 blocks
==16713==    indirectly lost: 0 bytes in 0 blocks
==16713==      possibly lost: 0 bytes in 0 blocks
==16713==    still reachable: 0 bytes in 0 blocks
==16713==         suppressed: 0 bytes in 0 blocks
==16713== 
==16713== For lists of detected and suppressed errors, rerun with: -s
==16713== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
