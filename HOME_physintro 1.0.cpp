#include <iostream>
#include<cstring>
#include <stdio.h>
#include "constants.h"               //user defined header file
#include "Definition.h"				//user defined header file
#include "formula.h"				//user defined header file
#include "Unit converter.h"			//user defined header file
#include<conio.h>


using namespace std;


void logo()
{
	
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";
		}
	
	cout<<"\n\t\t\t\tPHYSINTRO 1.0\n";
	
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";
		}
	
}

int thankyou(){
	

cout<<"\t"<<" $$$$$$$$$$$  $       $       $       $     $  $   $ $       $     $$$      $    $\n";
cout<<"\t"<<"      $       $       $      $ $      $$    $  $  $   $     $    $     $    $    $\n";
cout<<"\t"<<"      $       $       $     $   $     $ $   $  $ $     $   $    $       $   $    $\n";
cout<<"\t"<<"      $       $_______$    $_____$    $  $  $  $$       $ $     $       $   $    $\n";
cout<<"\t"<<"      $       $       $   $       $   $   $ $  $ $       $      $       $   $    $\n";
cout<<"\t"<<"      $       $       $  $         $  $    $$  $  $      $       $     $     $  $\n";
cout<<"\t"<<"      $       $       $ $           $ $     $  $   $     $         $$$        $$\n";

}

int home()
{

	char homeName[4][50] = {"Definition" , "Constant" , "Unit converter" , "Physics calculator"};
	
	for( int h=0; h<4; h++)
	{
		cout<<endl<<"\t\t\t"<<h+1<<".\t"<<homeName[h];
	}
}
int main()
{
	
	char cont;
do{
	system("CLS");		//system clear screen function

	int option;
	
	logo();		//Project logo
	
	home();		//Home screen of the project
   
	cout<<"\nEnter the choice : ";			//User input choice
	cin>>option;

	if(option == 1){
	definitions();				//Inlcuded in definition.h
	}
	else if(option==2){
	constants();				//Inlcuded in constants.h
	}
	else if(option == 3){
	converter();				//Inlcuded in Unit converter.h
	}
	else if(option==4){
	calculator();				//Inlcuded in formula.h
	}
	else cout<<"Error input ";

	cout<<"\nPress y to goto Home or any key to exit from program :  ";      //user choice to continue program or not
	cin>>cont;
	
}
	while(cont=='y' || cont=='Y'); 		//Loop to run the program again
	system("CLS");
	thankyou();							//function for ending with "thanks";
	
	return 0;
	
	}
	
	

