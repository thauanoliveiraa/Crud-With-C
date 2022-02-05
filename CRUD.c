// Primeiramente, nos incluimos nossas bibliotecas, para poder utilizar suas funções

#include <stdio.h>  // Stdio.h nos usamos para utilizar funções para ler e imprimir dados
#include <stdlib.h>  // Stdlib.h nos usamos para utilizar funções do sistema
#include <conio.h>  // Conio.h nos usamos para utilizar funções como o gets e getch
#include <string.h> // String.h nos usamos para utilizar funções para manipular strings
#include <time.h>  // Time.h nos usamos para utilizar funções relacionadas a espaço tempo * COMO LOCAL TIME E STRUCT TM


int main()   //return main();
{
system("color D"); //Utilizado para mudar a cor da letra ou cor de fundo do terminal (cmd), a letra D corresponde a cor lilás, logo logo vocês verão

// VARIAVEIS DE LOGIN =============================	

	char nome_Funcionario[30]; 
	
	char senha_Funcionario[10];
	
// VARIAVEIS DE ESCOLHA ============================= (RELACIONADA A ESCOLHA DO ADMINSITRADOR, OU SEJA, O QUE IRA FAZER NO PROGRAMA)	 

	int escolha_Funcionario;
	int escolha_Alterar_Excluir_Dados;
	int i, j; // ESCOLHAS 
	
// VARIAVEIS DE  QUANTIDADE DE CADASTRO, ALTERACAO OU EXCLUSAO ============================= (RELACIONADA A QUANTIDADE DE CADASTROS QUE VOCE IRA FAZER, ALTERAR OU EXCLUIR)
										
	int quantidade_Cadastro;
	
	int quantidade_Alterar_Excluir;
	
	int dcs; //DECISAO DE QUAL CADASTRO IRA QUERER ALTERAR OU EXCLUIR (ABREVIAÇÃO DE DECISAO)
	
// VARIAVEIS DE CADASTRO  ============================= (RELACIONADA A LEITURA DOS DADOS DE CADASTRO COMO NOME, EMAIL, CODIGO DO FUNCIONARIO E CPF)	
							
	char nome_Cadastro[1000] [100];
														
	char email_Cadastro[1000] [100];
																	
	char codigo_Cadastro[1000] [100];
	
	char cpf_Cadastro[1000] [100]; 
	
// VARIAVEIS DE PESQUISA DE FUNCIONARIO  ============================= (RELACIONADA A PESQUISA DE DETERMINADO FUNCIONARIO NA EMPRESA)		
	
	char pesquisar_Funcionario[30];
	int encontrado = 0;

// VARIAVEL  DE  ASSINATURA DO FUNCIONARIO  ============================= (RELACIONADA A ASSINATURA DE QUEM ALTEROU OU EXCLUIU DETERMINADO DADO)	
	
	char assinatura[30];

// VARIAVEL  PARA LISTAR (NOMEAR) OS FUNCIONARIOS =============================
	
	char status = {"NOME", "EMAIL", "CODIGO", "CPF"};

// VARIAVEL  DE DECISAO PARA SAIR OU NAO DO PROGRAMA ============================= (RELACIONADA A SAIDA OU REINICIALIZACAO DO PROGRAMA)
	
	char sair_Sim_Nao;
	
	
// INICIO DO PROGRAMA (AREA DE LOGIN)
		printf(" \n Powered by");
		sleep(1);
		printf("...");
		sleep(1);   
		 
		printf(" \n                                       AURORA                 ");
	    printf(" \n                    =====  =   =  =====   =====  =====   =====");
	    printf(" \n                    =   =  =   =  =   =   =   =  =   =   =   =");
	    printf(" \n                    =====  =   =  =====   =   =  =====   =====");
	    printf(" \n                    =   =  =   =  =    =  =   =  =    =  =   =");
	    printf(" \n                    =   =  =====  =    =  =====  =    =  =   =");
	    sleep(1);
	    printf("\n");
		printf(" \n                                 GARANTY TECHNOLOGY");
   		printf("\n");
   		printf("\n Digite ENTER para continuar");
   		getch();
   		printf("\n\n");
		printf ("\n Digite o USUARIO : \t");
		fflush(stdin); // FFLUSH STDIN PARA LIMPAR O "LIXO" DE MEMORIA QUE ACABA FICANDO, E MUITAS VEZES OCASIONA A ALGUM BUG OU CRASH DO PROGRAMA
		gets(nome_Funcionario);
		printf("\n");				
									
		printf ("\n Digite a SENHA : \t");
		fflush(stdin);
		scanf ("%s", &senha_Funcionario); // Colocamos o login e senha normalmente ( o usuario podemos colocar qualquer um, a senha tem que ser a correspondente
		printf("\n");                     // que no caso é admin3323

// IF PARA SENHA =====================================================================================================================================================

		//VERIFICACAO DE SENHA
	for(i=0;senha_Funcionario[i];i++)  // Aqui nos usamos para verificar se a senha digitada é correta
		    senha_Funcionario[i]=tolower(senha_Funcionario[i]);  // Se corresponde com a senha do cargo
		    if(strcmp(senha_Funcionario,"admin3323")==0){  // Aqui funciona assim, iniciamos o nosso for em 0, no nosso laço de parada, definimos a nossa variavel
		    	                                           // que vai ler a senha digitada, apos isso, nosso incremento ira adicionar essa senha, ou seja, inicia em 0
		    		system("cls");                         // para quando terminar a leitura da senha digitada, e adiciona essa senha digitada
		    		printf(" \n LOGIN ADMINISTRADOR ");    // apos, nos pegamos nossa variavel de senha, colocamos ela para receber a conversao para minusculo do que
		            printf(" \n Seja bem vindo(a), %s \n", nome_Funcionario);  // foi digitado, e a funçao strcmp para comparar o que foi digitado com a senha correta
		            sleep(1);                                                 // para entao, entrar no programa ( se a senha for errada ele vai reiniciar o programa)
		            printf(" \n PARA MANTER UM ACESSO CONTROLADO E REGISTRADO\n SERA ARMAZENADA A DATA E HORARIO DE ACESSO");
		            printf("\n");
					printf(" \n Clique ENTER para continuar \t");
		            getch();
		            
// STRUCT DARA E  HORA =====================================================================================================================================================		            
		            
					struct tm *dataHoraAtual;      // Aqui nos definimos nossa estrutura como tm  e completamos com um ponteiro  para ver a data e hora
					                               // Ou seja, nessa estrutura (colecao de variaveis) nos temos a variavel para printar a data e hora atual
					                               //Nos temos a variavel segundos, que recebe nomeacao da propria biblioteca (time_t)
					time_t segundos;               // Temos a variavel time chamando os segundos e temos o nosso ponteiro  recebendo localtime chamando tambem os segundos
					                               // vai ser aonde ira realizar a conversao para minuto, segundo e hora, dias meses e anos, de acorcom com funçoes da 
					                               // propria biblioteca
					time(&segundos);   
					  
					
					dataHoraAtual = localtime(&segundos);

					printf("\n");	            
		            printf("\n Data de acesso : %d / %d / %d", dataHoraAtual->tm_mday, dataHoraAtual->tm_mon+1,  dataHoraAtual->tm_year+1900);
					printf("\n Horario de acesso : %d : %d : %d", dataHoraAtual->tm_hour, dataHoraAtual->tm_min, dataHoraAtual->tm_sec);
					printf("\n");
					printf("\n\n");
					system(" \t pause");
					system("cls");  // Esse system("cls"), eu chamo de system close, pois, tem haver com fechar meio que uma janela, ele 
									//apaga as coisas anteriores (permanecem os dados) e aparece dnv com os novos dados, para evitar poluicao visual
					
					do{ //INICIO DO "DO-WHILE" PARA REPETIR O BLOCO DE CODIGO DO MENU, ATE A ESCOLHA SER DIFERENTE DE 8 (QUE NO CASO É PARA SAIR DO PROGRAMA) 
						
						sleep(1);
						printf(" \n                                       AURORA                          ");
					    printf(" \n                    =====  =   =  =====   =====  =====   =====         ");
					    printf(" \n                    =   =  =   =  =   =   =   =  =   =   =   =         ");
					    printf(" \n                    =====  =   =  =====   =   =  =====   =====         ");
					    printf(" \n                    =   =  =   =  =    =  =   =  =    =  =   =         ");
					    printf(" \n                    =   =  =====  =    =  =====  =    =  =   =         ");
					    printf("\n");
						printf(" \n                                 GARANTY TECHNOLOGY");	
						printf("\n");					
						printf(" \n  OPCAO                               FUNCAO                           ");
						printf(" \n    1 -                    CADASTRAR OUTROS FUNCIONARIOS               "); 
						printf("\n");								
						printf(" \n    2 -                    EXIBIR LISTA DE FUNCIONARIOS                ");
						printf(" \n                    (NOME, EMAIL, CODIGO DO FUNCIONARIO e CPF)         ");
						printf("\n");
						printf(" \n    3 -                    EXIBICAO GERAL DE FUNCIONARIOS              ");
						printf(" \n                                 (POR FUNCIONARIO)                     ");			
						printf("\n");
						printf(" \n    4 -                     PESQUISAR UM FUNCIONARIO                   ");
						printf("\n");
						printf(" \n    5 -                      ALTERAR DADOS DE CADASTRO                 ");
						printf(" \n                      (NECESSARIO ASSINATURA DO ADMINISTRADOR)         ");						
						printf("\n");
						printf(" \n    6 -                      EXCLUIR DADOS DE CADASTRO                 ");
						printf(" \n                      (NECESSARIO ASSINATURA DO ADMINISTRADOR)         ");
						printf("\n");						
						printf(" \n    7 -                             QUEM SOMOS ?                       ");
						printf("\n");						
						printf(" \n    8 -                           FECHAR PROGRAMA                      ");
						printf("\n");
						printf("\n Digite a sua escolha : \t ");
						scanf("%d", &escolha_Funcionario);
						system("cls");
					
						switch(escolha_Funcionario) // aqui nos temos nossa condicional, se a pessoa digitar de 1 a 8, ele ira printar os casos, de acordo com a numeracao
						{  // se a pessoa digitar um numero fora, ele ira reiniciar o menu
							
// 1 CASE CADASTRAR =====================================================================================================================================================							
					
							case 1: 
								system("cls");
								printf(" \n OPCAO SELECIONADA : CADASTRAR OUTROS FUNCIONARIOS");
								printf("\n");
								printf(" \n Por favor, digite a quantidade de funcionarios\n que voce quer cadastrar %s: \t", nome_Funcionario);
								scanf("%d", &quantidade_Cadastro);
								printf("\n\n");
								system("pause");
								system("cls");
								for (i=0;i<quantidade_Cadastro;i++){  // Aqui temos nossa estrutura de repeticao, que vai ate a quantidade de cadastros que voce colocar											
													
										printf(" \n ===============================  ");	
										printf("\n");							 									
										printf ("\n   CADASTRO DO %d FUNCIONARIO", i+1);
										printf("\n");	
										printf(" \n ===============================  ");
										printf("\n");
										
										printf (" \n Digite o NOME COMPLETO do funcionario : \t");
										fflush (stdin);
										scanf ("%[^.\n]s", &nome_Cadastro[i]);  // Uma outra forma de ler do usuario, parecida com o gets ( optei por utilizar esse por conta de bugs relacionados
										                                          // ao gets), ele apenas lê uma string do usuario (considerando os espaços em branco) até que o usuario dê enter, vamos
										printf ("\n Digite o EMAIL do funcionario : \t"); // dizer assim, até quebrar a linha
										fflush (stdin);
							 			scanf ("%[^.\n]s", &email_Cadastro[i]);
							 
										printf ("\n Digite o CODIGO do funcionario : \t");
										fflush (stdin);
										scanf ("%[^.\n]s", &codigo_Cadastro[i]);								 			
							 			
										printf(" \n Digite o CPF do funcionario : \t");
										fflush (stdin);
										scanf ("%[^.\n]s", &cpf_Cadastro[i]);
										system("cls");
														
								}
							printf(" \n Funcionarios cadastrados com sucesso");
							printf(" \n Digite ENTER para continuar");
							getch();
							printf(" \n CADASTRO CONCLUIDO COM SUCESSO !!!");						      
							printf("\n Data de cadastro : %d / %d / %d", dataHoraAtual->tm_mday, dataHoraAtual->tm_mon+1,  dataHoraAtual->tm_year+1900);
							printf("\n Horario de cadastro : %d : %d : %d", dataHoraAtual->tm_hour, dataHoraAtual->tm_min, dataHoraAtual->tm_sec);
							printf("\n\n");	// Em cima podemos ver a operacao da biblioteca time.h, com setas apontando para constantes ja definidas pela propria biblioteca
							system("pause");
							system("cls");
							break;
							
// 2 CASE EXIBIR LISTA =====================================================================================================================================================								
							
							case 2:
							system("cls");
							printf(" \n OPCAO SELECIONADA : EXIBIR LISTA DE FUNCIONARIOS");
							printf("\n Exibindo lista de funcionarios");
							sleep(1);
							printf("...");
							system("cls");
							
							for (i=0; i<quantidade_Cadastro; i++){ // Aqui temos nossa estrutura de repeticao, que vai printar  ate a quantidade de cadastros que voce tiver colocado
								
									printf(" \n ================================================================================");	
									printf("\n");							 									
									printf ("\n      DADOS DO %d CADASTRO",  i+1);
									printf("\n");								
									printf("\n");		
									printf (" \n Nome do funcionario : %s\n", nome_Cadastro [i]);
									printf (" \n Email do funcionario : %s\n", email_Cadastro [i]);
									printf (" \n Codigo do funcionario : %s\n", codigo_Cadastro [i]);
									printf (" \n CPF do funcionario : %s\n", cpf_Cadastro [i]);
									printf("\n");
									printf(" \n ================================================================================");	
									printf(" \n\n\n Dica : Digite ENTER para ( exibir ) a proxima lista ou para ( finalizar ) \t");
									getch();
									printf(" \n ================================================================================");	
									printf("\n\n");

							}	
							system("cls");	
							break;
							
// 3 CASE EXIBICAO GERAL =====================================================================================================================================================								
							
							case 3:
							system("cls");
							printf(" \n OPCAO SELECIONADA : EXIBICAO GERAL DE FUNCIONARIOS");
							printf(" \n Processando");
							sleep(1);
							printf("...");  // Aqui nos temos a exibicao geral de funcionarios, onde, iremos exibir os funcionarios em lista (matriz) com seus respectivos dados
							printf("\n\n");
							printf ("%s%46s%32s%26s \n", "NOME", "EMAIL", "CODIGO", "CPF");
							for(i=0; i<quantidade_Cadastro;i++){
								printf("\n");	   
								printf ("%s%30s%30s%27s \n",nome_Cadastro[i], email_Cadastro[i], codigo_Cadastro[i], cpf_Cadastro[i]); // Com referencia a variavel inteiro i, para percorrer
							}                                                                                                         // por todos os entao cadastros feitos
							printf("\n");
							system("pause"); // Para pausar, esperar o usuario clicar em alguma determinada tecla, para assim continuar (evita bug de passar direto)
							system("cls");			
							break;								
							
// 4 CASE PESQUISAR =====================================================================================================================================================								
							
							case 4:
							system("cls");
							printf(" \n OPCAO SELECIONADA : PESQUISAR UM FUNCIONARIO");
							printf(" \n Processando");
							sleep(1);
							printf("...");
							printf("\n");
							printf(" \n Digite o funcionario que deseja encontrar : \t"); //Usuario ira digitar o nome do usuario que ele quer encontrar
							gets(pesquisar_Funcionario);
							gets(pesquisar_Funcionario); // 2 gets para evitar bug de nao oferecer espaço para receber alguma resposta do usuario
							
							for (i=0; i<quantidade_Cadastro; i++){
								if(strcmp(nome_Cadastro[i], pesquisar_Funcionario)==0){ // Comparacao do que foi digitado na variavel de pesquisa com algum determinado cadastro feito (novamente percorrendo todos)
									printf(" \n Processando seu pedido");
									sleep(1);
									printf("...");
									printf(" \n Apos analise, encontramos %s no sistema", nome_Cadastro [i]);
									encontrado = 1;
									printf(" \n STATUS : Online");  // Aqui, encontrado recebe 1, ou seja, a funçao strcmp ira comparar o que ja esta armazenado na
								}										// memoria com o que foi digitado, se for igual a 0, as strings sao iguais
							}
							if(encontrado != 1){
									printf(" \n Processando seu pedido"); // Aqui,  se encontrado for diferente de 1, ele irá retornar ao usuario que nao foi possivel
									sleep(1);                             // encontrar determinado nome no sistema
									printf("...");
									printf(" \n Apos analise, nao foi possivel encontrar %s no sistema", nome_Cadastro [i]);
									printf(" \n STATUS : Offline");
							}
							printf("\n Data de pesquisa : %d / %d / %d", dataHoraAtual->tm_mday, dataHoraAtual->tm_mon+1,  dataHoraAtual->tm_year+1900);
							printf("\n Horario final de pesquisa : %d : %d : %d", dataHoraAtual->tm_hour, dataHoraAtual->tm_min, dataHoraAtual->tm_sec);							
							printf("\n\n");	
							system(" \t pause");
							system("cls");	
							break;
								
// 5 CASE ALTERAR DADOS=====================================================================================================================================================	

								case 5:
								system("cls"); //Iniciamos agora a parte de alteração de dados, onde, nos apenas iremos pedir para que o usuario assine
								printf(" \n OPCAO SELECIONADA : ALTERAR DADOS DE CADASTRO "); // com seu nome (pedido do programa, para deixar registrado 
								sleep(1);                                                  // por quem foi alterado
								printf("\n\n");
								printf(" \n Assine com seu nome completo para concordar com todos os\n termos de alteracao : \t");
								gets(assinatura);
								gets(assinatura);	
								
								printf("\n");										
								printf(" \n Digite ENTER para continuar \t");
								getch();
								printf("\n");	
								printf (" \n 1 -     ALTERAR  TODOS OS DADOS DE CADASTRO    \n");		
								printf (" \n 2 -      ALTERAR  APENAS NOME DE CADASTRO      \n");
								printf (" \n 3 -      ALTERAR  APENAS EMAIL DE CADASTRO     \n");
								printf (" \n 4 -     ALTERAR  APENAS CODIGO DE CADASTRO     \n");
								printf (" \n 5 -       ALTERAR  APENAS CPF DE CADASTRO      \n");	
								printf("\n\n");								
								printf(" \n Digite a sua escolha %s : \t", assinatura);
								scanf("%d", &escolha_Alterar_Excluir_Dados);   // Aqui utilizamos a variavel de escolha para alteraçao ou exclusao de dados
                                                                                 // (que sera utilizada na exclusao tambem)
								system("cls");
								printf(" \n Digite a quantidade de cadastros que voce quer alterar : \t ");
								scanf("%d", &quantidade_Alterar_Excluir);  // Aqui pedimos ao usuario a quantidade de cadastros que ele quer alterar

								switch(escolha_Alterar_Excluir_Dados)
								{
									case 1:				 // E comecamos os cases, com base na tabela mostrada acima, onde a pessoa escolhe alteracao de
										system("cls");	 // determinada coisa
										printf(" \n OPCAO SELECIONADA : ALTERAR TODOS OS DADOS DE CADASTRO ");
										printf("\n");		// A alteracao e bem simples, nos apenas utilizamos uma estrutura de repeticao, para ir ate 				
										for (i=0;i<quantidade_Alterar_Excluir;i++){  // a quantidade de cadastros que o usuario quer alterar, e repetimos as variaveis de cadastro
												printf(" \n Digite qual cadastro voce quer alterar\n (lembre-se da quantidade de cadastros realizados) : \t "); // a ultima leitura sera considerada como alteracao
												scanf("%d", &dcs); // Aqui utilizamos para ler do usuario, a numeracao do cadastro que ele quer alterar
												printf("\n");
												
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   ALTERACAO DO %d CADASTRO", dcs); // Chamamos nossa variavel de dcs como disse anteriormente, variavel de decisao
												printf("\n");	                                 // que irá printar a numeracao digitada pelo usuario
												printf(" \n ===============================  ");
												printf("\n");
													
												printf (" \n Digite o NOVO NOME COMPLETO do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &nome_Cadastro[dcs-1]); // A logica aqui, funciona em ler do usuario o novo nome do funcionario, aonde trocamos "[i]" por
											                                                            // dcs-1, como em qualquer matriz, começamos do 0, aqui, o numero digitado na leitura da decisao 
												printf ("\n Digite o NOVO EMAIL do funcionario : \t");  // sera subtraido por 1, onde ira corretamente a regiao escolhida, exemplo :  
												fflush (stdin);                                         // digitamos 2 na decisao, mas, na matriz 2 é entendido como 3 (0,1 e 2 = 3 numeros), por conta disso, sera      
										 		scanf ("%[^.\n]s", &email_Cadastro[dcs-1]);             // necessario subtrair 1 para chegar na numeracao desejada
										 
												printf ("\n Digite o NOVO CODIGO do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &codigo_Cadastro[dcs-1]);								 			
										 			
												printf(" \n Digite o NOVO CPF do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &cpf_Cadastro[dcs-1]);
												system("cls");
												printf (" \n Novos dados para NOME do funcionario  : %s \n", nome_Cadastro[dcs-1]);  // aqui sera printado de acordo com a logica explicada acima
												printf (" \n Novos dados para EMAIL do funcionario : %s \n", email_Cadastro[dcs-1]);
												printf (" \n Novos dados para CODIGO do funcionario : %s \n", codigo_Cadastro[dcs-1]);
												printf (" \n Novos dados para CPF do funcionario : %s \n", cpf_Cadastro[dcs-1]);																				
												printf("\n\n");
												system("pause");	
												system("cls");
											}																																										
									break;
									
									case 2:   // Daqui em diante, sao os cases de acordo com a escolha do usuario, mas funcionam da mesma forma que o de cima
										system("cls");	
										printf(" \n OPCAO SELECIONADA : ALTERAR APENAS NOME DE CADASTRO ");
										printf("\n");
									for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer alterar\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);
																
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   ALTERACAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												printf (" \n Digite o NOVO NOME COMPLETO do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &nome_Cadastro[dcs-1]);
												system("cls");
												printf (" \n  Novos dados para NOME do funcionario  : %s \n", nome_Cadastro[dcs-1]);																				
												printf("\n\n");	
												system("pause");
												system("cls");
											}																								
									break;
									
									case 3:
										system("cls");	
										printf(" \n OPCAO SELECIONADA : ALTERAR APENAS EMAIL DE CADASTRO ");
										printf("\n");
									for (i=0;i<quantidade_Alterar_Excluir;i++){ 										
												printf(" \n Digite qual cadastro voce quer alterar\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);				
																
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   ALTERACAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												printf (" \n Digite o NOVO EMAIL do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &email_Cadastro[dcs-1]);
												system("cls");
												printf (" \n  Novos dados para EMAIL do funcionario  : %s \n", email_Cadastro[dcs-1]);																				
												printf("\n\n");
												system("pause");	
												system("cls");
											}																							
									break;
									
									case 4:
										system("cls");	
										printf(" \n OPCAO SELECIONADA : ALTERAR APENAS CODIGO DE CADASTRO ");
										printf("\n");
									for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer alterar\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);
																
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   ALTERACAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												printf (" \n Digite o NOVO CODIGO do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &codigo_Cadastro[dcs-1]);
												system("cls");
												printf (" \n  Novos dados para EMAIL do funcionario  : %s \n", codigo_Cadastro[dcs-1]);																				
												printf("\n\n");	
												system("pause");
												system("cls");
											}																							
									break;
									
									case 5:
										system("cls");	
										printf(" \n OPCAO SELECIONADA : ALTERAR APENAS CPF DE CADASTRO ");
										printf("\n");
										for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer alterar\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);				
												
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   ALTERACAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												printf (" \n Digite o NOVO CPF do funcionario : \t");
												fflush (stdin);
												scanf ("%[^.\n]s", &cpf_Cadastro[dcs-1]);
												system("cls");
												printf (" \n  Novos dados para EMAIL do funcionario  : %s \n", cpf_Cadastro[dcs-1]);																				
												printf("\n\n");	
												system("pause");
										 		system("cls");
											}																																																							
									break;												
								}
								printf(" \n ALTERACAO CONCLUIDA COM SUCESSO !!!"); // Aqui recebemos a mensagem final de finalizacao de cadastro
								printf(" \n Alterado por : %s", assinatura);						      
								printf("\n Data de alteracao : %d / %d / %d", dataHoraAtual->tm_mday, dataHoraAtual->tm_mon+1,  dataHoraAtual->tm_year+1900);
								printf("\n Horario final de alteracao : %d : %d : %d", dataHoraAtual->tm_hour, dataHoraAtual->tm_min, dataHoraAtual->tm_sec);
								printf("\n\n");	
								system("pause");
								system("cls");												
								break;	;

// 6 CASE EXCLUIR DADOS =====================================================================================================================================================	
								
							case 6:
							system("cls");
							printf(" \n OPCAO SELECIONADA : EXCLUIR DADOS DE CADASTRO "); // Iniciando a parte de exclusao, temos uma area parecida com a area de
							printf(" \n Processando"); //alteracao, aqui tambem iremos pedir a assinatura do funcionario, e exibiremos a tabela de escolhas de exclusao
							sleep(1);
							printf("...");
							printf("\n");
							printf(" \n Assine com seu nome completo para concordar com todos os\n termos de exclusao : \t");
							gets(assinatura);
							gets(assinatura);	
							
							printf("\n");										
							printf(" \n Digite ENTER para continuar \t");
							getch();
							printf("\n");	
							printf (" \n 1 -       EXCLUIR  TODOS OS DADOS DE CADASTRO     \n");		
							printf (" \n 2 -         EXCLUIR APENAS NOME DE CADASTRO       \n");
							printf (" \n 3 -        EXCLUIR  APENAS EMAIL DE CADASTRO      \n");
							printf (" \n 4 -        EXCLUIR  APENAS CODIGO DE CADASTRO     \n");
							printf (" \n 5 -         EXCLUIR  APENAS CPF DE CADASTRO       \n");	
							printf("\n\n");								
							printf(" \n Digite a sua escolha %s : \t", assinatura);
							scanf("%d", &escolha_Alterar_Excluir_Dados); //Novamente essa variavel, dessa vez para ler a escolha de exclusao
						
							system("cls");
							printf(" \n Digite a quantidade de cadastros que voce quer excluir : \t ");
							scanf("%d", &quantidade_Alterar_Excluir);

							switch(escolha_Alterar_Excluir_Dados)	
							{	
								case 1:				
										system("cls");	
										printf(" \n OPCAO SELECIONADA : EXCLUIR TODOS OS DADOS DE CADASTRO ");
										printf("\n");						
										for (i=0;i<quantidade_Alterar_Excluir;i++){ 										
												printf(" \n Digite qual cadastro voce quer excluir\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);			
																
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   EXCLUSAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
												
												memset(nome_Cadastro[dcs-1],0,sizeof(nome_Cadastro[dcs-1])); //Utilizando a mesma logica de dcs-1, nos utilizamos 
												printf("\n NOME DO FUNCIONARO FOI EXCLUIDO COM SUCESSO !!!");// a funcao memset, que é a nossa funcao para 
												printf("\n");                                                // copiar um determinado caractere, para a entao string definida em sua sintaxe : 
																											// memset(nome_da_variavel, valor a ser copiado(aqui vai ser o valor que vai ser colocado no lugar dos dados da variavel), size_o que for pra definir(nome_da_variavel)	                 
												memset(email_Cadastro[dcs-1],0,sizeof(email_Cadastro[dcs-1]));
												printf("\n CADASTRO DO FUNCIONARIO FOI EXCLUIDO COM SUCESSO !!!"); // sizeof que ira retornar ao numero de bytes da variavel, como e uma caractere, sera 0 (ZERO), portanto, será apagada 
												printf("\n");
						
												memset(codigo_Cadastro[dcs-1],0,sizeof(codigo_Cadastro[dcs-1]));
												printf("\n CODIGO DO FUNCIONARIO FOI EXCLUIDO COM SUCESSO !!!");
												printf("\n");						
												
												memset(cpf_Cadastro[dcs-1],0,sizeof(cpf_Cadastro[dcs-1]));
												printf(" \n CPF DO FUNCIONARIO FOI EXCUIDO COM SUCESSO !!!");
												printf("\n");
													
												system("pause");
												system("cls");	
											}
									break;
									
									case 2: //Abaixo seguimos a mesma logica
										system("cls");	
										printf(" \n OPCAO SELECIONADA : EXCLUIR APENAS NOME DE CADASTRO ");
										printf("\n");
									for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer excluir\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);	
												
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   EXCLUSAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
												
												memset(nome_Cadastro[dcs-1],0,sizeof(nome_Cadastro[dcs-1]));
												printf("\n NOME DO FUNCIONARO FOI EXCLUIDO COM SUCESSO !!!");
												printf("\n");
												system("pause");
												system("cls");
											}
									break;
									
									case 3:
										system("cls");	
										printf(" \n OPCAO SELECIONADA : EXCLUIR APENAS EMAIL DE CADASTRO ");
										printf("\n");
									for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer excluir\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);									
							
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n    EXCLUSAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												memset(email_Cadastro[dcs-1],0,sizeof(email_Cadastro[dcs-1]));
												printf("\n EMAIL DO FUNCIONARO FOI EXCLUIDO COM SUCESSO !!!");
												printf("\n");
												system("pause");
												system("cls");
												
											}													
									break;
									
									case 4:
										system("cls");	
										printf(" \n OPCAO SELECIONADA : EXCLUIR APENAS CODIGO DE CADASTRO ");
										printf("\n");
									for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer excluir\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);							
																
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   EXCLUSAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												memset(nome_Cadastro[dcs-1],0,sizeof(nome_Cadastro[dcs-1]));
												printf("\n CODIGO DO FUNCIONARO FOI EXCLUIDO COM SUCESSO !!!");
												printf("\n");
												system("pause");
												system("cls");
											}
																																																							
									break;
									
									case 5:
										system("cls");	
										printf(" \n OPCAO SELECIONADA : EXCLUIR APENAS CPF DE CADASTRO ");
										printf("\n");
										for (i=0;i<quantidade_Alterar_Excluir;i++){ 											
												printf(" \n Digite qual cadastro voce quer excluir\n (lembre-se da quantidade de cadastros realizados) : \t ");
												scanf("%d", &dcs);		
																
																
												printf(" \n ===============================  ");	
												printf("\n");							 									
												printf ("\n   EXCLUSAO DO %d CADASTRO", dcs);
												printf("\n");	
												printf(" \n ===============================  ");
												printf("\n");
													
												memset(nome_Cadastro[dcs-1],0,sizeof(nome_Cadastro[dcs-1]));
												printf("\n CPF DO FUNCIONARO FOI EXCLUIDO COM SUCESSO !!!");
												printf("\n");
												system("pause");
												system("cls");
											}
																																																							
									break;												
								}
								system("pause");
								system("cls");
								printf(" \n EXCLUSAO CONCLUIDA COM SUCESSO !!!");
								printf(" \n Excluido por : %s", assinatura);						      
								printf("\n Data de exclusao : %d / %d / %d", dataHoraAtual->tm_mday, dataHoraAtual->tm_mon+1,  dataHoraAtual->tm_year+1900);
								printf("\n Horario final de exclusao : %d : %d : %d", dataHoraAtual->tm_hour, dataHoraAtual->tm_min, dataHoraAtual->tm_sec);
								printf("\n\n");	
								system("pause");
								system("cls");									
								break;							
							
