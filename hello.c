#include<stdio.h>
#include<ctype.h>

int main(){


int num;
printf("Enter a Number");
scanf("%d", &num);

if(num<=0){
    printf("Not Natural Number");
}
else{
    printf("Natural Number");
}


return 0;
}