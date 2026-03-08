#include <stdio.h>
#include <string.h>

typedef struct{
    char name[64];
    int age;
}Student;

void show(Student s);
void increaseAge(Student *s,int n);

int main(){

    Student s[5];
    int i;

    for(i=0;i<5;i++){
        sprintf(s[i].name,"Student%d",i);
        s[i].age = i + 15;
    }

    for(i=0;i<5;i++){
        increaseAge(&s[i],10);
    }

    for(i=0;i<5;i++){
        show(s[i]);
    }

    return 0;
}

void show(Student s){
    printf("Name: %s, Age: %d\n",s.name,s.age);
}

void increaseAge(Student *s,int n){
    s->age += n;
}