// 7 CASE QUEM SOMOS =====================================================================================================================================================								
							
							case 7: //Função a mais, so printa informaçoes da empresa
								printf(" \n                                       AURORA                                       ");
							    printf(" \n                    =====  =   =  =====   =====  =====   =====         ");
							    printf(" \n                    =   =  =   =  =   =   =   =  =   =   =   =         ");
							    printf(" \n                    =====  =   =  =====   =   =  =====   =====         ");
							    printf(" \n                    =   =  =   =  =    =  =   =  =    =  =   =         ");
							    printf(" \n                    =   =  =====  =    =  =====  =    =  =   =         ");
							    printf("\n");
								printf(" \n                                 GARANTY TECHNOLOGY");	
								printf("\n");	
								getch();											
								printf(" \n 1.0 -  Somos uma empresa de tecnologia, voltada a protecao de dados,             ");
								printf(" \n     informacoes e seguranca empresariais ou pessoais. Buscamos  garantir         ");
								printf(" \n   a confidencialidade, integridade, disponibildiade e estabilidade aos nossos    ");
								printf(" \n                                  clientes.                                       ");
								printf("\n\n");
								getch();
								
								printf(" \n 1.1 -  Uma empresa nascida e criada no Brasil, especificamente em Salvador       ");
								printf(" \n            Bahia,administrada pelo seu CEO e fundador Thauan Oliveira            ");
								printf(" \n                          ( INSTAGRAM : @thx0liver ).                             ");
								getch();
								printf("\n\n");
								
								printf(" \n 2.0 -   Porque AURORA ? Aurora, um dos fenomenos opticos mais belos              ");
								printf(" \n        do planeta. Bela, porem complexa, somos o FENOMENO, lancamos              ");
								printf(" \n                                a tendencia.                                      ");
								printf("\n\n");
								getch();
								
									
								printf( " \n 2.1 -  Talvez voce ja tenha entrado em contato conosco, apenas nao              ");
								printf("  \n                   nos viu, mas garantimos, estavamos la !!!                     ");
								printf("\n\n");
								getch();
								
								
								printf(" \n  3.0 -      Nao tenha medo, junte-se a nos, porque isso e AURORA.                ");
								printf("\n\n");
								getch(); 
								
								 
								printf(" \n  3.1 -                        MADE BY AURORA :                                   ");
								printf(" \n                             AURORA PROJECT CARS                                  ");
								printf(" \n                            AURORA PROJECT CHEETAH                                ");
								printf(" \n                           AURORA PROJECT WHATSAPP                                ");
	 							printf("\n\n");
								getch();
								system("cls"); 	
								break;
							
