Program Description:DEFINE FUNCTIONS AND INPUT CALLS TO RETURN THE TOATAL NUMBER OF CARS

#include<stdio.h>
#include<math.h>

int getTires(); //FUNCTION TO INPUT NUMBER OF TIRES
int getTrailers(); //FUNCTION TO INPUT NUMBER OF TRAILERS
int getTrunks(); //FUNCTION TO INPUT NUMBER OF TRUNKS
int calcVehicles(int, int, int); //FUNCTION TO CALCULATE NUMBER OF CARS
void displayResults(int); //FUNCTION TO DISPLAY NUMBER OF CARS

int main()
{
 //VARIABLES
 int tires; //STORES VALUE OF NUMBER OF TIRES
 int trailers; //STORES VALUE OF NUMBER OF TRAILERS
 int trunks; //STORES VALUE OF NUMBER OF TRUNKS
 int numcars; //STORES VALUE OF NUMBER OF CARS

 //FUNCTION CALLS
 tires = getTires();
 trailers = getTrailers();
 trunks = getTrunks();
 numcars = calcVehicles(tires, trailers, trunks);
 displayResults(numcars);


 return(0);
}

int getTires()
{
 //VARIABLES
 int tires; //STORES VALUE OF NUMBER OF TIRES

 //EXECUTABLE STATEMENTS
 printf("Enter the total number of tires:  ");
 scanf("%d", &tires);

 return(tires);
}

int getTrailers()
{ 
 // VARIABLES
 int trailers; //STORES VALUE OF NUMBER OF TRAILERS

 // EXEUTABLE STATEMENTS
  printf("Enter the total number of trailers:  ");
  scanf("%d", &trailers);

  return(trailers);
}

int getTrunks()
{
 //VARIABLES
 int trunks; //STORES VALUE OF NUMBER OF TRUNKS

 //EXECUTABLE STATEMENTS
 printf("Enter the total number of trunks:  ");
 scanf("%d",&trunks);

 return(trunks);
}
int calcVehicles(int tires, int trailers, int trunks)
{
 //VARIABLES
 int numcars; //STORES VALUE OF NUMBER OF CARS

 //EXECUATABLE STATEMENTS
 numcars = trunks + ((tires - (4 * trunks)) / 2);

 return(numcars);
}

void displayResults(int numcars)
{
 //EXECUATABLE STATEMENTS
 printf("Total number of vehicles:  %d\n",numcars);

 return;
}

