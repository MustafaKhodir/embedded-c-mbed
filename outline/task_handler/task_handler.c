// Outline only. The full code is private.
// Function names, structure and comments are shown. The working logic is removed.
// Copyright 2026 Mustafa Khodir. All rights reserved.

// Keyword counter in C.
//
// Reads a list of keywords from one text file, then scans a second (much
// bigger) text file one character at a time and counts how many times each
// keyword appears as a whole word. At the end it prints a table sorted by
// count, highest first, and writes the same table to Results.txt.
//
// I kept the keywords in a doubly linked list rather than an array so I can
// add or drop words without worrying about a fixed size. Each node carries
// its own match position (index) so all the keywords are matched in one
// single pass over the big file.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

// One keyword node
struct KeyWord {
    char *givenWord;            // the keyword itself
    int index;                  // how many chars of it we have matched so far
    int count;                  // how many whole word hits found
    struct KeyWord *nextkeyword;
    struct KeyWord *prevkeyword;
};

// head of the list of keywords
struct KeyWord *keywordsLinkedList = NULL;

// the character before the current one, needed for the word boundary check
int lastChar = ' ';

// Strips the newline (and a Windows \r if there is one) off a line read with fgets
static void stripNewline(char *line) { /* removed */ }

// Adds a new keyword at the head of the list
void addKeyword(const char *word) { /* removed */ }

// Returns 1 if this exact keyword is already in the list, so duplicates in
// the keyword file only get counted once
int existsKeyword(const char *word) { /* removed */ }

// Reads the keyword file, one keyword per line
int getKeywords(const char *filename) { /* removed */ }

// Feeds one character from the big file into one keyword's matcher.
// The idea: index points at the next letter of the keyword we are waiting
// for. Match it and index moves on, miss it and index goes back to 0.
// A keyword only counts if there is no letter directly before it or after
// it, so "prison" does not match inside "imprisoned".
void moveIndexOnWord(int c, struct KeyWord *keyword) { /* removed */ }

// Reads the big file char by char and runs every keyword's matcher on it
int searchKeywords(const char *filename) { /* removed */ }

// Sorts the list by count, biggest first. I pull the node with the biggest
// count out of the old list and append it to a new one until the old list
// is empty, which is simpler than shuffling pointers around in place.
void sortKeywords(void) { /* removed */ }

// Prints the table to the screen and to Results.txt
void showResult(void) { /* removed */ }

// Frees the list when we are done
void freeKeywords(void) { /* removed */ }

int main(void) { /* removed */ }
