#ifndef MAIN_H
#define MAIN_H

/**
 * File: main.h
 * Auth: Congo Justus Migue
 *
 * Desc: Header file containing all prototypes for all functions
 * used in the 0x06. c - more pointers, arrays and strings directory.
 */

char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper(char *);
char *cap_string(char *);
char *rot13(char *);
void print_number(int n);
char *infinite_add(char *n1, char *n2, char *r, int size_r);
void print_buffer(char *b, int size);
int _putchar(char c);
char *leet(char *);
#endif
