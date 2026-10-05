/**
 * @file main.c
 * @author andre
 * @date 2026-10-05
 * @brief Main function
 */
#include <avr/io.h>
#include <util/delay.h>
#include <stdio.h>
#include <avr/interrupt.h>

void print_message(const char *message) {
    // Function to print a message to the console or display
    // Implementation depends on the specific hardware and libraries used
    if (message != NULL) {
        // Print the message (this is a placeholder, actual implementation may vary)
        // For example, you might use UART or another communication protocol
        printf("%s\n", message);
    }

}

void blink_led(int pin, int delay_ms) {
    // Function to blink an LED connected to the specified pin
    // Implementation depends on the specific hardware and libraries used
    DDRB |= (1 << pin); // Set the pin as output
    while (1) {
        PORTB ^= (1 << pin); // Toggle the LED state
        _delay_ms(delay_ms);  // Wait for the specified delay
    }
}

void setup_timer() {
    // Function to set up a timer for periodic tasks
    // Implementation depends on the specific hardware and libraries used
    TCCR0 = (1 << WGM01); // Set timer to CTC mode
    OCR0 = 249;           // Set compare value for 1ms at 16MHz with prescaler 64
    TIMSK |= (1 << OCIE0); // Enable Timer Compare Interrupt
    TCCR0 |= (1 << CS01) | (1 << CS00); // Start timer with prescaler 64
}

void setup_interrupts() {
    // Function to set up interrupts
    // Implementation depends on the specific hardware and libraries used
    sei(); // Enable global interrupts
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
