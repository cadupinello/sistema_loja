#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

struct cliente {
  
  char nome[10], ender[50], cpf[11],tel[11];
    
};

struct produto {
    
  char codprod[2], nomeprod[15], descprod[200];
  float valorprod;
    
};

struct pedido {
    
    char cpf[11], codprod[2], datapedido[8];
    int quantprod;
    
};


int main(void) {

    struct cliente cli;
    struct produto prod;
    struct pedido ped;

	//criando a variavel ponteiro para o arquivo
    FILE *pont_arq1, *pont_arq2, *pont_arq3, *pont_arq4;
    
    //abrindo o arquivo 
    pont_arq1 = fopen("cadproduto.txt", "a");
    pont_arq2 = fopen("cadcliente.txt", "a");
    pont_arq3 = fopen("cadpedido.txt", "a");
    pont_arq4 = fopen("relatorio.txt", "a");
   
    //mensagem para o usuario 
    printf("O arquivo foi criado com sucesso! \n\n");

    int i;
    int opcao;
    char relatorio[100];

		system("color 02");
        printf("##### Bem vindo a loja Madame ##### \n\n");
        
        printf("--- Seleciona a opcao desejada --- \n");
        printf("1. Cadastrar produto \n");
        printf("2. Cadastrar cliente \n"); 
        printf("3. Efetivar venda \n"); 
        printf("4. Relatorio \n"); 
        printf("5. Sair \n"); 
        printf("_________________________________\n\n"); 

        scanf("%d", &opcao);
        system("cls || clear");
       
       
       	
        switch(opcao) {
            case 1 : 

		system("color 62");
		
        for (i=0; i<2; i++) {
        printf("--------cadastro produto--------- \n");

        printf ("Digite o codigo do produto: ");
        scanf ("%s", prod.codprod);
        fprintf(pont_arq1, "%s \n", prod.codprod);
        
        printf("Salvo ! \n");

        printf ("Digite o nome do produto: ");
        scanf ("%s", prod.nomeprod);
        fprintf(pont_arq1, "%s \n", prod.nomeprod);

        printf("Salvo ! \n");

        printf ("Digite a descricao do produto: ");
        scanf ("%s", prod.descprod);
        fprintf(pont_arq1, "%s \n", prod.descprod);

        printf("Salvo ! \n");

        printf ("Digite o valor do produto: ");
        scanf ("%f", &prod.valorprod);
        fprintf(pont_arq1, "%0.2f \n", prod.valorprod);

        printf("Salvo ! \n\n");

        printf("Produto cadastrado ! \n\n");
        
	};
    
	break;

		
		
        case 2:
        	
        system("cls || clear");
		system("color 87");

        for (i=0; i<2; i++) {
        
        printf("--------cadastro cliente--------- \n");

        printf ("Digite o seu nome: ");
        scanf ("%s", cli.nome);
        fprintf(pont_arq2, "%s \n", cli.nome);

        printf("Salvo ! \n");

        printf ("Digite o seu cpf: ");
        scanf ("%s", cli.cpf);
        fprintf(pont_arq2, "%s \n", cli.cpf);

        printf("Salvo ! \n");

        printf ("Digite o seu numero de telefone: ");
        scanf ("%s", cli.tel);
        fprintf(pont_arq2, "%s \n", cli.tel);

        printf("Salvo ! \n");

        printf ("Digite o seu endereco: ");
        scanf ("%s", cli.ender);
        fprintf(pont_arq2, "%s \n", cli.ender);

        printf("Salvo ! \n");

    };
    break;
    
    	

        case 3: 
        
        system("cls || clear");
		system("color B1");
		
        for (i=0; i<2; i++) {
        
        printf("--------Efetivar pedido--------- \n");
        
        printf ("Digite o cpf do cliente: ");
        scanf ("%s", ped.cpf);
        fprintf(pont_arq3, "%s \n", ped.cpf);

        printf("Salvo ! \n");

        printf ("Digite o codigo do produto: ");
        scanf ("%s", ped.codprod);
        fprintf(pont_arq3, "%s \n", ped.codprod);

        printf("Salvo ! \n");

        printf ("Data do pedido: ");
        scanf ("%s", ped.datapedido);
        fprintf(pont_arq3, "%s \n", ped.datapedido);

        printf("Salvo ! \n");

        printf ("Quantidade: ");
        scanf ("%d", &ped.quantprod);
        fprintf(pont_arq3, "%d \n", ped.quantprod);

        printf("Salvo ! \n");

    };
    break;
    
    	

        case 4: 
		
		system ("cls || clear");
		system ("color 4F");
		
        printf("Relatorio: ");
        scanf("%s", relatorio);
        printf("Seu relatorio foi salvo :) ");
        fprintf(pont_arq4, "%s \n", relatorio);

    break;

        case 5:

        printf("Saindo ... \n\n");
        break;

        default:
        printf("Opcao invalida \n");

    };

    //fechando arquivo 
    fclose (pont_arq1);
    fclose (pont_arq2);
    fclose (pont_arq3);
    fclose (pont_arq4);

    //pause do sistema
    system("pause");
    return (0);
}
