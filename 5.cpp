#include<stdio.h>
#include<math.h>
#include<iostream>
main (){
	
int x=18 , y=24;

//Module !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
double module =  x  %  y;
printf("X,Y Module is:%.0f\n", module);
 
// ARIFMETIC DUNDAJ !!!!!!!!!!!!!!!!!!!!!!!
double Arifdundaj = (x+y)/2;
printf("Arifmetik dundaj:%.0f\n" ,Arifdundaj);
//Geometer dundaj X,Y !!!!!!!!!!!!!!!!!!!!!!
double G = Arifdundaj*module;
double result = sqrt(G);
printf("Geodundaj %f = %f", G,result);









	
	
	
	
	
	
	return 0;
}
