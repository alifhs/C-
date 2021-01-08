// A generic sort function 
template <class T> 
void sort(T arr[], int size) 
{ 
	// code to implement Quick Sort 
} 

// Template Specialization: A function 
// specialized for char data type 
template <> 
void sort<char>(char arr[], int size) 
{ 
	// code to implement counting sort 
} 



//

#include <iostream> 
using namespace std; 

template <class T> 
void fun(T a) 
{ 
cout << "The main template fun(): "
		<< a << endl; 
} 

template<> 
void fun(int a) 
{ 
	cout << "Specialized Template for int type: "
		<< a << endl; 
} 

int main() 
{ 
	fun<char>('a'); 
	fun<int>(10); 
	fun<float>(10.14); 
} 

