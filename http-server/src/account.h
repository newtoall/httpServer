#ifndef ACCOUNT_H
#define ACCOUNT_H

#include <stdio.h>
#include <string.h>
#define MAXUSERSIZE 0x1000
typedef struct user{
	char usrName[30];
	char usrPassword[30];
}User;

void init();
int checkLogin(char *,char *);
int checkSignup(char *,char *);
void addAccount(char *,char *);
void accountLogin(char *,char *);
char *presentAccount();
#endif
