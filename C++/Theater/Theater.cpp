#include <iostream>
using namespace std;

int iterat(int nept, int omic, int seats);
int recurs(int seats, int i, int total);
int formu(int seats, int total);

int main()
{
	int nept = 4; //even seats, four hands
	int omic = 3; //odd seats, three hands
	int seats = 3; //10 seats = 35 hands
	int i = 0;
	int total = 0;


	cout << "If there are " << seats << " seats, there are " << iterat(nept, omic, seats) << " hands." << endl;
	cout << "If there are " << seats << " seats, there are " << recurs(seats, i, total) << " hands." << endl;
	cout << "If there are " << seats << " seats, there are " << formu(seats, total) << " hands." << endl;

}

int iterat(int nept, int omic, int seats) {  
	
	int neptotal = 0;
	int omictotal = 0;

	for (int i = 1; i < seats + 1; i++) {

		if (i % 2 == 0) //even so add 4 to total
		{
			neptotal += 4;
		}
		else //odd so add 3 to total
		{
			omictotal += 3;
		}
	}

	return neptotal + omictotal;
	
} 

int recurs(int seats, int i, int total) {

	if (seats == 0)
	{
		return total - 2; //issues here, shouldnt need to sub
	}
	if(i <= seats) {
		if (i % 2 == 0) 
		{
			total += 4;
		}
		else 
		{
			total += 3;
		}
	}
	return recurs(seats - 1, i, total);
} 

int formu(int seats, int total) {
	
	int even = seats % 2;
	int odd = seats % 2;
	total = 0;

	if (even == odd) 
	{
		total =+ 3 + 4;
	}

	if (even == 0) 
	{
		total =+ 4;
	}
	if(odd =! 0)
	{
		total += 3;
	}


	return total;
}


