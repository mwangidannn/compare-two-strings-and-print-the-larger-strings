#include <stdio.h>
#include <string.h>
int main(){
char food1[20];
char food2[20];

printf("Ënter food1: ");
fgets(food1,sizeof(food1),stdin);

printf("Ënter food2: ");
fgets(food2,sizeof(food2),stdin);

int result1 =strlen(food1);
int result2 =strlen(food2);

if(result1>result2){
printf("The Longest string is :%s",food1);

}
else {
printf("The longest string is :%s ",food2);
}
return 0;

}
