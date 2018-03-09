#include<iostream>
using namespace std;
struct temperature{
	float celsius;
	float fahrenheit;
	float kelvin;
	char choice;
};

int converter(){

	char choosen;
	do{
	
	system("CLS");
	system("color 6B");
	
	
	temperature choose;
	
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";							// Logo of physics calculator
		}
	
	cout<<"\n\t\t\t  Temperature Unit Converter\n";
	
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";
						}

//Start of the math Temperature unit converter function


	cout<<"\nPress ""A"" convert from Celsius to Fahrenheit";
	cout<<"\nPress ""B"" convert from Celsius to Kelvin";
	cout<<"\nPress ""C"" convert from Fahrenhiet to Celcius";
	cout<<"\nPress ""D"" convert from Fahrenhiet to Kelvin";
	cout<<"\nPress ""E"" convert from Kelvin to Celcius";
	cout<<"\nPress ""F"" convert from Kelvin to Fahrenhiet\n";
	
	//user input to from above list
	cout<<"\n"<<"Enter your choice : "; 
	cin>>choose.choice;

	if(choose.choice =='a' || choose.choice =='A')
	{
		cout<<"Enter the Celcius value : ";
		cin>>choose.celsius;
		choose.fahrenheit=(choose.celsius*9/5)+32;
		cout<<"In Fahreniet  = "<<choose.fahrenheit;
	}
	else 	if(choose.choice =='b' || choose.choice== 'B')
	{
		cout<<"Enter the Celcius value : ";
		cin>>choose.celsius;
		choose.kelvin=choose.celsius+273;
		cout<<"In Kelvin  = "<<choose.kelvin;
	}
	else	if(choose.choice =='c' || choose.choice =='C')
	{
		cout<<"Enter the Fahrenhiet value : ";
		cin>>choose.fahrenheit;
		choose.celsius=(choose.fahrenheit*5/9)-32;
		cout<<"In Celcius  = "<<choose.celsius;
	}
	
	else	if(choose.choice =='d' || choose.choice =='D')
	{
		cout<<"Enter the Fahrenhiet value : ";
		cin>>choose.fahrenheit;
		choose.kelvin=5/9 *choose.fahrenheit - 32 + 273;
		cout<<"In Kelvin = "<<choose.kelvin;
	}
	
	else	if(choose.choice =='e' || choose.choice =='E')	
	{
		cout<<"Enter the Kelvin value : ";
		cin>>choose.kelvin;
		choose.celsius=choose.kelvin-273;
		cout<<"In Celcius = "<<choose.celsius;
	}
	
	else	if(choose.choice =='f' || choose.choice== 'F')
	{
		cout<<"Enter the Kelvin value : ";
		cin>>choose.kelvin;
		choose.fahrenheit= 9/5* (choose.kelvin - 273) + 32;
		cout<<"In Fahreniet  = "<<choose.fahrenheit;
	}
	
	else cout<<"Input error key ";

		cout<<"\nPress y key to continue or any other key to exit : ";
		cin>>choosen;
		}while(choosen=='y' || choosen=='Y');
	
		
				}		//END OF PROGRAM
