#include<stdio.h>
#include<string.h>
struct student
{
    int id;
    float markes;
    char name[50];
};

struct student s1;

int main(){

    s1.id=10;
    s1.markes=466.5;
    strcpy(s1.name,"harshit dongre");

    printf("%i  %.2f\n", s1.id,s1.markes);
    printf("its a name %s",s1.name);

    return 0;
}