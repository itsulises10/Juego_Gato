#include<stdio.h>
#include <stdlib.h>

void limpiarPantalla() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

int main(){
	int i, j;
	char tablero[3][3], opc, ganador=0;

printf("Bienvenido al juego del gato!\n");
printf("Presione 'S' si desea jugar de lo contrario presione 'N'. ");
scanf("%c", &opc);
for (i=0;i<3;i++){
	for (j=0;j<3;j++){
		 tablero[i][j]=' ';
		 printf("[%c]", tablero[i][j]);
  }	printf("\n");
}
int fil, col, turn=1;

 if(opc=='s'||opc=='S'){


 	do{
	 if (turn%2==1){
 	    do{
 	    	printf("Jugador X digite la fila: ");
 	    scanf("%d", &fil);
 	    printf("Jugador X digite la columna: ");
 	    scanf("%d", &col);
 	    if(tablero[fil][col]=='x'||tablero[fil][col]=='o'||fil>2||col>2){
 	    	printf("El lugar esta ocupado, prueba con otro!\n");
		 }
		 }
 	    while(tablero[fil][col]=='x'||tablero[fil][col]=='o'||fil>2||col>2);
	 tablero[fil][col]='x';
	 limpiarPantalla();
	     for (i=0;i<3;i++){
     	  for (j=0;j<3;j++){
		   printf("[%c]", tablero[i][j]);
           } 	printf("\n");
         }

      turn++;
}

  else if(turn%2==0){

  	  do{
  	  	 printf("Jugador O digite la fila: ");
 	    scanf("%d", &fil);
 	    printf("Jugador O digite la columna: ");
 	    scanf("%d", &col);
 	    if(tablero[fil][col]=='o'||tablero[fil][col]=='x'||fil>2||col>2){
 	    	printf("El lugar esta ocupado, prueba con otro!\n");
		 }
		}
  	   while(tablero[fil][col]=='o'||tablero[fil][col]=='x'||fil>2||col>2);

	 tablero[fil][col]='o';
	 limpiarPantalla();
	     for (i=0;i<3;i++){
     	  for (j=0;j<3;j++){
		   printf("[%c]", tablero[i][j]);
           } 	printf("\n");
         }

      turn++;


  }
  if(tablero[0][0]=='x' && tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]||
     tablero[1][0]=='x' && tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]||
	 tablero[2][0]=='x' && tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]||

	 tablero[0][0]=='x' && tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]||
	 tablero[0][1]=='x' && tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]||
	 tablero[0][2]=='x' && tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]||

	 tablero[0][0]=='x' && tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]||
	 tablero[0][2]=='x' && tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0])

  {
  	ganador=1;
  printf("Felicidades gano el jugador 'X'.\n");
  }
  if(tablero[0][0]=='o' && tablero[0][0]==tablero[0][1] && tablero[0][0]==tablero[0][2]||
     tablero[1][0]=='o' && tablero[1][0]==tablero[1][1] && tablero[1][0]==tablero[1][2]||
	 tablero[2][0]=='o' && tablero[2][0]==tablero[2][1] && tablero[2][1]==tablero[2][2]||

	 tablero[0][0]=='o' && tablero[0][0]==tablero[1][0] && tablero[0][0]==tablero[2][0]||
	 tablero[0][1]=='o' && tablero[0][1]==tablero[1][1] && tablero[0][1]==tablero[2][1]||
	 tablero[0][2]=='o' && tablero[0][2]==tablero[1][2] && tablero[0][2]==tablero[2][2]||

	 tablero[0][0]=='o' && tablero[0][0]==tablero[1][1] && tablero[0][0]==tablero[2][2]||
	 tablero[0][2]=='o' && tablero[0][2]==tablero[1][1] && tablero[0][2]==tablero[2][0])

  {
  	ganador=1;
  printf("Felicidades gano el jugador 'O'.\n");
  }
}

while(ganador!=1);
 }

return 0;
}
