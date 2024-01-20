#include <stdio.h>// biblioteca de comunica��o com o usu�rio
#include <stdlib.h>//biblioteca de aloca��o de espa�o de mem�ria
#include <locale.h>//biblioteca de aloca��o de texto por regi�o
#include <string.h>//biblioteca responsavel pela string
int registro() // Fun��o respons�vel por cadastrar usu�rios
{
	//Inocio da cria��o das strings/vari�veis
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   //Fim da das strings/vari�veis
   
   printf("Digite o cpf a ser cadastrado:");//Coletar informa��es do usu�rio
   scanf("%s", cpf);//%s- refere-se a strings
   
   strcpy(arquivo, cpf); //respos�vel por copiar os valores da string
   
   FILE *file; //cria o arquivo
   file = fopen(arquivo,"w"); //cria o arquivo
   fprintf(file,cpf); //salva o valor da vari�vel
   fclose(file); //fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado:");//coletar informa��o do usu�rio
   scanf("%s",nome);//%s reere-se a string
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);//salva o valor da vari�vel
   fclose(file);// fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);// fecha o arquivo
   
   printf("Digite o sobrenome a ser cadastrado:");//coletar informa��o do usu�ruio
   scanf("%s",sobrenome);//%s refere-se a strings
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);//salva a vari�vel
   fclose(file);//fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);//fecha o arquivo
   
   printf("Digite o cargo a ser cadastrado:"); // coletar iforma��o do usu�rio
   scanf("%s",cargo);// %s refere-se a strings
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);//salva a vari�vel
   fclose(file);//fecha o arquivo
   
   system("pause");
   
   
   
   
  
}

int consultar()
{
	setlocale(LC_ALL, "portuguese");// Responsavel pelo comando de linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser cadastrado:");//coletar informa��es do usu�rio
	scanf("%s",cpf);//%s refere-se a string
	
	FILE *file;//cria o arquivo
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("N�o foi possivel abrir o arquivo.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL) 
	{
		printf("Essas s�o as informa��es do usu�rio:\n");
		printf("%s", conteudo);
		printf("\n\n"); 
			
    }
 
    system("pause");
    
}
 
int deletar()
{
	char cpf[40];
	
	printf("Digite o cpf a ser deletado: ");
	scanf("%s",cpf);
	
	remove(cpf);
	
	FILE *file;
	file = fopen(cpf, "r");
	
	if(file == NULL)
	{
		printf(" Usu�rio deletado!\n");
		system("pause");
		
		
			
	}
		
	
	
	
	
}

int main()
{
     int opcao=0; //Definindo vari�veis
     int laco=1;
     char senhadigitada[10]="a";
     int comparacao;
	 
	 printf("\tFicha de registro da EBAC\n\n");
	 printf("Login de administrador\n\nPor favor, digite sua senha:");
	 scanf("%s",senhadigitada);
	 
	 comparacao = strcmp(senhadigitada, "123");
	 
	 if(comparacao == 0)
	 {
	 	
	 
        system ("cls");
        for(laco=1;laco=1;)
 	    {
 		
 		
	         setlocale(LC_ALL, "portuguese"); //Definindo a linguagem
	 
	         printf("###Ficha de registro da EBAC###\n\n");//Inicio do menu
	         printf("Escolha a op��o desejada do menu:\n\n");
	         printf("\t1-Registrar nomes\n");
	         printf("\t2-Consultar nomes\n");
	         printf("\t3-Deletar nomes\n\n");//Fim do menu
	         printf("\t4-Sair do sistema\n\n");
	         scanf("%d", &opcao);//armazenando a escolha do usu�rio
	
	         system("cls");
	 
	 
             switch(opcao)
	         {
	         case 1:
             registro();//chamada de fun��es
	 	     break;
	 	
	 	     case 2:
	 	     consultar();
	 	     break;
	 	
	 	     case 3:
	         deletar();
	         break;
	         
	         case 4:
	         printf("Obrigado por utilizar o sistema!\n");
			 return 0;
			 break;	
	         
	         
	         
	 	     default:	 	
		     printf("Esta op��o n�o est� disponivel!\n");
	 	      system("pause");
	 	     break;
		     }
        }
    }

   else
      printf("Senha incorreta!");
         


}
     
  
	  

