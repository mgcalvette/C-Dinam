#ifndef USER_H_INCLUDED
#define USER_H_INCLUDED
typedef struct{
    int id;
    char name[33];
    char email[65];
}User;

User* user_new();
User* user_newParametro(char* email,char* name,int id);
void user_delete(User* this);
int user_setEmail(User* this,char* email);
int user_getEmail(User* this,char* email);
int user_setName(User* this,char* name);
int user_getName(User* this,char* name);
int user_setId(User* this,int id);
int user_getId(User* this,int* id);
void user_print(User* this);


#endif // USER_H_INCLUDED
