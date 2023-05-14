// Circular References
// Circular references can prevent reference-count based pointers from reducing reference count to 0,
// causing memory leaks

#include <memory>

struct Node {
    std::shared_ptr<Node> next;
};

// +-----------+        
// |   Node 1  |        
// +--|-----.--+        
//    |     |         
//    |     |         
// +--.-----|--+      
// |   Node 2  |      
// +-----------+      

void circular_ref() {
    auto n1 = std::make_shared<Node>();
    auto n2 = std::make_shared<Node>();

    n1->next = n2;
    n2->next = n1;
}

int main() {
    circular_ref();
    return 0;
}