#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

int append_text_to_file(const char *filename, char *text_content);
int create_file(const char *filename, char *text_content);
ssize_t read_textfile(const char *filename, size_t letters);

/* prototypes for ELF */
void errors(char *msg);
void pentry(void);
void ptype(char *buffer);
void pos(char *buffer);
void pversion(char *buffer);
void pABIversion(char *buffer);
void pdata(char *buffer);
void pmagic(char *buffer);
void pclass(char *buffer);
void ptitle(char *title);
int main(int argc, char **argv);

#endif