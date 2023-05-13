==14054== Memcheck, a memory error detector
==14054== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==14054== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==14054== Command: ./bad_operator2
==14054== Parent PID: 11596
==14054== 
==14054== Mismatched free() / delete / delete []
==14054==    at 0x484BB6F: operator delete(void*, unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==14054==    by 0x10920B: main (bad_operator2.cpp:9)
==14054==  Address 0x4dddc80 is 0 bytes inside a block of size 4,096 alloc'd
==14054==    at 0x484A2F3: operator new[](unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==14054==    by 0x1091BB: main (bad_operator2.cpp:5)
==14054== 
==14054== 
==14054== HEAP SUMMARY:
==14054==     in use at exit: 0 bytes in 0 blocks
==14054==   total heap usage: 2 allocs, 2 frees, 76,800 bytes allocated
==14054== 
==14054== All heap blocks were freed -- no leaks are possible
==14054== 
==14054== For lists of detected and suppressed errors, rerun with: -s
==14054== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
