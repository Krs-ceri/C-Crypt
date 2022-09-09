#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "peroq.def"

char *mdp;
int lenstr;

void encrypt(char * text);
void IOencrypt(char * text);

void decrypt(char * text);

int readPassword(char * text);

#endif
