/*Apples cost Re1 each, mangoes cost Rs3 each, and 1 banana is only Rs0.50. You bought 100 fruits for Rs100, How many of each fruit did you buy? Display all variations of answer. */
//define library
#include<iostream>
using namespace std;
//define main function
int main(){
	//define variables
	int a,m,b;
	cout<<"The number of apples,mangoes,bananas in pair respectively."<<endl;
	//using loop as there is more than one answer
	/*first loop deals as a constant for each second loop complited because
	the 1st eqn is  a+b+m=100 and the second is a*1+m*3+b*0.5=100.So by substracting first eqn 
	with second eqn we get -2*m+0.5*b=0 so b=4*m */ 
	for(m=1;m<100;m++){
	//the second loop while taking constant each a
		for(b=1;b<100;b++){
			//for solving the eqn we take the condition
			if(b==4*m && b+m<100){cout<<"("<<100-b-m<<","<<m<<","<<b<<")"<<endl;}
			else{} 
		}
	}
	return 0;
}
