#include <stdio.h>// biblioteca de comunicação com o usuário
#include <stdlib.h>//biblioteca de alocação de espaço de memória
#include <locale.h>//biblioteca de alocação de texto por região
#include <string.h>//biblioteca responsavel pela string
int registro() // Função responsável por cadastrar usuários
{
	//Inocio da criação das strings/variáveis
   char arquivo[40];
   char cpf[40];
   char nome[40];
   char sobrenome[40];
   char cargo[40];
   //Fim da das strings/variáveis
   
   printf("Digite o cpf a ser cadastrado:");//Coletar informações do usuário
   scanf("%s", cpf);//%s- refere-se a strings
   
   strcpy(arquivo, cpf); //resposável por copiar os valores da string
   
   FILE *file; //cria o arquivo
   file = fopen(arquivo,"w"); //cria o arquivo
   fprintf(file,cpf); //salva o valor da variável
   fclose(file); //fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file,",");
   fclose(file);
   
   printf("Digite o nome a ser cadastrado:");//coletar informação do usuário
   scanf("%s",nome);//%s reere-se a string
   
   file = fopen(arquivo, "a");
   fprintf(file,nome);//salva o valor da variável
   fclose(file);// fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);// fecha o arquivo
   
   printf("Digite o sobrenome a ser cadastrado:");//coletar informação do usuáruio
   scanf("%s",sobrenome);//%s refere-se a strings
   
   file = fopen(arquivo, "a");
   fprintf(file,sobrenome);//salva a variável
   fclose(file);//fecha o arquivo
   
   file = fopen(arquivo, "a");
   fprintf(file, ",");
   fclose(file);//fecha o arquivo
   
   printf("Digite o cargo a ser cadastrado:"); // coletar iformação do usuário
   scanf("%s",cargo);// %s refere-se a strings
   
   file = fopen(arquivo, "a");
   fprintf(file,cargo);//salva a variável
   fclose(file);//fecha o arquivo
   
   system("pause");
   
   
   
   
  
}

int consultar()
{
	setlocale(LC_ALL, "portuguese");// Responsavel pelo comando de linguagem
	
	char cpf[40];
	char conteudo[200];
	
	printf("Digite o cpf a ser cadastrado:");//coletar informações do usuário
	scanf("%s",cpf);//%s refere-se a string
	
	FILE *file;//cria o arquivo
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf("Não foi possivel abrir o arquivo.\n");
	}
	
	while(fgets(conteudo, 200, file) != NULL) 
	{
		printf("Essas são as informações do usuário:\n");
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
		printf(" Usuário deletado!\n");
		system("pause");
		
		
			
	}
		
	
	
	
	
}

int main()
{
     int opcao=0; //Definindo variáveis
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
	         printf("Escolha a opção desejada do menu:\n\n");
	         printf("\t1-Registrar nomes\n");
	         printf("\t2-Consultar nomes\n");
	         printf("\t3-Deletar nomes\n\n");//Fim do menu
	         printf("\t4-Sair do sistema\n\n");
	         scanf("%d", &opcao);//armazenando a escolha do usuário
	
	         system("cls");
	 
	 
             switch(opcao)
	         {
	         case 1:
             registro();//chamada de funções
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
		     printf("Esta opção não está disponivel!\n");
	 	      system("pause");
	 	     break;
		     }
        }
    }

   else
      printf("Senha incorreta!");
         


}
     
  
	  

