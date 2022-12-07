#include <stdio.h>
#include <stdlib.h>

//MODELO DE EXEMPLO

int main(){
   
    unsigned int vet[200];
    int num;
    int bin_to_dec;
    int pos;
    int count;
     

    count=0;
    while(count<200){
        vet[count] = 0;
        count++;
    }

    
    count = 0;

    printf("Digite números entre 0 e 5000: \n");

    while(num != -1){    //esse while verifica se o numero digitado é diferente de -1
        scanf("%d", &num);    //fazendo e leitura dos dados digitados
        pos = num / 32;
        if((num!=-1)&&(num>=0 && num<= 5000)){
            vet[pos] = vet[pos] | (1 << (num-(32*pos)));  //O operador OR inclusivo bit a bit compara cada bit do primeiro operando com o bit correspondente de seu segundo operando.
            if(num > count){
            count = num;
        }
       }
       
    }
    num = 0;
    bin_to_dec = 0;

    // parte responsavel pela impreção

    printf("Números Digitados: \n");
    while(num <= count){
        if((vet[bin_to_dec] >> (num-(32*bin_to_dec))) & 1){    //essa paret é responsavel por converter um numero binario para decimal
            printf("%d\n", num);    //mostra o numero decimal resultado da converção feito na linha acima.
        }
        num++;
        bin_to_dec = num / 32;
    }


  return 0;  
}
