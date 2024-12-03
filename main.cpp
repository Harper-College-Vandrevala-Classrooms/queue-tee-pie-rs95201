#include "my_queue.hpp" 

int main() {
    Puppy puppy;
    Kitty kitty;
    PygmyMarmoset pygmyMarmoset;

    QueueTees queue;


    std::cout << "Queue size: " << queue.size() << std::endl;

    queue.enqueue(&puppy);
    queue.enqueue(&kitty);
    queue.enqueue(&pygmyMarmoset);

    std::cout << "Queue size after enqueue: " << queue.size() << std::endl;
  
    Cutie* cutie1 = queue.dequeue();
    std::cout << "Dequeued: " << cutie1->description() << std::endl;
  
    Cutie* cutie2 = queue.dequeue();
    std::cout << "Dequeued: " << cutie2->description() << std::endl;

    Cutie* cutie3 = queue.dequeue();
    std::cout << "Dequeued: " << cutie3->description() << std::endl;

    return 0;
}


