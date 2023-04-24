#include <iostream>
#include <string>
#include "Handler.h"
#include "FirstHandler.h"
#include "SecondHandler.h" 


int main() {
    FirstHandler handler1;
    SecondHandler handler2;

    // Set the chain of responsibility
    handler1.set_next(&handler2);

    // Send requests to the first handler
    handler1.handle("request1");
    handler1.handle("request2");
    handler1.handle("request3");

    return 0;
}
