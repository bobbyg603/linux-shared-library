// Allows us to reference built-in standard library input/output functions
#include <stdio.h>
#include "mars.h"
    
// Our function implementation int (return type) main (function name) void (parameter type)
int main(void)
{
    // Use standard library to print to the terminal window
    puts("Hello Earth!");

    // Call a function in our shared library
    mars();
    
    // Exit with a return code 0 indicating success
    return 0;
}