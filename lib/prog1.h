#ifndef PROG1_H
#define PROG1_H

typedef char *string;

#define ARRAY_SIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

char *get_string(const char *prompt);
int get_int(const char *prompt);
int get_strlen(const char *string);
int is_palindrome(const char *s);
int find_char(const char *s, const char c);

#endif
