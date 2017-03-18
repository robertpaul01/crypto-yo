#ifndef COMMON_H_
#define COMMON_H_

#define START 'A'
#define END 'Z'
#define RANGE END-START

// Define the max length of message and key
#define MAX_LENGTH 10000

void get_choice(char* choice);

int find_inverse(long a, long b);

int is_rel_prime(long a, long b);

#endif
