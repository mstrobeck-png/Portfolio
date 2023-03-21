#pragma once
#include <iostream>
using namespace std;

//using this define to find memory leaks
#define _CRTDBG_MAP_ALLOC


//c_Queue stands for just "Class_Queue"; this creates the template that we can work with
template <class c_Queue>
class Queue
{
public:

	//creating the initalization of the pointer array to be referanced down the road
	c_Queue* ptr_array;

	//this is the current size of the ptr_array that will be updated as we push and pop values
	int ptr_size = 0;

	//setting the size of just how much the array can hold
	int setSize = 100;

	//use for incoming values placements that need to be temp replaced
	c_Queue updateTemp;

	//constructor that helps hold the pointer and passes in the size that is chosen by default
	Queue() {
		ptr_array = new c_Queue[setSize];
	};

	//copy constructor
	Queue(const Queue& copying) {
		//similiar to the constructor, but this copies it
		ptr_array = new c_Queue[setSize];
	};

	//copy assignment
	Queue& operator=(const Queue& other_copy) {
		other_copy.ptr_array;
	};

	~Queue() {
		delete[] ptr_array;
	};

	//referanced by the Alberto Class example
	bool operator>(const Queue& other) {
		bool updateBool = this->ptr_size > other.ptr_size;
		return updateBool;
	}

	//referanced by the Alberto Class example
	bool operator<(const Queue& other) {
		bool updateBool = this->ptr_size < other.ptr_size;
		return updateBool;
	}

	//This function will print all ptr_array that are contained after being
	//pushed or popped into the pointer array.
	void print() {
		//this will by default restart the loop at zero when running new
		//ptr_array through the area;
		for (int i = 0; i <= ptr_size; i++) {
			cout << ptr_array[i] << " ";
		}
		cout << endl;
	}


	//size will return the overall size of the array with ptr_array within it and print the result.
	void size() {
		cout << "There are " << ptr_size << " elements within this array." << endl;
	}


	//will determine if the array is or is not empty
	bool is_empty() {

		//by default the array is not full, but using a bool will allow true or false returns
		bool isFull = false;

		if (ptr_size > 0)
		{
			//if there is more than 0 in ptr_array that can be found in this array, then it 
			//will return true and state it is not empty
			cout << "This array is not empty." << endl;
			isFull = true;
			return isFull;
		}
		else
		{
			//else the array will return it is not empty and the bool will remain false
			cout << "This array is empty." << endl;
			isFull = false;
			return isFull;
		}
	}

	//pop any values out of the array, but if empty and popped will return is_empty
	int pop() {

		//take the temp value and set it equal to the first spot in the array
		updateTemp = ptr_array[0];
		int i = 0;

		//while int i is less than that of the array size then pop the value and make the array one less
		while (i < ptr_size) {
			ptr_array[i] = ptr_array[i + 1];
			i++;

			//checking that if last value is popped, that the array is returning back empty
			if (ptr_size < 0) {
				return is_empty();
			}
		}
		//make the array smaller as we take one value away through pop
		ptr_size--;
	}





	// this function will sort the values in the array from greater to least; EXAMPLE: Instead of 1, 2, 3 
	// it would result in 3, 2, 1
	// Titled sortGL because Greater to Less
	void sortGL() {
		//int i will equal the size of the array at this point in the program and begin a sorting process
		int i = ptr_size;

		//while i is greater than 0, we will want to go thorugh each value and arrange them from Greatest to Least
		while (i > 0) {
			while (ptr_array[i - 1] < ptr_array[i]) {
				//if the value is less than that of the value before it, then do the following
				//update the updateTemp value initalized at the start of the code and replace default value
				//with that of the current spot of the array
				updateTemp = ptr_array[i];

				//takes a value and sets it equal to a new spot in the array
				ptr_array[i] = ptr_array[i - 1];

				//replaces updated value in the temp spot
				ptr_array[i - 1] = updateTemp;
			}


			//subtracting here allows us to contiune to shrink i until we have gone through the entire array
			i--;
		}
	}

	/*
		void sortLG() {
			//int i will equal the size of the array at this point in the program and begin a sorting process
			int i = ptr_size;

			//while i is greater than 0, cycle through and make least to greatest: EX: 1,2,3
			while(i > 0) {}
		}
	*/

