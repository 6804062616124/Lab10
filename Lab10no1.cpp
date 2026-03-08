#include <stdio.h>
#include <string.h>

typedef struct{
    char name[50];
    int score;
}Student;

void insertStudent(Student *, char *, int);

int main(){

    Student s[20];
    int n = 5;
    int i;

    insertStudent(&s[0],"Sandking",65);
    insertStudent(&s[1],"Anti-mage",72);
    insertStudent(&s[2],"Sniper",40);
    insertStudent(&s[3],"Tiny",93);
    insertStudent(&s[4],"Axe",60);

    for(i=0;i<n;i++){

        printf("%s\n",s[i].name);
        printf("Grade: %d ",s[i].score);

        if(s[i].score >= 80){
            printf("very good\n");
        }else if(s[i].score >= 60){
            printf("good\n");
        }else{
            printf("keep trying\n");
        }
    }

    return 0;
}

void insertStudent(Student *p, char *name, int score){

    strcpy(p->name,name);
    p->score = score;
}
