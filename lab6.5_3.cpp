/*The integer 36 has a peculiar property: it is a perfect square, and is also the sum of the integers from 1 through 8. The next such number is 1225 which is 352, and the sum of the integers from 1 through 49. Find the next number (or numbers) that is a perfect square and also the sum of a series 1...n. This next number may be greater than 32767 (range of int, so use long). You may use library functions that you know of, (or mathematical formulas) to make your program run faster. (Note: depending on your machine and your program, it can take quite a while to find this number.)*/
//include library 
#include <iostream> 
using namespace std;
//define main function
int main(){
	//declare variables
	int k=0;
	//use loop for searching the number 
	for(long long i=36;i<4564564;i++){
	/*that number is perfect sqr and sum of a sequence so there should be another sequence 	that 
	search the no by adding the sequence and the second loop the first as constant*/
		for(long long m=36;m<4564564;m++){
			if(i*i==m*(m+1)/2){cout<<"The sqr of "<<i<<" i.e. "<<i*i<<endl;}
			else{}		
		}	

		
	}
	
	return 0;
}
