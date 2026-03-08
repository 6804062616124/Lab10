#include <stdio.h>
#include <string.h>

typedef struct{
    char username[64];
    char password[64];
}Account;

typedef struct{
    char studentID[20];
    char fullname[25];
    Account account;
}Student;

int check(char *u,char *p,Student *s);

int main(){

    Student list[5]={
        {"66-040626-2686-9","MR.A",{"user1","passwd1"}},
        {"66-040626-2686-8","MR.B",{"user2","passwd2"}},
        {"66-040626-2686-7","MR.C",{"user3","passwd3"}},
        {"66-040626-2686-6","MR.D",{"user4","passwd4"}},
        {"66-040626-2686-5","MR.E",{"user5","passwd5"}}
    };

    char login[64],pass[64];
    int i,found=0;

    printf("Enter login : ");
    scanf("%s",login);

    printf("Enter password : ");
    scanf("%s",pass);

    for(i=0;i<5;i++){
        if(check(login,pass,&list[i])){
            printf("Welcome: %s\n",list[i].fullname);
            found=1;
            break;
        }
    }

    if(found==0){
        printf("Incorrect login or password\n");
    }

    return 0;
}

int check(char *u,char *p,Student *s){

    if(strcmp(u,s->account.username)==0 && strcmp(p,s->account.password)==0){
        return 1;
    }

    return 0;
}
