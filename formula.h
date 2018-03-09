#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
using namespace std;


const float g = 9.8,u=12.566,R=8.3145,G=6.67*1.000000E-11;		// Constant values declared as global 

char mu=230;
int calculator()
{	char cont;

do{


	system("CLS");			//clear screen function
	system("color 6B");		//Color function

	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";							// Logo of physics calculator
		}
	
	cout<<"\n\t\t\t      PHYSICS CALCULATOR\n";
	
	cout<<"\t\t\t";
	for(int star =1; star <=30; star++)
		{
			cout<<"*";
						}

//Start of the math physics function

	cout<<"\n\n";
	int select;
	char choice,choice2;
	float a,b,c,d,j;
	cout<<"1:  Work = F * d "<<endl;								//List of all formulas which are included in project;
	cout<<"2:  Ideal Gas Law  P * V = n * R * T "<<endl;
	cout<<"3:  Torque T = F * r  "<<endl;
	cout<<"4:  Linear Momentum P = m * v "<<endl;
	cout<<"5:  Ohm's Law V = I * R "<<endl;
	cout<<"6:  Universal Gravitation F = ( G ) * (m1m2)/r^2 "<<endl;
	cout<<"7:  Potential Energy = P = m * g *h"<<endl; 
	cout<<"8:  Kinetic energy  K = (1/2) * m * v^2"<<endl;
	cout<<"9:  Centripetal Force Fc = (mv^2)/r = m * w^2 * r "<<endl;
	cout<<"10: Frequency = 1 / t "<<endl;
	cout<<"11: Wavelength = v / f "<<endl;
	cout<<"12: Acceleration = V/t "<<endl;
	cout<<"13: Velocity = d/t "<<endl;
	cout<<"14: Power =  W/t "<<endl;
	cout<<"15: Pressure = F/A "<<endl;
	cout<<"16: Weight = m*g "<<endl;
	cout<<"17: Charge = I * t "<<endl;
	cout<<"18: Potential difference: V = W/Q "<<endl; 
	cout<<"19: Energy of light = m*c^2 "<<endl;
	cout<<"20: Velocity  vf = vi + a*t "<<endl;	


	cout<<"\nEnter your choice : ";			//user choice input for formulas

	cin>>select;									
	switch(select)											//Conditional statements for Execution of the formulas 
	{
		
		case 1:
			cout<<"Work = F * d "<<endl;
			cout<<"\nChoose dependent variable press 'w' for WORK, press 'd' for DISTANCE,";
			cout<<" press 'f' for FORCE : ";
			cin>>choice;
			switch(choice)
			{
				case 'f' :	
							cout<<"\tEnter value of w (Work) :"<<endl;
							cin>>a;
							cout<<"\tEnter the value of  d (distance) :"<<endl;
							cin>>b;
							cout<<"\tForce  ="<<a/b<<" Newton"<<endl;
							break;
				
				case 'd' :	cout<<"\tEnter value of w (Work): ";
							cin>>a;
							cout<<"\tEnter the value of f (force) : ";
							cin>>b;
							cout<<"\tDistance  = "<<a/b<<" m";
							break;
				
				case 'w' : 	cout<<"\tEnter the value of  d (distance)  : ";
							cin>>a;
							cout<<"\tEnter the value of f (force) : ";
							cin>>b;
							cout<<"\tWork = "<<a*b<<" joule";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;

							}
							break;
		case 2:
							cout<<" Ideal Gas Law  P * V = n * R * T "<<endl;
							cout<<"\nChoose dependent varibale press 'n' for number of MOLE, press 't' for TEMPERATURE,";
							cout<<" press 'v' for VOLUME and press 'p' for PRESSURE: "; 
							cin>>choice;
			switch(choice)
				{
				case 'v' :	cout<<"\tEnter the number of n ( mole )  : ";
							cin>>a;
							cout<<"\tEnter the temperature : ";
							cin>>b;
							cout<<"\tEnter the pressure : ";
							cin>>c;
							cout<<"\tVolume = "<<(a*b*R)/c<<" m^3";
							break;
				
				case 'n' :	cout<<"\tEnter the Volume  : ";
							cin>>a;
							cout<<"\tEnter the temperature : ";
							cin>>b;
							cout<<"\tEnter the pressure : ";
							cin>>c;
							cout<<"\tNumber of mole = "<<(c*a)/(R*b)<<" mol";
							break;
				
				case 't' : 	cout<<"\tEnter the Volume  : ";
							cin>>a;
							cout<<"\tEnter the number of mole : ";
							cin>>b;
							cout<<"\tEnter the pressure : ";
							cin>>c;
							cout<<"\tTemperature = "<<(c*a)/(R*b)<<" K";
							break;
				case 'p' : 	cout<<"\tEnter the Volume  : ";
							cin>>a;
							cout<<"\tEnter the number of mole : ";
							cin>>b;
							cout<<"\tEnter the temperature : ";
							cin>>c;
							cout<<"\tPressure = "<<(c*R*b)/(a)<<" pascal";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;

			}
							break;
		case 3:
							cout<<"\t Torque T = F * r ";
							cout<<"\nChoose dependent varibale press 'f' for FORCE, press 'r' for MOMENT ARM, ";
							cout<<" press 't' for TORQUE : "; 
							cin>>choice;
			switch(choice)
			{
				case 't' :	cout<<"\tEnter the length :"<<endl;
							cin>>a;
							cout<<"\tEnter the force :"<<endl;
							cin>>b;
							cout<<"\tTorque ="<<b*a<<" N.m"<<endl;
							break;
				
				case 'l' :	cout<<"\tEnter the force  : ";
							cin>>a;
							cout<<"\tEnter the value of Torque : ";
							cin>>b;
							cout<<"\tLength = "<<b/a<<" m";
							break;
				
				case 'f' : 	cout<<"\tEnter the value of Torque : ";
							cin>>a;
							cout<<"\tEnter the length : ";
							cin>>b;
							cout<<"\tForce = "<<a/b<<" N";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;
							}
			
							break;
		case 4:
							cout<<"\t Linear Momentum P = m * v "<<endl;
							cout<<"\nChoose dependent varibale press 'p' for MOMENTUM, press 'm' for MASS,";
							cout<<" press 'v' for VELOCITY : "; 
							cin>>choice;
			switch(choice)
			{
				case 'p' :	cout<<"\tEnter the Velocity :"<<endl;
							cin>>a;
							cout<<"\tEnter the Mass :"<<endl;
							cin>>b;
							cout<<"\tLinear Momentum ="<<b*a<<"Ns or kgm/s"<<endl;
							break;
				
				case 'm' :	cout<<"\tEnter the Velocity   : ";
							cin>>a;
							cout<<"\tEnter the value of  Momentum : ";
							cin>>b;
							cout<<"\tMass = "<<b/a<<" kg";
							break;
				
				case 'v' : 	cout<<"\tEnter the value of Mass : ";
							cin>>a;
							cout<<"\tEnter the value of  Momentum : ";
							cin>>b;
							cout<<"\tVelocity = "<<b/a<<" m/s";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;
					
							}
							break;
		case 5:
							cout<<"\t Ohm's Law V = I * R "<<endl;
							cout<<"\nChoose dependent varibale press 'v' for VOLTAGE applied, press 'i' for CURRENT,";
							cout<<" press 'r' for RESISTANCE : ";
							cin>>choice;
			switch(choice)
			{
				case 'v' :	cout<<"\tEnter the Current :"<<endl;
							cin>>a;
							cout<<"\tEnter the Resistance :"<<endl;
							cin>>b;
							cout<<"\tVoltage ="<<b*a<<" volt"<<endl;
							break;
				
				case 'i' :	cout<<"\tEnter the Resistance   : ";
							cin>>a;
							cout<<"\tEnter the value of  Voltage : ";
							cin>>b;
							cout<<"\tCurrent = "<<b/a<<" ampere";
							break;
				
				case 'r' : 	cout<<"\tEnter the value of  Voltage : ";
							cin>>a;
							cout<<"\tEnter the value of  Current : ";
							cin>>b;
							cout<<"\tResistance = "<<a/b<<" ohm";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;

							}
							break;
		case 6:
							cout<<"\t Universal Gravitation F = ( G ) * (m1m2)/r^2 "<<endl;
							cout<<"\nChoose dependent varibale press 'm' for MASS1, press 'M' for MASS2,";
							cout<<" press 'r' for RADIUS and press 'f' for FORCE of attraction: ";
							cin>>choice;
			switch(choice)
			{
				case 'f' :	cout<<"\tEnter the Distance :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass one :"<<endl;
							cin>>b;
						
							cout<<"\tEnter the mass two :"<<endl;
							cin>>c;
							cout<<"\tForce ="<<G* (c*b)/(a*a)<<" N"<<endl;
							break;
				
				case 'r' :	cout<<"\tEnter the  mass two   : ";
							cin>>a;
							cout<<"\tEnter the  mass one: ";
							cin>>b;
							cout<<"\tEnter the Force :"<<endl;
							cin>>c;
							 j=(G*a*b)/c;
							j=pow(1/2,j);

							cout<<"\tRadius = "<<j<<" m"<<endl;

							break;
				case 'm' :	cout<<"\tEnter the Distance'r' :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass two :"<<endl;
							cin>>b;
							cout<<"\tEnter the Force :"<<endl;
							cin>>c;
							cout<<"\tMass1 ="<<(c*a*a)/(G*b)<<" kg"<<endl;
							break;
				
				case 'M' :	cout<<"\tEnter the Distance(R) :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass one :"<<endl;
							cin>>b;
							cout<<"\tEnter the Force :"<<endl;
							cin>>c;
							cout<<"\tMass2 ="<<(c*a*a)/(G*b)<<" kg"<<endl;
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;

							}
							break;
				
		case 7:
				{ 
							cout<<"\t Potential energy  P = m * g *h";
							cout<<"\tP = m * g *h ";
							cout<<"\nChoose dependent varibale press 'm' for MASS, press 'p' for POTENTIAL ENERGY,";
							cout<<"  and press 'h' for HEIGHT : ";
							cin>>choice;
				
				switch(choice)
					{
				case 'p' :	cout<<"\tEnter the Height :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass :"<<endl;
							cin>>b;
							cout<<"\tPotential energy ="<<a*b*g<<" joule"<<endl;
							break;
							
				case 'h' :	cout<<"\tEnter the Potential energy :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass :"<<endl;
							cin>>b;
						
							cout<<"\tHeight ="<<a/(b*g)<<" m"<<endl;
							break;
							
				case 'm' :	cout<<"\tEnter the Height :"<<endl;
							cin>>a;
							cout<<"\tEnter the Potential energy  :"<<endl;
							cin>>b;
							
							cout<<"\tMass ="<<b/(a*g)<<" kg"<<endl;
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;
				
							}
							break;
						
		
		case 8 :
							cout<<"\tK.E = (1/2) * m * v^2 ";
							cout<<"\nChoose dependent varibale press 'm' for MASS, press 'k' for KINETIC ENERGY, ";
							cout<<" and press 'v' for VELOCITY,: ";
							cin>>choice;
			switch(choice)
				{
		
				case 'k' :	cout<<"\tEnter the velocity :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass :"<<endl;
							cin>>b;
							cout<<"\tkinetic energy ="<<(1/2)*a*a*b<<" joule"<<endl;
							break;
							
				case 'v' :	cout<<"\tEnter the kinetic energy :"<<endl;
							cin>>a;
							cout<<"\tEnter the mass :"<<endl;
							cin>>b;
						
							j=pow(1/2,(a/b));
						
							cout<<"\tVelocity = "<< j<<" m/s"<<endl;
							break;
							
				case 'm' :	cout<<"\tEnter the Velocity :"<<endl;
							cin>>a;
							cout<<"\tEnter the kinetic energy  :"<<endl;
							cin>>b;
							
							cout<<"\tMass ="<<(2*b)/(a*a)<<" kg"<<endl;
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;

							}
								
							}
							break;
		case 9:
							cout<<"\t Centripetal Force Fc = (mv^2)/r "<<endl;
							cout<<"\nChoose dependent varibale press 'm' for mass, press 'r' for radius,";
							cout<<" press 'v' for velocity press 'f' for Centripetal Force : ";
							cin>>choice;
			switch(choice)
			{
				case 'f' :	
							cout<<"\tEnter value of m (mass) :"<<endl;
							cin>>a;
							cout<<"\tEnter the value of  r (radius) :"<<endl;
							cin>>b;
							cout<<"\tEnter the value of v velocity : ";
							cin>>c;
							cout<<"\tFc  ="<<(a*c*c)/b<<" N"<<endl;
							break;
				
				case 'r' :	cout<<"\tEnter value of m (mass): ";
							cin>>a;
							cout<<"\tEnter the value of Fc (force) : ";
							cin>>b;
							cout<<"\tEnter the value of v (velocity) : ";
							cin>>c;
							cout<<"\tRadius  = "<<b/(a*c*c)<<" m";
							break;
				
				case 'v' : 	cout<<"\tEnter the value of  r (radius)  : ";
							cin>>a;
							cout<<"\tEnter the value of Fc (force) : ";
							cin>>b;
							cout<<"\tEnter the value of m (mass) : ";
							cin>>c;
							j=pow(1/2,(b*a)/c);
							cout<<"\tVelocity v = "<<j<<" m/s";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;
							
				
								}
							break;

		case 10:
				{			
							cout<<"\nChoose dependent varibale\npress 't' for TIME PERIOD, press 'f for FREQUENCY: "; 
							cin>>choice;
			switch(choice)
			{
				case 't': 
							cout<<"Enter the value of 'f': ";
							cin>>a;
							cout<< "Time period: "<<(1/a) <<" Hertz ";
							break;
				case 'f':
							cout<<"Enter the value of 't': ";
							cin>>a;
							cout<< "Frequency: "<<(1/a) <<" sec ";	
							break;
							}
							break;}

		case 11:
				{
							cout<<"\nChoose dependent varibale\npress 'w' for WAVELENGTH, 'v' for PHASE SPEED, 'f' for FREQUENCY: "; 					
							cin>>choice;
			switch(choice)	
				{
				case 'w':
							cout<<"Enter the value of 'v': ";
							cin>>a;										//w = v / f
							cout<<"Enter the value of 'f': ";
							cin>>b;										//w = v / f
							cout<<"Wavelength: "<<a/b<<" m"<<endl;
							break;
				case 'v':
							cout<<"Enter the value of 'w': ";
							cin>>a;										//w = v / f
							cout<<"Enter the value of 'f': ";
							cin>>b;										//w = v / f
							cout<<"Phase speed: "<<a*b<<" m/s";
							break;
				case 'f':
							cout<<"Enter the value of 'v': ";
							cin>>a;										//w = v / f
							cout<<"Enter the value of 'w': ";
							cin>>b;										//w = v / f
							cout<<"Frequency: "<<a/b<<" hertz";
							break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;

				
							}
							break;
							}	
		case 12:
			{
							cout<<"\nChoose dependent varibale press 'a' for ACCELERATION, press 'f' for FORCE, and press 'm' for MASS : "; 
							cin>>choice;
			switch(choice)
				{
				case 'a' :	cout<<"\tEnter mass m :"<<endl;
							cin>>a;
							cout<<"\tEnter force a :"<<endl;
							cin>>b;
							cout<<"\tAcceleration ="<<b/a<<" m/s^2"<<endl;
							break;
				
				case 'f' :	cout<<"Enter mass m : ";
							cin>>a;
							cout<<"Enter acceleration a : ";
							cin>>b;
							cout<<"Force f = "<<a*b<<" newton";
							break;
				
				case 'm' : 	cout<<"Enter force f : ";
							cin>>a;
							cout<<"Enter acceleration a : ";
							cin>>b;
							cout<<"mass m = "<<a/b<<" kg";
							break;
					default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

				break;}
		case 13:{
							cout<<"\nChoose dependent varibale press 'v' for VELOCITY, press 'd' for DISPLACEMENT, and press 't' for TIME : "; 
							cin>>choice;
			switch(choice)
			{
		    	case 'v':
					       	cout<<"Enter displacement d:"<<endl;
					    	cin>>a;
					       	cout<<"Enter time t:"<<endl;
					       	cin>>b;
					       	cout<<"velocity V ="<<a*b<<" m/s"<<endl;
					       	break;
				case 'd':
							cout<<"enter velocity:"<<endl;
							cin>>a;
							cout<<"enter time:"<<endl;
							cin>>b;
							cout<<"displacement d ="<< a/b<<" m"<<endl;
							break;
				case't':
					        cout<<"Enter displecement d:"<<endl;
					        cin>>a;
					        cout<<"Enter velocity:"<<endl;
						    cin>>b;
						    cout<<"Time t ="<<b/a<<" sec"<<endl;
						    break;
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

							break;}
		case 14:{
							cout<<"\nChoose dependent varibale press 'p' for POWER, press 'w' for WORK, and press 't' for TIME : "; 
							cin>>choice;
			switch(choice)
			{
				case 'p':
							cout<<"enter work W:"<<endl;
					        cin>>a;
					        cout<<"enter time t:"<<endl;
					        cin>>b;
					        cout<<"Power P ="<<a/b<<" watt"<<endl;
					        break;
			    case 'w':
					    	cout<<"enter power p:"<<endl;
					        cin>>a;
					        cout<<"enter time t:"<<endl;
							cin>>b;
							cout<<"Work w ="<<a*b<<" joule"<<endl;
							break;
				case 't':
							cout<<"enter work W:"<<endl;
							cin>>a;
							cout<<"enter Power P:"<<endl;
							cin>>b;
							cout<<"Time t ="<<a/b<<" sec"<<endl;
							break;
		    
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

							break;}
		case 15:{
							cout<<"\nChoose dependent varibale press 'p' for PRESSURE, press 'a' for AREA, and press 'f' for FORCE : "; 
							cin>>choice;
			switch(choice)
			{
				case 'p':
							cout<<"Enter force f:"<<endl;
							cin>>a;
							cout<<"Enter area:"<<endl;
							cin>>b;
							cout<<"Pressure P ="<<a/b<<" pascal"<<endl;
							break;
				case 'a':
							cout<<"Enter force f:"<<endl;
							cin>>a;
							cout<<"Enter Pressure P:"<<endl;
							cin>>b;
							cout<<"Area a ="<<a/b<<" m^2"<<endl;
							break;
				case 'f':
							cout<<"Enter Area A:"<<endl;
							cin>>a;
							cout<<"Enter Pressure P:"<<endl;
							cin>>b;
							cout<<"Force F ="<<b*a<<" Newton"<<endl;
							break;
		    
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

							break;}
		case 16:{
							cout<<"\nChoose dependent varibale press 'w' for WEIGHT, and press 'm' for MASS : "; 
							cin>>choice;
			switch(choice)
			{
				case 'w':
							cout<<"Enter mass m:"<<endl;
							cin>>a;
							cout<<"Weight W ="<<a*g<<" Kg"<<endl;
							break;
				case 'm':
							cout<<"enter Weight w:"<<endl;
							cin>>a;
							cout<<"Mass m ="<<a/g<<" Kg"<<endl;
							break;
					
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

							break;}
		case 17:{
							cout<<"\nChoose dependent varibale press 'q' for CHARGE, press 'i' for CURRENT, and press 't' for TIME : "; 
							cin>>choice;
			switch(choice)
			{
				case 'q':
							cout<<"Enter current I:"<<endl;
							cin>>a;
							cout<<"Enter time t:"<<endl;
							cin>>b;
							cout<<"Charge Q ="<<a*b<<" coulomb"<<endl;
							break;
				case 'i':
							cout<<"Enter Charge Q:"<<endl;
							cin>>a;
							cout<<"Enter time t:"<<endl;
							cin>>b;
							cout<<"Current I ="<<a/b<<" ampere"<<endl;
							break;
				case 't':
							cout<<"Enter current I:"<<endl;
							cin>>a;
							cout<<"Enter Charge Q:"<<endl;
							cin>>b;
							cout<<"Time t ="<<b/a<<" sec"<<endl;
							break;
					
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;
							}
							break;}
		case 18:{
							cout<<"\nChoose dependent varibale press 'v' for POTENTIAL DIFFERENCE, press 'w' for WORK DONE, and press 'q' for CHARGE : "; 
							cin>>choice;
			switch(choice)
		    {
		    	case 'v':
							cout<<"Enter energy E Or Work done W:"<<endl;
							cin>>a;
							cout<<"Enter charge Q:"<<endl;
							cin>>b;
							cout<<"Potential difference V ="<<a/b<<" volt"<<endl;
							break;
				case 'e':
							cout<<"Enter potential difference V:"<<endl;
							cin>>a;
							cout<<"Enter charge Q:"<<endl;
							cin>>b;
							cout<<"Energy E or Work done W="<<a*b<<" joule"<<endl;
							break;
				case 'q':
							cout<<"Enter energy E or Work done W:"<<endl;
							cin>>a;
							cout<<"Enter potential difference V:"<<endl;
							cin>>b;
							cout<<"Charge Q ="<<a/b<<" coulomb"<<endl;
							break;		
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

							break;} 
		case 19:{
							cout<<"\nChoose dependent varibale press 'e' for ENERGY OF LIGHT, and press 'm' for MASS : "; 
							cin>>choice;
			switch(choice)
			{
				case 'e':
							cout<<"Enter mass m:"<<endl;
							cin>>a;
							cout<<"Enter energy constant c:"<<endl;
							cin>>b;
							cout<<"Energy of light E ="<<a*(b*b)<<" joule"<<endl;
							break;
				case 'm':
							cout<<"Enter energy of light E :"<<endl;
							cin>>a;
							cout<<"Enter energy constant c:"<<endl; //C is a proportionality constant = 3*10^8
							cin>>b;
							cout<<"Mass m ="<<a/(b*b)<<" kg"<<endl;
							break;
				
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}

							break;}
		case 20:{
							cout<<"\nChoose dependent varibale, press 'f' for FINAL VELOCITY, press 'i' for INITIAL VELOCITY, press 'a' for ACCELERATION, and press 'ts' for TIME : "; 
							cin>>choice;
			switch(choice)
			{
				case 'f':
							cout<<"Enter Initial velocity vi:"<<endl;
							cin>>a;
							cout<<"Enter Acceleration a:"<<endl;
							cin>>b;
							cout<<"Enter Time t:"<<endl;
							cin>>c;
							cout<<"Final Velocity Vf="<<a+(b*c)<<" m/s"<<endl;
							break;
				case 'i':
							cout<<"Enter Final velocity vf:"<<endl;
							cin>>a;
							cout<<"Enter acceleration a:"<<endl;
							cin>>b;
							cout<<"Enter time t:"<<endl;
							cin>>c;
							cout<<"Initial velocity Vi="<<a/(b*c)<<" m/s"<<endl;
							break;
				case 'a':
							cout<<"Enter initial velocity vi:"<<endl;
							cin>>a;
							cout<<"Enter Final Velocity vf:"<<endl;
							cin>>b;
							cout<<"Enter time t:"<<endl;
							cin>>c;
							cout<<"Acceleration a ="<<(b-a)/c<<" m/s^2"<<endl;
							break;
				case 't':
							cout<<"Enter initial velocity vi:"<<endl;
							cin>>a;
							cout<<"Enter acceleration a:"<<endl;
							cin>>b;
							cout<<"Enter Final Velocity vf:"<<endl;
							cin>>c;
							cout<<"Time t ="<<(c-a)/b<<" s."<<endl;
							break;
						
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;}
							break;}
		
				default:
							cout<<"SORRY! YOU ENTER WRONG CHOICE."<<endl;
			
						} 
	cout<<"\nEnter 'y' to continue or press any key for exit : ";			//user input to continue program or not through do while loop
	cin>>cont;

	}while(cont=='Y'|| cont=='y');		
	
	return 0;
	}
	
