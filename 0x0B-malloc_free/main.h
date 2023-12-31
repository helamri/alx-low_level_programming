#ifndef MAIN_H
#define MAINN_H

char *create_array(unsigned int size, char c);
char *_strdup(char *str);
char *str_concat(char *s1, char *s2);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
char *argstostr(int ac, char **av);
int strncat_mod(char *dest, char *src, int i, int str_len);
void alloc_mem(char **newstr, char *str, int str_len);
int word_count(char *str, int str_len);
char **strtow(char *str);

#endif
