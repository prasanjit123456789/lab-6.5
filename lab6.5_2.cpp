/*Write a program to help decide the best choice of compensation. You ask the user for input (Write a function for this). Then write other functions for each of the options. Write a driver program to use the 4 functions and decide the best option for yourself. (Of course, the weekly sales - the number of shoes sold per week has to be given by the user)*/
//define library
#include<iostream>
using namespace std;
//ask the user about how much shoes he sells per week
int askUser(int &a){
	cout<<"What is the number of pair of shoes you sell per week?"<<endl;
	//input the the value given by the user
	cin>>a;
	return a;
}
//the function that outputs the user should take a salary of 600 per week
int opt1(int b){
	//the condition for which the user is able to get the salary of 600 rupee per week
	b=600;
	return b;
}
//the function that outputs the user shoud take 20% commision and 7 rupee per hour
float opt2(int &x){
	//define variables
	float y;
	//salary will be if it takes 7 rupee per hour and 450 per pair of shoes
	y=280+(x*450*0.2);
	return y;
}
//the function that outputs the user should take 20% comission and 20 rupee per pair
float opt3(int &z){
	//define variable
	float u;
	//if he takes 20 rupees per pair and 20% comission
	u=(z*20)+(z*0.2*450);
	return u;
}
//define main function
int main(){
	//define variables
	int p,q,r,s,t;
	//call the askUser function to catch the input given by user
	q=askUser(p);
	//argue with opt3,opt2 and opt1 with condition
	r=opt3(q);
	s=opt2(q);
	t=opt1(q);
	//conditions for getting the salary
	if(s>t && s>r){cout<<"The salary should be 7 rupee per hour and 20prcnt comission.";}
	else if(r>s && r>t){cout<<"The salary should be 20 rupee ber pair and 20prcnt comission.";}
	else{cout<<"The salary should be 600 rupees per week.";}
	return 0;
}	
