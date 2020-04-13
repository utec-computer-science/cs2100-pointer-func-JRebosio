#include <iostream>
using namespace std;

void * _bubblesort_(
	void * _array_, 
	void (*_puntero_) (void *, int _i, int _k),
	int _tam_
){
	for (int i = 0; i < _tam_ ; i++)
		for(int k = 0; k < _tam_-1-i; k++)
			_puntero_(_array_,k,k+1);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k){
    int *arr = static_cast<int*>(_vector_);
	  if(arr[_i]>arr[_k])
     swap(arr[_i],arr[_k]);
}

void  _b_float_ (void * _vector_, int _i,int _k){
    float *arr = static_cast<float*>(_vector_);
	  if(arr[_i]>arr[_k])
     swap(arr[_i],arr[_k]);
}

void  _b_double_ (void * _vector_, int _i,int _k){
    double *arr = static_cast<double*>(_vector_);
	  if(arr[_i]>arr[_k])
     swap(arr[_i],arr[_k]);
}

void  _b_char_ (void * _vector_, int _i,int _k){
    char *arr = static_cast<char*>(_vector_);
	  if(arr[_i]>arr[_k])
     swap(arr[_i],arr[_k]);
}

