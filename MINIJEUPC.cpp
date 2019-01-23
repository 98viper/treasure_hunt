#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
#define XM 10
#define YM 10
int main(void){
	srand(time(NULL));
	//Les variables utilisees
	int XT=rand()% XM;
	int YT=rand()% YM;
	int i,XG=0,YG=0,Life=100,j,XG1=0,YG1=0,X,Y,Choice,Menu,life=0;
	int L=1;
	char Gamer='\1';
	char MVT;
	system("COLOR 1E");
	printf("                                                                                                        ");
	printf("\n");
	//DESSIN DEMOTICONES

int x,y;

for(x=1;x<=100;x++) 
{
printf(" %c ",'\1'); 
if(x==100)
printf("\n");
y=x;
if(y==100)
break;

}

	printf("\n -----------------------------------------------------------------");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n ---------------BIENVENUE A LA CHASSE AU TRESOR!------------------\n");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n -----------------------------------------------------------------");
	printf("\n");
	printf("                                                                                                        ");
	printf("\n");
	for(x=1;x<=100;x++) 
{
printf(" %c ",'\1'); 
if(x==100)
printf("\n");
y=x;
if(y==100)
break;

}

	getch();
	system("cls");
	system("COLOR 0C");
		for(x=1;x<=100;x++) 
{
printf(" $ "); 
if(x==100)
printf("\n");
y=x;
if(y==100)
break;

}
	printf("\n -----------------------------------------------------------------");
	printf("\n|                  PARTONS TOUS A LA CHASSE                       |");
	printf("\n|                                                                 |");
	printf("\n|                           avec                                  |");
	printf("\n|                                                                 |");
	printf("\n|                       Hajar BENCHAMA                            |");
	printf("\n|                                                                 |");
	printf("\n -----------------------------------------------------------------");
	for(x=1;x<=100;x++) 
{
printf(" $ "); 
if(x==100)
printf("\n");
y=x;
if(y==100)
break;

}
	//cliquez sur ENTRER
	getch();
	system("cls");
	system("COLOR FC");
	//MENU
	Menu:
	printf("\n -----------------------------------------------------------------");
	printf("\n|             1.START PLAYING                                     |");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n|             2.HELP                                              |");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n|             3.QUIT                                              |");
	printf("\n|                                                                 |");
	printf("\n -----------------------------------------------------------------");
	printf("\n\n                    Entrez votre choix:");
	scanf("%d",&Choice);
	switch(Choice){
             	case 1:
				 
 
	
	             system("cls");
	system("COLOR FC");
	printf("\n\n");
	printf("\n -----------------------------------------------------------------");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
	printf("\n|            FAITES VOTRE PREMIER MOUVEMENT                       |");
	printf("\n|                                                                 |");
	printf("\n|                                                                 |");
    printf("\n -----------------------------------------------------------------");          		
              	printf("\n \nLife Index = %d%%\n",Life);
	
	
                	printf("\n");
                	printf("\n%c",'\1');
		
             	do{ //Mouvements du joueur
	                do{fflush(stdin);
     	               MVT=getch();
     	            }while(!(MVT=='g'  && XG>0) && !(MVT=='d'  && XG<20) && !(MVT=='h'  && YG>0) && !(MVT=='b' && YG<15) );
     	            system("cls");
     	
	                   if(MVT=='h'){
		              	if(YG>0){
			             	YG--;
			                  life--;
			             }
		               }else if(MVT=='b'){
			             if(YG<YM){
			               	YG++;
			             	life--;
		             	}
	                    }else if(MVT=='g'){
			              if(XG>0){
			              	XG--;
			             	life--;
			               }
	                	}else if(MVT=='d'){
		                 if(XG<XM){
			               	XG++;
				             life--;
			                }
		                }
	             	system("cls");
	             	for(i=0;i<YG;i++)   {
		              	printf("\n");
	             	}        
          
                     for(j=0;j<XG;j++){
	                	  printf("    ");
		            }
        
    
                     printf("%c",'\1');
	

	//La vie du joueur
	                 for(i=1;i<20-YG;i++)    
  	                      printf("\n");
  	                 printf("\nLife Index:%d%%\n",Life);
  
  	                 for(i=0;i<Life;i=i+20)     
  	                    printf("%c  ",'\6');
    //Est ce le joueur pres du tresor ou non
	
                  	if(abs(XT-XG) > abs(XT-XG1))       printf("                            \nMauvais mouvement");     
                  	else if (abs(XT-XG) < abs(XT-XG1)) printf("                            \nLE TRESOR EST PRET DE VOUS");
  	
                 	if(abs(YT-YG) > abs(YT-YG1))       printf("                             \nMauvais mouvement");
                   	else if (abs(YT-YG) < abs(YT-YG1)) printf("                             \nLE TRESOR EST PRES DE VOUS ");
  	
             	 XG1=XG;    
                 YG1=YG; 
    
	
                    	if (life%10==0)   
  	                    Life=Life-20;	  
  	
  	                if(XG==XT && YG==YT)  
	                      L=0;
	            }while((Life>0)&&(XT!=XG || YT!=YG));
		
		
	     	if(Life==0){
		     	system("cls");
		     	system("COLOR 0C");
		     	printf("   ha                         ha     \n        ");
		     			     	printf("   ha       \n                  ha             ");

		     			     	printf("                                        ");

		     	printf("\aOOPS ! GAME OVER\n");
		     			     	printf("        ha                            ha    ");
		     			     			     	printf("   ha                               ha      ");


	     	}
		    if(XT==XG && YT==YG){
		       	system("cls");
				system("COLOR F2");
				printf("   \n $                                         $     ");
				printf("         \n      $                                   ");
		       	printf("\aCONGRATULATIONS! \n\tYou're a winner!");
		       	printf("\n\n $                              $                   ");
		       	printf(" \n\n   $                                   $           ");
		    }		
            break;
    
             case 2: 
             system("cls");
             printf("\n Tapez -- h -- pour allez en HAUT ");
             printf("\n\n Tapez -- b -- pour allez en BAS ");
             printf("\n\n Tapez -- g -- pour allez a GAUCHE ");
             printf("\n\n Tapez -- d -- pour allez a DROITE");
              printf("\n\t\t                                             GOOD LUCK!");
             getch();
             system("cls");
             goto Menu;
             break;
             
             case 3: 
             system("cls");
             printf("\a    COME BACK NEXT TIME!!\n\n\t The treasure will be waiting for you!");
             break;
 
	         getch();
}
}
