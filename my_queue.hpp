#include <iostream>
#include <string>
#include "cutie.hpp"

class Puppy : public Cutie 
{
public:
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
public:
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
public:
    std::string description() override 
    {
        return "A little Pygmy Marmoset with big, sad eyes";
    }

    int cuteness_rating() override
    {
        return 6;
    }
};

const int MAX_SIZE = 100;

class QueueTees 
{
private:
    Cutie* arr[MAX_SIZE];  
    Cutie** top;  
    Cutie** start;  

public:
    QueueTees() 
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

    void enqueue(Cutie* element) 
    {
        if (!is_full()) 
        {
            *top = element;  
            top++;  
        }
    }

    Cutie* dequeue() 
    {
        if (!is_empty()) 
        {
            Cutie* poppedElement = *start; 
            start++;  
            return poppedElement;  
        } 
        else
        {
            throw "Oh no! Queue is empty!";
        }
    }

    int size() 
    {
        return top - start;  
    }

    void pp() 
    {
        Cutie** temp = start;  
        while (temp < top) 
        { 
            std::cout << (*temp)->description() << " with cuteness rating: " << (*temp)->cuteness_rating() << std::endl;
            temp++;  
        }
    }
};
