#include<bits/stdc++.h>

int main() {
    double nota1, nota2, media;

    scanf("%lf %lf", &nota1, &nota2);
    media=((nota1*2)+(nota2*3))/5;

    if(media >= 7){
        printf("Aprovado\n");
    }
    else if(media <3){
        printf("Reprovado\n");
    }
    else{
        printf("Final\n");
    }

    return 0;
}
