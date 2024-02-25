#include <iostream>
#include "dynamic_array.hpp"

using namespace std;

DynamicArray::DynamicArray(){
    max_size = 5;

    top = new int[max_size];

    start = top;
}


void DynamicArray::append_element(int element){

    if(!is_full()){
        *top = element;
        top++;
        
        cout << "Appended element " << element << " to the array.\n";
    }

    else{
        //resize_array();
        max_size = max_size + 1;
        int *new_array = new int[max_size];

        for(int i = 0; i < max_size - 1; i++){
            *(new_array + i) = *(start + i);
        }

        delete start;

        start = new_array;

        cout << "Increased the size of the array and appended the element ";
        cout << element << " to it.\n";
    }
}


int DynamicArray::get_element_at_index(int index){
    if(index < 0 || index > (max_size - 1)){
        return 0;
    }
    else{
        return *(start + index);
    }
}

int DynamicArray::size(){
    return max_size;
}

void DynamicArray::reset(){
    max_size = 0;
    int *array_reset = new int [max_size];

    delete start;

    start = array_reset;

}

bool DynamicArray::is_empty(){

    return (top == start);

}

bool DynamicArray::is_full(){
    return (start + max_size == top);

}
