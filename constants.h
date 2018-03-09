#include<iostream>
using namespace std;
int constants(){ //this program will show only the output on the execution 

	system("CLS");
	system("Color 3E");
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";
		}
	
	cout<<"\n\t\t\t      CONSTANTS VALUES\n";
	
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";
		}
	cout<<"\n\n";

	//List of the file and its values that will be executed
	
	char array[30][30]={"Speed of light","Planck constant","Gravitation constant","Boltzmann constant","Molar gas constant","Avogadro's number","Charge of electron","Coulomb constant","Faraday constant","Mass of electron","Mass of proton","Mass of neutron","Stefan-Boltzmann constant","Radius of earth","Mass of Earth","Mass of Sun","Radius of Sun","Gravity constant","Standard pressure","Wien displacement constant"};
	char array2[50][50]={"3.00 X 10^8 m s^-1","6.626 X 10^-34 J s","6.673 X 10^-11 N m^2 kg^-2 ","1.381 X 10^-23 J K^-1 ","8.3143 J mole^-1 K^-1 ","6.022 X 10^23 molecules mole^-1","1.60217662 X 10^-19 coulombs","9.0 X 10^9 N","96 485.3329 s A / mol","9.10938356 X 10^-31 kilograms","1.6726219 X 10^-27 kilograms","1.6750 X 10^-27 Kilograms","5.670 X 10^-8 W m^-2 K^-4","6.371 X 10^6 m","5.9737 X 10^24 kg","1.989 X 10^30 kg","6.96 X 108 m ","9.8m/s^2","1.01325 X 10^5 N m^-2 ","2.8979 X 10^-3 m K "};
	for(int i=0; i<20;i++)
	if(i < 9)
		{
		if(i==2)			cout<<  "S.no 0"<<i+1<<".     "<<array[i]<<"\t\t"<<array2[i]<<endl;
		else 				cout<<  "S.no 0"<<i+1<<".     "<<array[i]<<"\t\t\t"<<array2[i]<<endl;
		}
		else											//To make the all execution in series and sequence format
		{
		if(i==12)			cout<<"S.no "<<i+1<<".     "<<array[i]<<"\t\t"<<array2[i]<<endl;

		else if(i==19) 		cout<<"S.no "<<i+1<<".     "<<array[i]<<"\t\t"<<array2[i]<<endl;
		else				cout<<"S.no "<<i+1<<".     "<<array[i]<<"\t\t\t"<<array2[i]<<endl;

	}
	
	
	}			//END OF PROGRAM
