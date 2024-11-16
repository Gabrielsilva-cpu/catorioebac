#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> //biblioteca respons�vel por cuidar das string

int registro() //fun��o respnsavel por cadastrar os usu�rios no sistema
{
        //inicio cria��o de vari�vel/string
		char arquivo[40];
		char cpf[40];
		char nome[40];
		char sobrenome[40];
		char cargo[40];
		//fim da cria��o de vari�vel
		
		printf("Digite o cpf a ser cadastrado:"); //coletandoninforma��o do usu�rio
		scanf("%s", cpf); //%s refere-se a string
		
		strcpy(arquivo, cpf); //responsavel por copiar os valores das string
		
		FILE *file; //cria o arquivo
		file = fopen(arquivo, "w"); //cria o arquivo e o "w" siginifica escrever e o "a" siginifica atualiza��o
		fprintf(file,cpf);
		fclose(file); //fecha o arquivo
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o nome a ser cadastrado:");
		scanf("%s",nome);
		
		file = fopen(arquivo, "a");
		fprintf(file,nome);
		fclose(file);
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o sobrenome a ser cadastrado:");
		scanf("%s", sobrenome);
		
		file = fopen(arquivo,"a"); //cria o arquivo
		fprintf(file,sobrenome);
		fclose(file); //fecha o arquivo
		
		file = fopen(arquivo, "a");
		fprintf(file,",");
		fclose(file);
		
		printf("Digite o cargo a ser cadastrado:");
		scanf("%s",cargo);
		
		file = fopen(arquivo, "a");
		fprintf(file,cargo);
		fclose(file);
		
		system("pause");
		
}
				


int consulta()
{
	setlocale(LC_ALL, "portuguese"); //definindo a liguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser consultado: ");
	scanf("%s",cpf);
	
	FILE *file;
	file = fopen(cpf, "r"); // "r" siginifica ler
	
	if(file == NULL)
	{
		printf("n�o foi possivel abrir o arquivo, n�o localizado!./n");
	}
		
	while(fgets(conteudo, 200, file) != NULL)
	{
		printf("/nEssa s�o as informa��es do usu�rio:");
		printf("%s", conteudo);
		printf("/n/n");
	}
	
	system("pause");
}


int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf do usu�rio a ser deletado:");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file=fopen(cpf,"r");
	
	if(file==NULL)
	{
		printf("O usu�rio n�o se encontra no sistema!.\n");
		system("pause");
	}
}


int main()
{
	int opcao=0; //definindo vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	
	
		system("cls"); //responsavel por limpar a tela
		
		setlocale(LC_ALL, "portuguese"); //definindo a liguagem
	
		printf("### cart�rio da ebac ###\n\n"); //inicio do menu
		printf("escolha a op��o desejada do menu:\n\n");
		printf("\t1- registrar nomes\n");
		printf("\t2- consultar nomes\n");
		printf("\t3- deletar nomes\n");
		printf("\t4- sair do sistema\n");
		printf("op��o:"); //fim do menu
	
		scanf("%d", &opcao); //armazenando a escolha do usu�rio
	
		system("cls");
		
		switch(opcao) //chamada de fun��es
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
			printf("obrigado por utilizar o sistema!\n");
			system("pause");
			break;	
			
			default:
			printf("essa op��o n�o est� disponivel\n ");
			system("pause");
			break;
			//fim de sele��o
		}
				
			
	}
			
	
		
	
		
		
	
			
	
		
		
		
		
			
	
		
		
		
	
			
	
		
		
		
		
	}

	



