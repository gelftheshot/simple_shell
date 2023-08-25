#ifndef MAIN_H
#define MAIN_H

/** incluing important libraries**/
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <sys/stat.h>


/** function prototype **/
char *read_command();
void printe(char *str);
int _strlen(char *s);
char *_strcpy(char *dest, char *src);
char *_strcat(char *dest, char *src);
int excuter(char **av, int j, char *geted);
char **tokenizer(char *get);
char *_strdup(char *str);
void promt_printer(void);
void print(char *str);
char *get_env(char *str);
char *str_split(char *str1, int i);
int pathfinder(char **str);
void  exit_hand(char **av, char *geted);
void printn(int j);
void _putchar(char i);
int _strncmp(const char *str1, const char *str2, size_t n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
void control_plus_c(int signal);
/** exteral char **/

extern char **environ;
#endif
