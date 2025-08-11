
#include <stdio.h>

int main()
{
    float nota;
    
    printf("digite uma nota:");
    scanf("%f", &nota);
    
    if (nota < 0 || nota > 10) {
        printf("essa nota nao eh valida, digite uma nota valida de 0 a 10");
    }
    
    else if (nota < 5) {
            printf("insuficiente");
    }
            
    if (nota >= 5 && nota <= 7) {
            printf("regular");
    }
    
    else if (nota >= 7 && nota <=9) {
            printf("bom");
    }
    
    if (nota >= 9 && nota <=10) {
        printf("excelente!");
        
    }
    
        
    return 0;
}
