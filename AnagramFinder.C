#include<stdio.h>
#include<string.h>
int main(){
  int counter1[]={0,0,0,0};
  int counter2[]={0,0,0,0};
  char s1[]="you are a donkey";
  char s2[]= "a donkey you are";
  int i;
  for(i=0;i<strlen(s1);i++){
  if(s1[i]=='a'){
  counter1[0]++;
  }
  if (s1[i]=='b')
  counter1[1]++;
  
  if (s1[i]=='c'){
  counter1[2]++;
  }
  if (s1[i]=='d'){
  counter1[3]++;
  }
  if(s1[i] == ' ') {
    continue;
  }
 
  }
 
  int j;
  for(j=0;j<strlen(s2);j++){
    if(s2[j]=='a'){
    counter2[0]++;
    }
    
    if(s2[j]=='b'){
    counter2[1]++;
    }
    if(s2[j]=='c') {
    counter2[2]++;
    }
    if(s2[j]=='d') {
    counter2[3]++;
    }
    if(s2[j]==' ') {
  continue;
    }
  }
  int flag=0;
  int k;
  for( k=0;k<4;k++){
  if (counter1[k] != counter2[k]){
  flag=1;
  }
  }
    if (flag==0)
    {printf("Anagram");
    }
    if(flag==1)  {
      printf("Not Anagram");
    }
}
