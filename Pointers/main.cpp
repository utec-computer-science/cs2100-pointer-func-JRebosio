#include <iostream>
#include "pointers.h"

int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.678,3.4567,2.4567,4.1234,15.123};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);	
  cout<<"int array :  ";
  cout<<_array_1[0]<<" "<<_array_1[1]<<" "<<_array_1[2]<<" "<<_array_1[3]<<" "<<_array_1[4]<<endl;

	cout<<"\n\nfloat array :  ";
	_bubblesort_(_array_2,_b_float_,5);
	cout<<_array_2[0]<<" , "<<_array_2[1]<<" , "<<_array_2[2]<<" , "<<_array_2[3]<<" , "<<_array_2[4]<<endl;
  
  cout<<"\n\ndouble array :  ";
   _bubblesort_(_array_3,_b_double_,5);
	cout<<_array_3[0]<<" , "<<_array_3[1]<<" , "<<_array_3[2]<<" , "<<_array_3[3]<<" , "<<_array_3[4]<<endl;

  cout<<"\n\nchar array :  ";
	_bubblesort_(_array_4,_b_char_,6);
	cout<<_array_4[0]<<" , "<<_array_4[1]<<" , "<<_array_4[2]<<" , "<<_array_4[3]<<" , "<<_array_4[4]<<endl;

    return 0;
}
