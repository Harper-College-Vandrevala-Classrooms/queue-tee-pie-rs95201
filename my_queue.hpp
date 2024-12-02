#include <iostream>
#include <string>
#include "cutie.hpp"

#include "cutie.hpp"
#include <string>
class Puppy : public Cutie 
{
  std::string description() override 
  {
    return "A little puppy with big, sad eyes";
  }

  int cuteness_rating() override 
  {
    return 11; 
  }
};
class Kitty : public Cutie
{
  std::string description() override 
  {
    return "A little Kitty with big, sad eyes";
  }

  int cuteness_rating() override 
  {
    return 8; 
  }
};
class PygmyMarmoset : public Cutie
{
  std::string description() override 
  {
    return "A little PygmyMarmoset with big, sad eyes";
  }

  int cuteness_rating() override 
  {
    return 6; 
  }
};

const int MAX_SIZE = 100;

template <typename T>
class MyQueue 
{
private:
    T* arr[MAX_SIZE]; 
    T* top;           
    T* start;          

public:
    MyQueue()
{
        top = arr;   
        start = arr; 
}

    bool is_empty() 
{
        return (top == start); 
}

    bool is_full()
{
        return (arr + MAX_SIZE == top); 
}

    void enqueue(T* element) 
{  
        if (!is_full()) 
        {
            *top = element;  
            top++;           
        }
        else 
        {
          throw "Oh no!";
        }
    }

    T* dequeue()
{  
        if (!is_empty())
        {
            T* poppedElement = *start;  
            start++;  
            return poppedElement; 
        } 
        else 
        {
           throw "Oh no!";
        }
    }


    int size() 
{
        return top - start;  
    }

    void pp()
{  
        T* temp = start;
        while (temp < top) 
        {
            std::cout << (*temp)->description() << " (Cuteness: " << (*temp)->cuteness_rating() << ")\n";
            temp++;
        }
        std::cout << std::endl;
    }
};


