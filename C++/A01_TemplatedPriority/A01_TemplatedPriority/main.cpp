// Any and all resources used are from DSA1 and DS2. 
// Any additional information is cited upon use in differnet locations. 
// EX: friend class has all sources and documentation provided, mostly used Visual Studio 2022's Documentation Page
// on Microsoft's site.

#include "queue.h"

int main()
{

	//Ensuring it outputs and displays values presented by the pointer
	Queue<QueueUpdate>* ptr_q = new Queue<QueueUpdate>();

	//Based on rubric: push(0), push(1), push(2)
	ptr_q->push(0);
	ptr_q->push(1);
	ptr_q->push(2);

	// what is currently contained; three push values
	ptr_q->print();

	//what is the current size of the array
	ptr_q->size();


	cout << " " << endl;
	//after popping twice
	cout << "After popping.." << endl;
	ptr_q->pop();
	ptr_q->pop();
	ptr_q->size();


	cout << " " << endl;
	//after popping again, this will result in empty array
	cout << "After popping another time.." << endl;
	ptr_q->pop();
	ptr_q->is_empty();


	cout << " " << endl;
	ptr_q->push(7);
	ptr_q->push(1);
	ptr_q->push(4);

	cout << "After pushing more values and before sorting.." << endl;
	ptr_q->print();
	ptr_q->size();

	cout << " " << endl;

	cout << "After sorting Great to Least.." << endl;
	//sorts pointer array values by great to least
	ptr_q->sortGL();
	ptr_q->print();


	/*
	Was attempting to sort Least to Great
	ptr_q->sortLG();
	ptr_q->print();
	*/

	// delete the ptr_q value so it helps aid in preventing memory leaks in the system
	// also helps prevent wasting any avaliable memory
	delete ptr_q;

	//function associated with debugging heap function to display if any memory leaks are found
	_CrtDumpMemoryLeaks();
}