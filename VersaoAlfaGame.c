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
     		printf("\nOl�, este programa est� sendo desenvolvido aos poucos, com muitas falhas,\npor�m em crescimento, agrade�o a compreens�o de todos. -Arielito/Leira ^~Ciaossu~");
      		printf("\n\n__Ciaossu, Eu...Sou...S.I.A!---SISTEMA INTELIGENTE DE AJUDA___\n");
      		printf("Fui criada para auxiliar em jogatinas de RPG: Role-Playing Game!");
      		printf("\n\nPrefere me chamar por outro nome?\nComo gostaria de me chamar?%s\n\n", &name);
      		scanf("%s", &name);
      		printf("\nPrazer, sou a(o) - %s!\n", &name);
			//printf("sou uma mente virtual, ainda sou uma vers�o Beta,\npor�m mesmo com fun��es simples e iniciais, irei aprendendo , meu mestre!\n\n\n");
      	
      			printf("\nMeu caro Jogador ,Voc� gostaria de Jogar?");
      			printf("\n Digite 1 para Sim ou 2 para N�o: \n\n");
      			scanf("%d", &resp);
      			
      			if(resp>=2){
      				printf("At� outra hora, Adeus!");
      				exit(0); // return 0;		
      			}else(resp==1);
      			 
 			printf("\nPrimeiramente, esta � a cria��o de Personagens.\n\nVamos escolher sua classe!!\nMe diga um n�mero de 1 a 12:\n");
      		scanf("\n\n%d",&diceClass);
      	
      		switch(diceClass){
			  
      				case 1:
      					printf("\nEssa � a sua Classe - B�rbaro(Barbarian)\n");
      				break;
      				
      				case 2:
      					printf("\nEssa � a sua Classe - Bardo(Bard)\n");
      				break;
      				
      				case 3:
      					printf("\nEssa � a sua Classe - Bruxo(Warlock)\n");
      				break;
      				
      				case 4:
      					printf("\nEssa � a sua Classe - Cl�rigo(Cleric)\n");
      				break;
      				
      				case 5:
      					printf("\nEssa � a sua Classe - Druida(Druid)\n");
      				break;
      				
      				case 6:
      					printf("\nEssa � a sua Classe - Feiticeiro(Sorcerer)\n");
      				break;
      				
      				case 7:
      					printf("\nEssa � a sua Classe - Guerreiro(Warrior)\n");
      				break;
      				
      				case 8:
      					printf("\nEssa � a sua Classe - Ladino(Rogue)\n");
      				break; 
      				
      				case 9:
      					printf("\nEssa � a sua Classe - Mago(Wizard)\n");
      				break;
      				
      				case 10:
      					printf("\nEssa � a sua Classe - Monge(Monk)\n");
      				break;
      				
      				case 11:
      					printf("\nEssa � a sua Classe - Paladino(Paladin)\n");
      				break;
      				
      				case 12:
      					printf("\nEssa � a sua Classe - Patrulheiro(Ranger)\n");
      				break;
      				
      				default :
      					printf("Voc� � p�ssimo em Decis�es...\n");
      					
				  }
				  printf("\nVamos para a segunda fase, a escolha de Ra�as:\nMe fale outro N�mero...\n");
				  scanf("\n\n%d",&diceRace);
				  
				  switch(diceRace){
				  	
				  	case 1:
				  		printf("\nEssa � a sua Ra�a - An�o(Dwarf)");
				  	break;
				  	
				  	case 2:
				  		printf("\nEssa � a sua Ra�a - Elfo(Elf)");
				  	break;
				  	
				  	case 3: 
				  		printf("\nEssa � a sua Ra�a - Halfling");
				  	break;
				  	
				  	case 4:
				  		printf("\nEssa � a sua Ra�a - Humano(Human)");
				  	break;
				  	
				  	case 5:
				  		printf("\nEssa � a sua Ra�a - Draconato(Dragonborn)");
				  	break;
				  	
				  	case 6:
				  		printf("\nEssa � a sua Ra�a - Gnomo(Gnome)");
				  	break;
				  	
				  	case 7:
				  		printf("\nEssa � a sua Ra�a - Meio-Elfo(Half-Elf)");
				  	break;
				  	
				  	case 8:
				  		printf("\nEssa � a sua Ra�a - Meio-Orc(Half-Orc)");
				  	break;
				  	
				  	case 9:
				  		printf("\nEssa � a sua Ra�a - Tiefling");
				  	break;
				  	
				  	default:
				  		printf("\n\nBem, acho que voc� se identifica mais sendo voc� mesmo...");
				  }
				  printf("\n\nAgora voc� j� sabe sua classe e sua Ra�a...Podemos Come�ar?\n");
				  printf("Este ser� um RPG Textual, ou seja, toda a ambienta��o ser� descrita,\nsua �nica fun��o ser� escolher e tomar as decis�es.");
				  printf("\n\nVoc� � um jovem aventureiro, come�ou neste ramo faz pouco tempo, ent�o seus mentores apenas lhe entregam simples miss�es,\nA quest�o � que voc� recebeu uma miss�o:\n ");
				  printf("\n-Encontrar a crian�a desaparecida, sumiu h� 2 dias atr�s, tem mais ou menos 10 anos, cabelos louros e olhos castanhos.\n");
				  printf("\n*Voc� sai do Vilarejo Matoi e encontra dois caminhos, a floresta e o riacho:\n Por qual deles voc� deseja Seguir?");
				  printf("\n Digite 1 para Floresta ou 2 para Riacho: \n\n");
      			  scanf("%d", &resp);
      			
      			if(resp == 1){
      				printf("\n Voc� segue pela Floresta, o cair da noite se aproxima. � por volta das 20h, ao caminhar,\npercebe uma certa luminosidade a sua direita e ouve um certo barulho de agua na sua Esquerda...\n\nO que voc� faz?1- ir p/Direita / 2- ir p/ Esquerda!");
      					scanf("%d", &resp);
      						if(resp == 1){
      							printf("\nVoc� caminha em dire��o � luz, v� uma fogueira e pessoas em volta.\nObserva esses seres arrastando algumas crian�as Amarradas em Dire��o ao Fogo.\n");
      							printf("\nO que faz? 1 - Ignorar / 2- Ajudar as crian�as!");
      								scanf("%d", &resp);
      									if(resp== 1){
      										printf("\nVoc� deixa a situa��o ocorrer, d� as costas a tudo aquilo, se vira e vai embora...\nVoc� caminha de volta ao vilarejo ao som de crian�as agonizando...\n\n");
      										exit(0);	
										}if(resp == 2){
										  	printf("\nVoc� corre em dire��o a Fogueira , Luta contra aqueles seres.\nVoc� os Vence e Salva as Crian�as, por pelo menos uma noite, voc� se tornou a Esperan�a...");
										  	exit(0);
										}
							 if(resp == 2){
								printf("\nVoc� caminha e chega a um Lago, l� voc� encontra um lago com as �guas em um tom escuro, mas brilhante.\nO local � in�spito, mas voc� ouve uma can��o que te seduz.");
							  }
							}
    				}if(resp == 2){
    					printf("\nVoc� chega pr�ximo ao Riacho, encontra muitas criaturas marinhas mortas pr�ximas  ao rio,\nVoc� v� uma raposa com a pata presa embaixo de um tronco.!");
    					printf("\nO que voc� faz? 1- Ajudar a Raposa / 2- Dar as costas\n");
    						scanf("%d", &resp);
    							if(resp == 1){
    								printf("\nVoc� levanta o tronco, com dificuldade, mas consegue. Aquele Animal olha para voc� com amor.\nDesde aquele dia aquela raposa te segue e o protege, voc� conseguiu um companheiro animal.");
    								exit(0);
								}if(resp == 2){
									printf("\nVoc� v� aquela situa��o, mas v� talvez um ambiente de perigo.\nVoc� corre daquele lugar, distra�do , � pego por uma armadilha feita no ch�o e cai de cabe�a... ");
									exit(0);
								}
					}
      		/*scanf("%d",&nm1);
      		printf("\nPor favor, insira mais um n�mero, mas devagar, PLE@ASE!\n");
      		scanf("%d", &nm2);
      			m = nm1 +nm2;
      			printf("O valor dos tamanhos dos meus seios s�o: %d\n", m);*/
      getch();			
      system("pause");
      	return 0;
    }
