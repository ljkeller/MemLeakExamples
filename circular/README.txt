==12197== Memcheck, a memory error detector
==12197== Copyright (C) 2002-2017, and GNU GPL'd, by Julian Seward et al.
==12197== Using Valgrind-3.18.1 and LibVEX; rerun with -h for copyright info
==12197== Command: ./circular
==12197== Parent PID: 10969
==12197== 
==12197== 
==12197== HEAP SUMMARY:
==12197==     in use at exit: 64 bytes in 2 blocks
==12197==   total heap usage: 3 allocs, 1 frees, 72,768 bytes allocated
==12197== 
==12197== 64 (32 direct, 32 indirect) bytes in 1 blocks are definitely lost in loss record 2 of 2
==12197==    at 0x4849013: operator new(unsigned long) (in /usr/libexec/valgrind/vgpreload_memcheck-amd64-linux.so)
==12197==    by 0x109E43: __gnu_cxx::new_allocator<std::_Sp_counted_ptr_inplace<Node, std::allocator<Node>, (__gnu_cxx::_Lock_policy)2> >::allocate(unsigned long, void const*) (new_allocator.h:127)
==12197==    by 0x109C8E: std::allocator_traits<std::allocator<std::_Sp_counted_ptr_inplace<Node, std::allocator<Node>, (__gnu_cxx::_Lock_policy)2> > >::allocate(std::allocator<std::_Sp_counted_ptr_inplace<Node, std::allocator<Node>, (__gnu_cxx::_Lock_policy)2> >&, unsigned long) (alloc_traits.h:464)
==12197==    by 0x109A69: std::__allocated_ptr<std::allocator<std::_Sp_counted_ptr_inplace<Node, std::allocator<Node>, (__gnu_cxx::_Lock_policy)2> > > std::__allocate_guarded<std::allocator<std::_Sp_counted_ptr_inplace<Node, std::allocator<Node>, (__gnu_cxx::_Lock_policy)2> > >(std::allocator<std::_Sp_counted_ptr_inplace<Node, std::allocator<Node>, (__gnu_cxx::_Lock_policy)2> >&) (allocated_ptr.h:98)
==12197==    by 0x109911: std::__shared_count<(__gnu_cxx::_Lock_policy)2>::__shared_count<Node, std::allocator<Node>>(Node*&, std::_Sp_alloc_shared_tag<std::allocator<Node> >) (shared_ptr_base.h:648)
==12197==    by 0x109859: std::__shared_ptr<Node, (__gnu_cxx::_Lock_policy)2>::__shared_ptr<std::allocator<Node>>(std::_Sp_alloc_shared_tag<std::allocator<Node> >) (shared_ptr_base.h:1342)
==12197==    by 0x1097D4: std::shared_ptr<Node>::shared_ptr<std::allocator<Node>>(std::_Sp_alloc_shared_tag<std::allocator<Node> >) (shared_ptr.h:409)
==12197==    by 0x1095C9: std::shared_ptr<Node> std::allocate_shared<Node, std::allocator<Node>>(std::allocator<Node> const&) (shared_ptr.h:863)
==12197==    by 0x10945F: std::shared_ptr<Node> std::make_shared<Node>() (shared_ptr.h:879)
==12197==    by 0x109230: circular_ref() (circular.cpp:10)
==12197==    by 0x1092D7: main (circular.cpp:18)
==12197== 
==12197== LEAK SUMMARY:
==12197==    definitely lost: 32 bytes in 1 blocks
==12197==    indirectly lost: 32 bytes in 1 blocks
==12197==      possibly lost: 0 bytes in 0 blocks
==12197==    still reachable: 0 bytes in 0 blocks
==12197==         suppressed: 0 bytes in 0 blocks
==12197== 
==12197== For lists of detected and suppressed errors, rerun with: -s
==12197== ERROR SUMMARY: 1 errors from 1 contexts (suppressed: 0 from 0)
