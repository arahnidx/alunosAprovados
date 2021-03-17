#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int aprovados, reprovados;

struct aluno {  /* Struct que armazena os alunos*/
    char nome[100];  
    long int matricula;
    double nota1;
    double nota2;
    double nota3;
    double nota4;
    double media;
    int presenca;
    char resultadoFinal[10];
    };

struct aluno lista[5]; /* Array para multiplos alunos, sem ela vc só vai ter um */


void criarAlunos(){ /* automatiza o processo de inserir as informacoes de cada aluno */
for(int i=0;i<5;i++){
    lista[i].nome = aluno;
    lista[i].matricula = 00000;
    lista[i].nota1 = 20+i*5;
    lista[i].nota2 = 30+i*5;
    lista[i].nota3 = 40+i*5;
    lista[i].nota4 = 40+i*5;
    lista[i].presenca = 40;
}

void calcMedia(){  /* Calcula a media de cada aluno */
    for(int i=0;i<5;i++){
        lista[i].media = (lista[i].nota1 + lista[i].nota2+lista[i].nota3+lista[i].nota4)/4;
    }
}

void calcResultado(){   /* Atribui um resultado pra cada aluno de acordo com os criterios estabelecidos */
    for(int i=0;i<5;i++){
        if(lista[i].presenca >= 40 && lista[i].media >= 60 ){
            lista[i].resultadoFinal = "Aprovado";
            aprovados++;
        }
        else{
            lista[i].resultadoFinal = "Reprovado";
            reprovados++;
        }
    }
}

void imprimirApvRpv(){ /* Imprime a quantidade total de aprovados e reprovados */
    printf("\n Aprovados: %d",aprovados);
    printf("\n Reprovados: %d",reprovados);
}

}

main(){
    /* Primeiro chama as funções para fazerem o tratamento de dados */
    criarAlunos();
    calcMedia();
    calcResultado();

    /* Depois imprime a quantidade aprovados e reprovados */
    imprimirApvRpv();
}