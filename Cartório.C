#include <stdio.h> //biblioteca de comunicação com usuário
#include <stdlib.h> //biblioteca de alocação de espaço em memória
#include <locale.h> //biblioteca de alocações de texto por região0
#include <string.h> //biblioteca responsável por cuidar das string

int registro()
{
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	
	printf("Digite o cpf a ser cadastrado: ");
	scanf("%s", cpf);
		
    strcpy(arquivo, cpf); //responsável por copiar os valores das string
    
    FILE *file; //cria o arquivo
    file = fopen(arquivo, "w"); //cria o arquivo
    fprintf(file,cpf); //salvo o valor da variável
    fclose(file); //fecha o arquivo
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o nome a ser cadastrado: ");
    scanf("%s",nome);
    
    file = fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o sobrenome a ser cadastrado: ");
    scanf("%s",sobrenome);
    
    file = fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file = fopen(arquivo, "a");
    fprintf(file, ",");
    fclose(file);
    
    printf("Digite o cargo a ser cadastrado: ");
    scanf("%s",cargo);
    
    file = fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    system("pause");
        
}

int consulta()
{
	printf("Você escolheu consultar os nomes!\n");
	system("pause");
}

int deletar()
{
	printf("Você escolheu deletar nomes!\n");
	system("pause");
}
	 	 
	 	 
	 	 
int main()
	{
	int opcao=0; //definindo variáveis
	int laco=1;
	
	for(laco=1;laco=1;)
    {
         system("cls");	 
	 
         setlocale(LC_ALL, "Portuguese");//Definindo a linguagem
    
	     printf("###Cartório da EBAC ###\n\n");//início do menu
       	printf("Escolha a opção desejada do menu:\n\n");
     	printf("\t1 - Registrar nomes\n");
	     printf("\t2 - Consultar nomes\n");
     	printf("\t3 - Deletar nomes\n\n");
     	printf("\t4 - Sair do sistema\n\n ");
     	printf("Opção: ");//Fim do menu
	
       	scanf("%d", &opcao);//armazenando a escolha do usuário
	
	     system("cls");
	
       	
         switch(opcao) //início de seleção
         {
		    case 1:
		    registro();
		    break;
		    
		    case 2:
		    consulta();
		    break;
		    
		    case 3:
		    deletar();
		    break;
		    
		    case 4:
		    printf("Obrigado por utilizar o sistema!\n");
		    return 0;
		    break;
		    
		    default:
		    printf("Essa opçâo nâo está disponível!\n");
		    system("pause");
		    break;
		} //fim da seleção
		    		 
     }
}







