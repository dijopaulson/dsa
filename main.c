#include <stdio.h>
#include "sll.h"

int main()
{
    printf("queue pgm started...\n");
    
    init_queue(10);
    enqueue(20);
    display_queue();
    enqueue(30);
    display_queue();
    enqueue(40);
    display_queue();
    enqueue(50);
    display_queue();
    
    
    dequeue();
    display_queue();   
    dequeue();
    display_queue();
    dequeue();
    display_queue();
    dequeue();
    display_queue();
    dequeue();
    display_queue();

    printf("queue pgm finished...\n");    

    return 0;
}