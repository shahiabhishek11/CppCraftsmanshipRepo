
Dangling Pointer
Dangling pointer is the pointer which holds the address of memeory which has already freed(no longer valid).

when program tries to derefernce the dangling pointer it can lead to undefined behaviour, including crash, unexpected behaviour, or data corruption.



Memory Leaks
A memory leak occurs when a program allocates memory but fails to release it when it's no longer needed.
This leads to gradual increase in memory usage potentially casuing the performance degradation or in extreme cases, program termination due to lack of available memory.



Smart Pointer 
Smart Pointer is the wrapper class of pointer which automatically manages the memory it points to.It is included in memory header file.

Problems with Normal Pointer
Memory Leak: Situation where allocated memory do not get deallocated
Dangling Pointer: Pointer points to the location which is already freed.

Types of Smart Pointer 
1) Unique Pointer
2) Shared Pointer
3) Weak Pointer


1) Unique Pointer 
Unique Pointer stores only one pointer at a time.It includes the mechanism of handling one raw pointer by one owner.
We can not copy the unique pointer, we can only share the ownership of unique pointer using the move method.

Syntax:
std::unique_ptr<data_type> ptr_name <data_type>
std::unique_ptr<int> uptr<new int(100)>;

2) Shared Pointer 
In share pointer multiple pointer can point to single object.
The memory will be deallocated only in case of last shared_ptr object will get deleted

Syntax:
std::shared_ptr<data_type> ptr_name <data_type>
std::shared_ptr<int> sptr<new int(10)>

3) Weak Pointer
Weak Pointer is same as the shared_ptr, but it does not own memory  , it can be freed even if there is a pointer points to it.
Weak pointer comes into to picture to break the cyclic dependency of Shared_Pointer.











