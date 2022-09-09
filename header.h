#ifndef HEADER_H
#define HEADER_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD "peroq.def"
#define SOURCE "source.txt"
#define DEST "dest.crt"

char *mdp;
char *texte;

void encrypt();
void IOencrypt(char * text);

void decrypt();
int IOdecrypt();

int readPassword();
int readTexte();
#endif
