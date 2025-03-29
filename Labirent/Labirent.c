#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int absoluteValue(int number){
	 if (number >= 0){  
      return number; 
       }
	   else {  
       return  -number; 
}
}

struct maze
{
	int m,n,a,x,z,y,g,k,i,line,column;
	
} maze;
int main(int argc, char *argv[]) {
	  
	  
	  // labirent boyutunu alma
	float distance,maxdistance=0,mindistance=__FLT_MAX__;
	 printf("Enter the size of the maze.\n");
	 printf("Number of Lines: ");
	 scanf("%d",&maze.y);
	 printf("\nNumber of Columns: ");
	 scanf("%d",&maze.g);
	 printf("\nNumber of points in the maze:");
	 scanf("%d",&maze.k);
	 
	 
	 //Kendi konumunu tanýmlama
	 printf("Enter your own coordinates.\n");
	 	printf("Line:");
	 	scanf("%d",&maze.x);
	 	printf("Column:");
	 	scanf("%d",&maze.z);
	    if( maze.x < 0 || maze.x > maze.y || maze.z < 0 || maze.z > maze.g) {
	 		printf("You entered the wrong value.\n");	
		 }
		 else{
		 	printf("Your Own Location: (%d,%d) \n",maze.x,maze.z);
     	 } 
     	 
     	 
		// diger kisilerin konumunu alma    
	 for(maze.i=1;maze.i<=maze.k;maze.i++){
	 	printf(" Where is the %dth person in the maze?\n",maze.i);
	 	printf("Line:");
	 	scanf("%d",&maze.line);
	 	printf("Column:");
	 	scanf("%d",&maze.column);
	 	
	 	if(maze.line < 0 || maze.line > maze.y || maze.column < 0 || maze.column > maze.g ) {
	 		printf("You entered the wrong value.\n");	
	 		return 0;
		 }
		 else{
		 	printf("%dth person :(%d,%d)\n",maze.i,maze.line,maze.column);
		 	
		 	//Uzaklik hesaplama
		    printf("Distance calculation methods;\n 1-Euclide \n 2- Manhattan\n");
     	    scanf("%d",&maze.a);
     	  
     	    if(maze.a==1){
     	    	distance= sqrt(pow(maze.x - maze.line, 2) + pow(maze.z -maze.column, 2));
     	    	printf("The distance between the %dth point and itself: %.4f\n",maze.i,distance);
     	     }	
     	    else if(maze.a==2){   
     	    	maze.m=absoluteValue(maze.x - maze.line);
     	    	maze.n=absoluteValue(maze.z - maze.column);
     	    	distance=maze.m+maze.n;
     	    	printf("The distance between the %dth point and itself: %.4f\n",maze.i,distance);
			  }
			else{
				printf("This value is invalid.");
			}
			 // En uzak olani bulma
			if (distance>maxdistance){
				maxdistance=distance;
			}
			//En yakin olani bulma
			if(distance<mindistance){
			   mindistance=distance;
			}
			 }
     	  }
     	 
     	 printf("The distance between the points with the longest distance to each other is: %.4f\n",maxdistance);
     	 printf("The distance between the points with the shortest distance between them is: %.4f\n",mindistance);
    }
	
	
	

