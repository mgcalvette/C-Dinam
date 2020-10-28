#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "user.h"

static int user_isValidName(char* name);
static int user_isValidEmail(char* email);
static int user_isValidId(int id);

User* user_new(){
    return (User*) malloc(sizeof(User));
}
User* user_newParametro(char* email,char* name,int id){
    User* this;
    this=user_new();
    if( this== NULL ||
        user_setEmail(this,email) ||
        user_setName(this,name) ||
        user_setId(this,id)){
            user_delete(this);
            this= NULL;
    }
    return this;
}
void user_delete(User* this){
    free(this);
}
int user_setEmail(User* this,char* email){
    int retorno=-1;
    if(this != NULL && user_isValidEmail(email)){
        strcpy(this->email,email);
        retorno=0;
    }
    return retorno;
}
int user_getEmail(User* this,char* email){
    int retorno=-1;
    if(this != NULL && email != NULL){
        strcpy(email,this->email);
        retorno=0;
    }
    return retorno;
}
static int user_isValidEmail(char* email){
    return 1;
}
int user_setName(User* this,char* name){
    int retorno=-1;
    if(this != NULL && user_isValidName(name)){
        strcpy(this->name,name);
        retorno=0;
    }
    return retorno;
}
int user_getName(User* this,char* name){
    int retorno=-1;
    if(this != NULL && name != NULL){
        strcpy(name,this->name);
        retorno=0;
    }
    return retorno;
}
static int user_isValidName(char* name){
    return 1;
}
int user_setId(User* this,int id){
    int retorno=-1;
    if(this != NULL && user_isValidId(id)){
        this->id=id;
        retorno=0;
    }
    return retorno;
}
int user_getId(User* this,int* id){
    int retorno=-1;
    if(this != NULL && id != NULL){
        *id=this->id;
        retorno=0;
    }
    return retorno;
}
static int user_isValidId(int id){
    return 1;
}
void user_print(User* this){
    printf("\n%s  - %s  - %d",this->email,this->name,this->id);
}
