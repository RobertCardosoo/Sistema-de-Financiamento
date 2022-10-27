  #include <stdio.h>
void apresentacaoinicio(){
  int i;

  for(i=0;i<=62;i++){
    printf("-");
  }
   printf("\nOla seja bem vindo ao programa de financiamento veicular da empresa R_C_P FINANCIAMENTOS,por favor indique qual financiamento você deseja realizar!\n");
   for(i=0;i<=62;i++){
    printf("-");
  }
}
  void apresentacaoFinanciamentoVeicular(){
    int i;
    
    for(i=0;i<=62;i++){
      printf("-");
    }
    printf("\nSeja bem-vindo ao teste de fincaniamento veicular,favor inserir seus dados: \n");
    for(i=0;i<=62;i++){
      printf("-");
    }

  }
  void apresentacaoFinanciamentoImovel(){
    int i;

    for(i=0;i<=62;i++){
      printf("-");
    }
    printf("\n Seja bem-vindo ao teste de financiamento de imovel,favor inserir os seus dados: \n");
    for(i=0;i<=62;i++){
      printf("-");
    }
  }

int main(void) {
//Variaveis
  int totparc,idade,n;
  char escolha,opcao,opcao2,opcao3,nome[100],email[100],sobrenome[100];
  float valtot,valparc,entrada,taxa,result;

//Apresentação do sistema
apresentacaoinicio();
  //Situação de escolha entre financiamentos
  do{
  printf("\n[v]Veicular\n[i]Imóvel\n[x]Encerrar\nResposta: ");
  scanf("%s",&escolha);
  switch(escolha){
    case 'v':
  apresentacaoFinanciamentoVeicular();  
//TESTE-Coleta de dados
  printf("\nNome: ");
    scanf("%s",nome);
  printf("\n");
  printf("Primeiro sobrenome: ");
  scanf("%s",sobrenome);
  printf("\n");
  printf("Em que ano voce nasceu?: ");
    scanf("%d",&n);
  printf("\n");
  printf("Email: ");
    scanf("%s",email);
  printf("\n");
  printf("\n");

  idade=2022-n;

//Condicional de idade(idade minima 18)
  if(idade>=18 && idade<60){
//Apresentação dos dados...
    printf("\nNome= %s %s\nIdade= %d anos\nEmail= %s",nome,sobrenome,idade,email);
    printf("\n");
    printf("\n%s voce foi aprovado para o financiamento\n",nome);
    do{
    printf("\n\nDeseja ir para as opcoes que estao disponiveis para o financiamento?[S/N]");
    printf("\n");
    scanf("%s",&opcao2);
    if(opcao2=='S' || opcao2=='s'){
    printf("\nQual carro voce deseja financiar?\n");
    printf("\n---------------------------------\n");
    printf("\nEstes sao os que estao disponiveis\n");
    printf("\n----------------------------------\n");
    printf("\ng->Gol c-Celta k-Ford Ka p-Palio\n");
      scanf("%s",&opcao);
    printf("\nDigite o valor de entrada,caso prefira não dar nenhuma entrada digite 0!: \nResposta: ");
        scanf("%f",&entrada);
//Seleção da Opção G

    switch(opcao){
      case 'g':
        printf("\nVoce escolheu o Gol!!\n");
        printf("Ele esta com o valor de R$20.000,00\n");
        printf("Deseja financiar em quantas vezes\n? ");
        printf("24x--48x--72x\n");
        scanf("%d",&totparc);
        

//Condiciais das Parcelas de G

          if(totparc==24){

            

            if(entrada<10000){
            valtot=20000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot/totparc)+taxa;
            }else{
            valtot=20000-entrada;
            taxa=valtot*0.01;
            valparc=(valtot/totparc)+taxa;
            }
            

          printf("\nSuas parcelas seram R$ %.2f",valparc);
          do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
		}
          else{
            if(totparc==48){

            
            if(entrada<10000){
            valtot=20000-entrada;
            taxa=valtot*0.08;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=20000-entrada;
            taxa=valtot*0.02;
            valparc=(valtot/totparc)+taxa;
            }

              printf("\nSuas parcelas seram R$ %.2f",valparc);
              do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("Parabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("Encerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("Opcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
            }
            else{
              if(totparc==72){

                if(entrada<10000){
            valtot=20000-entrada;
            taxa=valtot*0.16;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=20000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot/totparc)+taxa;
            }

                printf("\nSuas parcelas seram R$ %.2f",valparc);
                do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
              }
              else{
                printf("\n\nOcorreu um erro,selecione outras opções");
              }
            }
          }
        
      break;

//Seleção da Opção C

      case 'c':
        printf("\nVoce escolheu o Celta!!\n");
        printf("Ele esta com o valor de R$15.000,00\n");
        printf("\nDeseja financiar em quantas vezes\n? ");
        printf("24x--48x--72x\n");
          scanf("%d",&totparc);

//Condicinais das Parcelas de C

      if(totparc==24){

        if(entrada<7500){
            valtot=15000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=15000-entrada;
            taxa=valtot*0.01;
            valparc=(valtot/totparc)+taxa;
            }
          printf("\nSuas parcelas seram R$ %.2f",valparc);
          do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("Parabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("Parabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("Encerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("Encerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("Opcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
       }

      else{
        if(totparc==48){
          if(entrada<7500){
            valtot=15000-entrada;
            taxa=valtot*0.08;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=15000-entrada;
            taxa=valtot*0.02;
            valparc=(valtot/totparc)+taxa;
            }
            printf("\nSuas parcelas seram R$ %.2f",valparc);
            do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("Parabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("Parabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("Encerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("Encerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("Opcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
        }
          else{
           if(totparc==72){
              if(entrada<7500){
            valtot=15000-entrada;
            taxa=valtot*0.16;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=15000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot/totparc)+taxa;
            }
                printf("\nSuas parcelas seram R$ %.2f",valparc);
                do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
              }
            else{
             printf("\n\nOcorreu um erro,selecione outras opcoes");
              }
            }
        }

      break;

//Seleção da Opção K

      case 'k':
        printf("\nVoce escolheu o Ford Ka!!\n");
        printf("Ele esta com o valor de R$28.000,00\n");
        printf("\nDeseja financiar em quantas vezes\n? ");
        printf("24x--48x--72x\n");
          scanf("%d",&totparc);

//Condinais de parcelas da Opção K

          if(totparc==24){

            if(entrada<14000){
            valtot=28000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=28000-entrada;
            taxa=valtot*0.01;
            valparc=(valtot/totparc)+taxa;
            }
            printf("\nSuas parcelas seram R$ %.2f",valtot);
          do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3!='s' && opcao3=='N');
          }
          else{
            if(totparc==48){
              if(entrada<14000){
            valtot=28000-entrada;
            taxa=valtot*0.08;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=28000-entrada;
            taxa=valtot*0.02;
            valparc=(valtot/totparc)+taxa;
            }
              printf("\nSuas parcelas seram R$ %.2f",valparc);
              do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
            }
            else{
              if(totparc==72){
                if(entrada<14000){
            valtot=28000-entrada;
            taxa=valtot*0.16;
            valparc=valtot/totparc+taxa;
            }else{
              valtot=28000-entrada;
            taxa=valtot*0.04;
            valparc=valtot/totparc+taxa;
            }
                printf("\nSuas parcelas seram R$ %.2f",valparc);
                do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
              }
              else{
                printf("Ocorreu um erro,selecione outras opcoes");
              }
            }
          }
      break;

//Seleção da Opção P     

      case 'p':
        printf("\nVoce escolheu o Palio!!\n");
        printf("Ele esta com o valor de R$30.000,00\n");
        printf("\nDeseja financiar em quantas vezes\n? ");
        printf("24x--48x--72x\n");
          scanf("%d",&totparc);

//Condicionais de parcelas da Opção P

          if(totparc==24){
            if(entrada<15000){
            valtot=30000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=30000-entrada;
            taxa=valtot*0.01;
            valparc=(valtot/totparc)+taxa;
            }
            printf("\nSuas parcelas seram R$ %.2f",valparc);
            do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
          }
          else{
            if(totparc==48){
              if(entrada<15000){
            valtot=30000-entrada;
            taxa=valtot*0.08;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=30000-entrada;
            taxa=valtot*0.02;
            valparc=(valtot/totparc)+taxa;
            }
              printf("\nSuas parcelas seram R$ %.2f",valparc);
              do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
            }
            else{
              if(totparc==72){
                if(entrada<15000){
            valtot=30000-entrada;
            taxa=valtot*0.16;
            valparc=(valtot)/totparc+taxa;
            }else{
              valtot=30000-entrada;
            taxa=valtot*0.04;
            valparc=(valtot/totparc)+taxa;
            }
                printf("\nSuas parcelas seram R$ %.2f",valparc);
                do{
          printf("\n\nDeseja contratar o financiamento?[S/N]");
          scanf("%s",&opcao3);
          switch(opcao3){
			  
			  case 's':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'S':
				printf("\n\nParabéns,aproveite o seu novo carro!!");
			  break;
			  
			  case 'n':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  case 'N':
				printf("\n\nEncerrando...\nObrigado mesmo assim por realizar o teste!!");
			  break;
			  
			  default:
				printf("\n\nOpcao invalida favor inserir uma das opcoes citadas!!")
					;
			  }
			}while(opcao3=='S' && opcao3=='s' && opcao3=='N');
              }
              else{
                printf("\n\nOcorreu um erro,selecione outras opções");
              }
            }
          }
      break;

//Seleção Padrão ou caso selecione uma opção inválida

      default:
        printf("\n\nVocê selecionou uma opção inválida,favor rever as instruçoes!!")
      ;
    }


	}else if(opcao2=='N'){
		printf("\n\nMuito obrigado, o sistema sera encerrado");
		}else if(opcao2=='n'){
			printf("\n\nE..N..C..E..R..R..A..N..D..O");
			}else{
				printf("Favor inserir um valor correto!");
				}
  }while(opcao2!='N' && opcao2!='n'); 
  //Retorno se caso a idade for menor que 18 ou maior que 60
  }else{
    printf("\n\nIdade inapropriada conforme as regras da empresa,portanto nao sera possivel realizar o teste!!");
    printf("\n\nE..N..C..E..R..R..A..N..D..O");
  }
  break;
  
  //Parte de financiamento de imovel
  case 'i':
  apresentacaoFinanciamentoImovel();
    printf("\nNome: ");
    scanf("%s",nome);
  printf("\n");
  printf("Primeiro sobrenome: ");
  scanf("%s",sobrenome);
  printf("\n");
  printf("Em que ano voce nasceu?: ");
    scanf("%d",&n);
  printf("\n");
  printf("Email: ");
    scanf("%s",email);
  printf("\n");
  printf("\n");

  idade=2022-n;

//Condicional de idade(idade minima 18)
  if(idade>=18 && idade<60){
//Apresentação dos dados...
    printf("\nNome= %s %s\nIdade= %d anos\nEmail= %s",nome,sobrenome,idade,email);
    printf("\n");
    printf("\n%s voce foi aprovado para o financiamento\n",nome);
    
  }else{
    printf("Sua idade foi analisada e conforme as regras da empresa ela é inapropriada!!");
  }
  break;
    case 'x':
      printf("\n\nEN..CER..RAN..DO..");
      ;
  default:
  if(escolha!='v' && escolha!='i' && escolha!='x'){
  printf("\nFavor inserir um valor correto!\n");
    }else{
    printf("...");
    }
  ;
  
}  
  }while(escolha!='v' && escolha!='i' && escolha!='x');
    }

