#include<locale.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>

//int "%d", &variavel
//char/string "%s", &variavel

   int main (void)
    {
	int  diceClass, diceRace, resp;    
	char name;
     	 setlocale(LC_ALL, "Portuguese");
     		printf("\nOlá, este programa está sendo desenvolvido aos poucos, com muitas falhas,\nporém em crescimento, agradeço a compreensão de todos. -Arielito/Leira ^~Ciaossu~");
      		printf("\n\n__Ciaossu, Eu...Sou...S.I.A!---SISTEMA INTELIGENTE DE AJUDA___\n");
      		printf("Fui criada para auxiliar em jogatinas de RPG: Role-Playing Game!");
      		printf("\n\nPrefere me chamar por outro nome?\nComo gostaria de me chamar?%s\n\n", &name);
      		scanf("%s", &name);
      		printf("\nPrazer, sou a(o) - %s!\n", &name);
			//printf("sou uma mente virtual, ainda sou uma versão Beta,\nporém mesmo com funções simples e iniciais, irei aprendendo , meu mestre!\n\n\n");
      	
      			printf("\nMeu caro Jogador ,Você gostaria de Jogar?");
      			printf("\n Digite 1 para Sim ou 2 para Não: \n\n");
      			scanf("%d", &resp);
      			
      			if(resp>=2){
      				printf("Até outra hora, Adeus!");
      				exit(0); // return 0;		
      			}else(resp==1);
      			 
 			printf("\nPrimeiramente, esta é a criação de Personagens.\n\nVamos escolher sua classe!!\nMe diga um número de 1 a 12:\n");
      		scanf("\n\n%d",&diceClass);
      	
      		switch(diceClass){
			  
      				case 1:
      					printf("\nEssa é a sua Classe - Bárbaro(Barbarian)\n");
      				break;
      				
      				case 2:
      					printf("\nEssa é a sua Classe - Bardo(Bard)\n");
      				break;
      				
      				case 3:
      					printf("\nEssa é a sua Classe - Bruxo(Warlock)\n");
      				break;
      				
      				case 4:
      					printf("\nEssa é a sua Classe - Clérigo(Cleric)\n");
      				break;
      				
      				case 5:
      					printf("\nEssa é a sua Classe - Druida(Druid)\n");
      				break;
      				
      				case 6:
      					printf("\nEssa é a sua Classe - Feiticeiro(Sorcerer)\n");
      				break;
      				
      				case 7:
      					printf("\nEssa é a sua Classe - Guerreiro(Warrior)\n");
      				break;
      				
      				case 8:
      					printf("\nEssa é a sua Classe - Ladino(Rogue)\n");
      				break; 
      				
      				case 9:
      					printf("\nEssa é a sua Classe - Mago(Wizard)\n");
      				break;
      				
      				case 10:
      					printf("\nEssa é a sua Classe - Monge(Monk)\n");
      				break;
      				
      				case 11:
      					printf("\nEssa é a sua Classe - Paladino(Paladin)\n");
      				break;
      				
      				case 12:
      					printf("\nEssa é a sua Classe - Patrulheiro(Ranger)\n");
      				break;
      				
      				default :
      					printf("Você é péssimo em Decisões...\n");
      					
				  }
				  printf("\nVamos para a segunda fase, a escolha de Raças:\nMe fale outro Número...\n");
				  scanf("\n\n%d",&diceRace);
				  
				  switch(diceRace){
				  	
				  	case 1:
				  		printf("\nEssa é a sua Raça - Anão(Dwarf)");
				  	break;
				  	
				  	case 2:
				  		printf("\nEssa é a sua Raça - Elfo(Elf)");
				  	break;
				  	
				  	case 3: 
				  		printf("\nEssa é a sua Raça - Halfling");
				  	break;
				  	
				  	case 4:
				  		printf("\nEssa é a sua Raça - Humano(Human)");
				  	break;
				  	
				  	case 5:
				  		printf("\nEssa é a sua Raça - Draconato(Dragonborn)");
				  	break;
				  	
				  	case 6:
				  		printf("\nEssa é a sua Raça - Gnomo(Gnome)");
				  	break;
				  	
				  	case 7:
				  		printf("\nEssa é a sua Raça - Meio-Elfo(Half-Elf)");
				  	break;
				  	
				  	case 8:
				  		printf("\nEssa é a sua Raça - Meio-Orc(Half-Orc)");
				  	break;
				  	
				  	case 9:
				  		printf("\nEssa é a sua Raça - Tiefling");
				  	break;
				  	
				  	default:
				  		printf("\n\nBem, acho que você se identifica mais sendo você mesmo...");
				  }
				  printf("\n\nAgora você já sabe sua classe e sua Raça...Podemos Começar?\n");
				  printf("Este será um RPG Textual, ou seja, toda a ambientação será descrita,\nsua única função será escolher e tomar as decisões.");
				  printf("\n\nVocê é um jovem aventureiro, começou neste ramo faz pouco tempo, então seus mentores apenas lhe entregam simples missões,\nA questão é que você recebeu uma missão:\n ");
				  printf("\n-Encontrar a criança desaparecida, sumiu há 2 dias atrás, tem mais ou menos 10 anos, cabelos louros e olhos castanhos.\n");
				  printf("\n*Você sai do Vilarejo Matoi e encontra dois caminhos, a floresta e o riacho:\n Por qual deles você deseja Seguir?");
				  printf("\n Digite 1 para Floresta ou 2 para Riacho: \n\n");
      			  scanf("%d", &resp);
      			
      			if(resp == 1){
      				printf("\n Você segue pela Floresta, o cair da noite se aproxima. É por volta das 20h, ao caminhar,\npercebe uma certa luminosidade a sua direita e ouve um certo barulho de agua na sua Esquerda...\n\nO que você faz?1- ir p/Direita / 2- ir p/ Esquerda!");
      					scanf("%d", &resp);
      						if(resp == 1){
      							printf("\nVocê caminha em direção à luz, vê uma fogueira e pessoas em volta.\nObserva esses seres arrastando algumas crianças Amarradas em Direção ao Fogo.\n");
      							printf("\nO que faz? 1 - Ignorar / 2- Ajudar as crianças!");
      								scanf("%d", &resp);
      									if(resp== 1){
      										printf("\nVocê deixa a situação ocorrer, dá as costas a tudo aquilo, se vira e vai embora...\nVocê caminha de volta ao vilarejo ao som de crianças agonizando...\n\n");
      										exit(0);	
										}if(resp == 2){
										  	printf("\nVocê corre em direção a Fogueira , Luta contra aqueles seres.\nVocê os Vence e Salva as Crianças, por pelo menos uma noite, você se tornou a Esperança...");
										  	exit(0);
										}
							 if(resp == 2){
								printf("\nVocê caminha e chega a um Lago, lá você encontra um lago com as águas em um tom escuro, mas brilhante.\nO local é inóspito, mas você ouve uma canção que te seduz.");
							  }
							}
    				}if(resp == 2){
    					printf("\nVocê chega próximo ao Riacho, encontra muitas criaturas marinhas mortas próximas  ao rio,\nVocê vê uma raposa com a pata presa embaixo de um tronco.!");
    					printf("\nO que você faz? 1- Ajudar a Raposa / 2- Dar as costas\n");
    						scanf("%d", &resp);
    							if(resp == 1){
    								printf("\nVocê levanta o tronco, com dificuldade, mas consegue. Aquele Animal olha para você com amor.\nDesde aquele dia aquela raposa te segue e o protege, você conseguiu um companheiro animal.");
    								exit(0);
								}if(resp == 2){
									printf("\nVocê vê aquela situação, mas vê talvez um ambiente de perigo.\nVocê corre daquele lugar, distraído , é pego por uma armadilha feita no chão e cai de cabeça... ");
									exit(0);
								}
					}
      	
      getch();			
      system("pause");
      	return 0;
    }
