/**
 * @file main.c
 * @author andre
 * @date 2026-10-05
 * @brief Main function
 */
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>

void print_message(const char *message) {
    // Function to print a message to the console or display
    // Implementation depends on the specific hardware and libraries used
    if (message != NULL) {
        // Print the message (this is a placeholder, actual implementation may vary)
        // For example, you might use UART or another communication protocol
        printf("%s\n", message);
    }

}



int main(){

    // Add your code here and press Ctrl + Shift + B to build
    //Create changes to be gitted
    
    while(1) {
     int a = 10;
     int b = 20;
     int c = a + b;


    //Lets add some new functionality to the code    

    }

    return 0;
}