// 8 CASE SAIR =====================================================================================================================================================								
							
							case 8: // Case para saida, onde, o usuario ira escolher se deseja mesmo sair, ou nao, caso sim, ele ira finalizar o processo do programa
							system("cls"); //Caso ele escolha nao, o sistema nao sera fechado, mas sim reinicializado (para evitar bugs de sistema)
							printf(" \n Processando");
							sleep(1);
							printf("...");
							printf("\n");
							printf("\n Gostaria mesmo de fechar o sistema ? (S - sim / N - nao) \t");
							scanf("%s", &sair_Sim_Nao);
							switch(sair_Sim_Nao)
							{
								
								case 'N':	
									printf(" \n ESCOLHA : DISCORDAR - FECHAR SISTEMA");
									printf("\n");
									sleep(1);
									printf(" \n AVISO, O SISTEMA SERA REINICIADO DENTRO DE ALGUNS INSTANTES");
									sleep(1);
									printf("...");
									sleep(1);
									printf(" \n Powered by");
									sleep(1);
									printf("...");
									sleep(1);   
									printf(" \n                                       AURORA                 ");
									printf(" \n                    =====  =   =  =====   =====  =====   =====");
									printf(" \n                    =   =  =   =  =   =   =   =  =   =   =   =");
									printf(" \n                    =====  =   =  =====   =   =  =====   =====");
									printf(" \n                    =   =  =   =  =    =  =   =  =    =  =   =");
									printf(" \n                    =   =  =====  =    =  =====  =    =  =   =");
									printf("\n");
									printf(" \n                                 GARANTY TECHNOLOGY");
									printf("\n");
									printf(" \n                       Obrigado por utilizar nosso sistema    ");
									sleep(1);
									printf(" \n                                 REINICIANDO SISTEMA          ");
									sleep(1);
									printf(" \n                                          3                   ");
									sleep(1);
									printf(" \n                                          2                   ");
									sleep(1);
									printf(" \n                                          1                   ");
									system("cls");
									return main(); //Parta retornar a função principal, onde damos inicio ao programa ( teoricamente, reinicializar)
									break;								
								
								
								case 'S':
									printf(" \n ESCOLHA : CONCORDAR - FECHAR SISTEMA");
									printf("\n");
									sleep(1);
									printf(" \n AVISO, O SISTEMA SERA FECHADO DENTRO DE ALGUNS INSTANTES");
									sleep(1);
									printf("...");
									sleep(1);
									system("cls");
									printf(" \n Powered by");
									sleep(1);
									printf("...");
									sleep(1);   
									printf(" \n                                       AURORA                                       ");
									printf(" \n                    =====  =   =  =====   =====  =====   =====");
									printf(" \n                    =   =  =   =  =   =   =   =  =   =   =   =");
									printf(" \n                    =====  =   =  =====   =   =  =====   =====");
									printf(" \n                    =   =  =   =  =    =  =   =  =    =  =   =");
									printf(" \n                    =   =  =====  =    =  =====  =    =  =   =");
									printf("\n");
									printf(" \n                                 GARANTY TECHNOLOGY");
									printf("\n");
									sleep(1);
									printf(" \n                       Obrigado por utilizar nosso sistema    ");
									system("exit(1)");
									break;	//Programa finalizado													
								}				
					}
				}while(escolha_Funcionario!=8);	//Repita o menu, ate escolha do funcionario for diferente de 8			
			}	
				
// ELSE PARA SENHA =====================================================================================================================================================	
				
			else{
				system("cls");		
				printf(" \n Por favor, digite a senha  corretamente"); //Else para senha, caso a senha digitada seja incorreta, o sistema sera reinicializado
				printf("\n");
				sleep(1);
				printf(" \n REINICIANDO SISTEMA ");	
				sleep(1);
				printf(" \n          3          ");
				sleep(1);
				printf(" \n          2          ");
				sleep(1);
				printf(" \n          1          ");
				system("cls");
				return main();			
			}					
} // FINAL DO PROGRAMA
