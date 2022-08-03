#include <stdio.h>
int main(){
    int num1,num2;
    char operateur , q;

    printf("Entrer le nombre1 :");
    scanf("%d" ,&num1);
    printf("Entrer l'operateur :");
    scanf("%s" ,&operateur);
    printf("Entrer le nombre2 :");
    scanf("%d" ,&num2);

     switch (operateur)
    {
    case'+': printf("le resulta est %d : ",num1+num2);
        break;

    case'-': printf("le resulta est %d : ",num1-num2);
        break;
    case '*': printf("le resulta est %d : ",num1*num2);
        break;
    case '/': if(num2!=0) 
    printf("le resultat est %d : ",num1/num2);
        else
        printf("impossible  de diviser sur 0");
        break;
    default : printf("cet operateur n'exicte pas ");
        break;
case'q' :
printf("programme terminer");
break;
    }
}