	//take the given values and put them into the array
	void push(int push_queue) {
		int i = 0;
		c_Queue* updateTemp = new c_Queue[setSize];

		//need to convert from class obj to int, run while loop
		//push_queue = ptr_array[ptr_size];
		//ptr_size++;

		//while value i is less than the pointer array's size, store the value in the next avaliable spot
		while (i < ptr_size) {
			//update the temp value[i] with the ptr_array value at [i] and then increase i so it moves to the next
			//spot in the array
			updateTemp[i] = ptr_array[i];
			i++;
		}
		//deletePtr(ptr_array, updateTemp);
		//deletes the ptr_array, to prevent any leaks in the memory
		delete[] ptr_array;

		//update the pointer array with the temp
		ptr_array = updateTemp;
		ptr_array[ptr_size] = push_queue;

		//icrease the size of ptr so the next spot becomes avaliable
		ptr_size++;

		//fillArray(ptr_array, push_queue, ptr_size);

	}
};




//attempt a test to  guide the update of the pointers as requested by rubric
class QueueUpdate
{
public:

	//attribute for default number 
	//will be updated upon pushing new values
	int defaultNum = 0;

	//this number will update the default
	int updateNum = 0;


	/*
	* THIS COMMENT GOES FOR ALL BOOL OPERATORS
	* based these along the lines of the Alberto Class and ensuring not to overload and to also convert
	* a class to a bool value without muatating values
	*/
	bool operator>(const QueueUpdate& other) {
		bool updateBool = this->defaultNum > other.defaultNum;
		return updateBool;
	}

	//referanced by the Alberto Class example
	bool operator<(const QueueUpdate& other) {
		bool updateBool = this->defaultNum < other.defaultNum;
		return updateBool;
	}

	//constructor
	QueueUpdate() {}

	//sets up the update to the new value as we push values into the function
	QueueUpdate(int updateNew)
	{


		//if updateNew = defaultNum then we would only have the default value of 0
		//this makes the number update to the newest number as values are pushed in
		int newNum;
		defaultNum = updateNew;
		newNum = defaultNum;
		//return newNum = defaultNum
	}


	// So I did some research because my pointer was having a hard time outputting values and the debug kept
	// bringing up the idea of a missing << operator and an ostream& solution. I referred to the Alberto Class and found
	// that it likely was associated with the bool operators. After watching numorous videos, forums, as well as Visual Studio
	// documentation page, there was a recommendation for a "friend" class for my error. The friend class solution allowed for private 
	// variables to be accessed and that included variables such as ostream. Therefore I chose to follow the method after
	// exploring it more.
	// One referance used: https://stackoverflow.com/questions/236801/should-operator-be-implemented-as-a-friend-or-as-a-member-function
	// Another referance used: https://sites.google.com/site/pdcppnotes/friends/operator-overloading-friend
	// The main sites referenced was the Microsoft Visual Studio Documentation Page
	// - https://learn.microsoft.com/en-us/cpp/cpp/friend-cpp?view=msvc-170
	//		- this one taught me the friend class and how to go about declaring the type. Friend *Class Name*
	// 
	// -  https://learn.microsoft.com/en-us/cpp/standard-library/output-streams?view=msvc-170
	//		- this one taught be the concepts of outputs and buffers. For more information on it I referred to:
	//		- https://learn.microsoft.com/en-us/cpp/standard-library/overloading-the-output-operator-for-your-own-classes?view=msvc-170
	//			- the source here taught me that sometimes cout can have an issue accepting something given the overload that can occur.
	//			  therefore I needed the friend aspect to declare the connection and access private data found within that of my class. 
	//			  Taking in the value we need to update from the QueueUpdate Class and then also takes in the ostream(output streams) in and out variables.
	//friend allows access to the private values initalized up top
	//ostream & operator<< refers to the output we initalized

	//this section was also referenced by the Alberto class but I wanted to have a deeper understanding before actually
	//using it

	friend ostream& operator <<(ostream& output, QueueUpdate QU_item)
	{
		//take the output stream and set it to output class element or value based on the updated testing
		//QU_item comes from the class name in corrolation to this object that is being used or applied. It's short for QueueUpdate_item
		output << QU_item.defaultNum;

		/*
			Page: 4888 of Microsoft VS documentation if pdf is downloaded; Alberto Class

		*/

		//return the output
		return output;
	}
	/*
	* cant work because it needed to access a private value; use friend and we get access to that
	ostream & operator <<(ostream& output) {
		return output << updateNum;
	}
	*/



	//deconstructer
	~QueueUpdate() {}
};

