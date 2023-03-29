//Harsht to Hrshita
#include<stdio.h>

int main(){


 char str[]="harshima";
 int size =sizeof(str)/sizeof(str[0]);
 char newstr[size];
 int newcounter=0;

 int i= 0;

while(str[i] != '\0'){

 if(str[i] !='a'){


      newstr[newcounter]=str[i];
      newcounter++;

 }
      i++;

}

   for(int k=newcounter; k<size-1; k++){

         
         newstr[k]='a';

   }
 newstr[size-1]='\0';
int j=0;
while(newstr[j]!='\0'){


      printf("%c",newstr[j]);
      j++;


}

  return 0;
}