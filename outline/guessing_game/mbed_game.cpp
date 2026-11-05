// Outline only. The full code is private.
// Function names, structure and comments are shown. The working logic is removed.
// Copyright 2026 Mustafa Khodir. All rights reserved.

// Guessing game on an mbed board.
//
// The board side of the game. The player sets a secret number between 1 and
// 30 on the keypad, then someone on the PC tries to guess it over the serial
// link. The LCD shows the secret number and how many guesses are left, the
// LED bar lights up while the game is on, and every hint goes back to the PC
// over UART at 9600 baud. Seven guesses, then it is game over.
//
// Hardware (mbed LPC1768 on the lab board):
//   16x2 text LCD on p15 to p20
//   4x4 keypad, column number written in binary on p26 p25 p24, rows read on p14 p13 p12 p11
//   LED bar through an SPI shift register on p5 p6 p7, chip select on p8
//   USB serial to the PC (USBTX, USBRX)
//
// Built in the Keil online compiler with the mbed and TextLCD libraries.
// The matching PC program is pc_host.c.

#include "mbed.h"
#include "TextLCD.h"
#include <ctype.h>

// Range of the secret number and how many goes the guesser gets
const int MIN_NUMBER = 1;
const int MAX_NUMBER = 30;
const int MAX_GUESSES = 7;

Serial pc(USBTX, USBRX);                     // serial link to the PC
BusOut cols_out(p26, p25, p24);              // keypad column select, 0 to 3 in binary
BusIn rows_in(p14, p13, p12, p11);           // keypad rows
TextLCD lcd(p15, p16, p17, p18, p19, p20);   // rs, e, d4 to d7

SPI leds(p5, p6, p7);                        // LED bar shift register
DigitalOut cs(p8);

// What each keypad position means. Row by row, left to right.
const char Keytable[4][4] = {
    {'1', '2', '3', 'F'},
    {'4', '5', '6', 'E'},
    {'7', '8', '9', 'D'},
    {'A', '0', 'B', 'C'}
};

// Scans the keypad until a key is pressed, waits for it to be released,
// then returns the character. Blocks until something is pressed.
char getKey() { /* removed */ }

void initLEDs() { /* removed */ }

// Pushes a 16 bit pattern out to the LED bar and latches it
void setLEDs(int pattern) { /* removed */ }

void ledsOn()  { /* removed */ }
void ledsOff() { /* removed */ }

// Flashes the LEDs on and off a few times, used when the game ends
void blinkLEDs(int times) { /* removed */ }

void gameIntro() { /* removed */ }

// Reads the secret number from the keypad. Type one or two digits, then
// press C to confirm. A second digit confirms on its own, and so does a first
// digit of 4 to 9, because no two digit number starting with one of those is
// 30 or less. Anything out of range or not a digit is thrown away and the
// player is asked again.
int getSecretNumber() { /* removed */ }

// Turns a line of text into a guess. strtol stops at the first character
// that is not part of the number, and end points there. Anything left after
// the number apart from spaces, like the abc in 12abc, means the line is
// rejected.
int parseGuess(const char *line, int *guess) { /* removed */ }

// Reads one whole number from the PC. Returns 0 if the line is not a clean
// number, so a stray letter, or something like 12abc, does not break the game.
int readGuessFromPC(int *guess) { /* removed */ }

int main() { /* removed */ }
