#include <iostream>
#include "dynamic_array.hpp"

using namespace std;

DynamicArray::DynamicArray(){

    start = *arr;

    top = *arr;

    max_size = 5;
    
    int *arr = new int[max_size];
}


 int* DynamicArray::resize_array(int *arr, int current_size){
    current_size = current_size + 1;
    
    int *new_array = new int [current_size];

    for(int i = 0; i < current_size; i ++){
        new_array[i] = arr[i];

    }


    delete[] arr;

    return new_array;

}

void DynamicArray::append_element(int element){

    if(!is_full()){
        top++;
        *top = element;
        
        cout << "Appended element " << element << " to the array.\n";
    }

    else{
        *arr = resize_array(*arr, max_size);
        top++;
        *top = element;

        cout << "Increased the size of the array and appended the element ";
        cout << element << " to it.\n";
    }
}


int DynamicArray::get_element_at_index(int index){
    if(index < 0 || index > (max_size - 1)){
        return 0;
    }
    else{
        return *arr[index];
    }
}

void DynamicArray::size(){
    cout << max_size << "\n";
}

void DynamicArray::reset(){
    int *array_reset = new int [0];

    delete[] arr;
}

bool DynamicArray::is_empty(){

    return (top == start);

}

bool DynamicArray::is_full(){
    return (start + max_size == top);

}
