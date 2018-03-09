#include <iostream>
#include<cstring>
#include <cstdio>
#include<conio.h>
using namespace std;

int definitions()
{

		char choose;
 	do{
	char test[10];
 	system("Color 3E");
 	
	cout<<"\t\t*************************************************"<<endl;
	cout<<"\t\t\t\tLIST OF DEFINITION"<<endl;												//Loop for content list show
	cout<<"\t\t*************************************************"<<endl;
	
	int content[50],i;
	char content2[50][50]={"PHYSICS","MECHANICS PHYSICS","ELECTRONICS PHYSICS","ATOMIC PHYSICS","OPTICS PHYSICS","NUCLEAR PHYSICS","ASTRO PHYSICS","ELECTROMAGNETISM PHYSICS","ELECTRICITY PHYSICS","SOLID STATE PHYSICS","MASS","LENGTH","TIME","ELECTRIC CURRENT","TEMPERATURE","AMOUNT OF SUBSTANCE","LUMINOUS INTENSITY","SCALARS","VECTORS","DISTANCE","DISPLACEMENT", "VELOCITY" ,"SPEED","ACCELERATION","FORCE","NEWTON 1ST LAW OF MOTION","NEWTON 2ND LAW OF MOTION","NEWTON 3RD LAW OF MOTION","ENERGY","KINETIC ENERGY","POTENTIAL ENERGY","WORK", "MOMENTUM", "TORQUE","POWER", "CENTRIPETAL FORCE","CENTRIFUGAL FORCE" ,"HEAT","BOYLES LAW","CHARLES LAW","AVAGADRO'S LAW","PROJECTILE MOTION","TIME PERIOD","FREQUENCY","WAVELENGTH","RESISTANCE","VOLTAGE","CHARGE", "LAW OF CONSERVATION OF ENERGY", "OPTICAL FIBER"};
	
	for(i=0; i<50; i++){
		
		cout<<"\t\t\t"<<i+1<<".    "<<content2[i]<<endl;
		
	}
		
	
	cout<<"In the definitions search the text  : ";
	char string1[40];
	char string2[]=".txt";

 	cin.getline(test,10);			//test simple to reduce direct cin error from main function

 	cin.getline(string1,40);		//Input the text from the definition to which you want to search
    
    strcat(string1,string2);		//to make the input of the user as concatenate so that program can easily read text file
	
	FILE *fp;						//file pointer

    
    fp = fopen(string1,"r");		//open the file
    if(fopen(string1,"r")==NULL)cout<<"This topic is not mentioned";		//test the null file 
	else{
	
	cout<<"\n\t";
    while(!feof(fp))						//condition for reading the file
    {
        fscanf(fp,"%s",string1);			//reading statement of the file
        
	    cout << string1<<" ";
    }
	}
	
	
	cout<<"\nPress y to continue or any key to exit : ";	//to continue the search or not
	cin>>choose;
	}while(choose=='y' || choose== 'Y');
	

	
	return 0;
	
	}			//END OF PROGRAM
