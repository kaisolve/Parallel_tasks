#include <stdio.h>
#include <string.h>
int main(void){
char username[20]="q";
char password[20]="a";
printf("Enter username \n");
scanf("%s",username);
printf("Enter password \n");
scanf("%s",password);
/*struct login{
char username[20];
char password[20];
};
struct login log[3]={{"a","1"},{"omar","hey212"},{"khaled","kdh72"}};*/
char users[3][20] ={"a","omar","hey"};
char passwords[3][20]={"1","kha12d","kdh72"};

for(int i=0;i<3;i++){
if(strcmp(username,users[i])==0&&strcmp(password,passwords[i])==0){printf("success login");
break;}
else{
printf("unsuccessful login \"Enter right information\"");
break;
}}

}
