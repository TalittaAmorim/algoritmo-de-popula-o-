#include <stdio.h>
#include <cs50.h>
#include <math.h>

 int main(void)
{    // Agoritmo de crescimento populacional

    float p_inicial, p_final; 
    float years = 0; // variavel para contagem
    
    do{
        p_inicial = get_float(" Digite a população inicial:"); // vai requisitar numero atual da populacao maior que 9
    }while(p_inicial <9);
    
    do{
        p_final = get_float(" Digite a população final desejada:"); // vai requisitar numero final
    }while(p_final<p_inicial);
    
   do{
       p_inicial = p_inicial + (p_inicial/3) - (p_inicial/4); // A cada vez que a população inicial for menor que a requisitada, ele vai execuatr esse comando
       years++; // e vai ascrescenta mais 1 nessa variável 
   }while(p_inicial<p_final);
    
    printf("O número necessarios de anos é :%1.2f\n", years); // esses numeros antes do f é para moldar quantas casas decimais é apresentadas
               
             /*! Esse algoritmo era pra ser usando em int, todavia , por algum motivo ele nao retornava o output em certos numeros, 
             com isso eu previ que o motivo seja pq a divisao nao saia exata e tbm o output era int ele nao retornava nada, já que o valor vindo da divisao era um numero quebrado   */
             
             // Mein erster Algorithmus, den ich selbst entwickelt und mit Pseudocode geplant habe! 10/06/2022
}
