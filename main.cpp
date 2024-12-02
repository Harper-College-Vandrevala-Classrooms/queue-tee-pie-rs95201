#include "my_queue.hpp" 

int main() {
  
    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset pygmyMarmoset;


    MyQueue<Cutie> queue;

    std::cout << "Queue size: " << queue.size() << std::endl;
    queue.enqueue(&puppy);
    queue.enqueue(&kitty);
    queue.enqueue(&pygmyMarmoset);

    std::cout << "Queue size: " << queue.size() << std::endl;

  
    std::cout << "Queue contents:\n";
    queue.pp();

   
    std::cout << "Dequeueing first element: " << queue.dequeue() << std::endl;
    std::cout << "Dequeueing second element: " << queue.dequeue() << std::endl;

    return 0;
}


