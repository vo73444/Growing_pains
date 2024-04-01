#include <iostream>
#include "arithmetic_array.hpp"

using namespace std;

ArithmeticDynamicArray::ArithmeticDynamicArray(int amount){
    resize = amount;

    max_size = 5;

    top = new int[max_size];

    start = top;
}


void ArithmeticDynamicArray::append_element(int element){

    if(!is_full()){
        *top = element;
        top++;
        
        cout << "Appended element " << element << " to the array.\n";
    }

    else{
        //resize_array();
        max_size = max_size + resize;
        int *new_array = new int[max_size];
        top = new_array;

        for(int i = 0; i < max_size - resize; i++){
            *(new_array + i) = *(start + i);
            top++;
        }

        delete start;

        start = new_array;

        *top = element;
        top++;

        cout << "Increased the size of the array and appended the element ";
        cout << element << " to it.\n";
    }
}


int ArithmeticDynamicArray::get_element_at_index(int index){
    if(index < 0 || index > (max_size - 1)){
        return 0;
    }
    else{
        cout << "The element at index " << index << " is ";
        return *(start + index);
    }
}

int ArithmeticDynamicArray::size(){
    cout << "The size of the array is ";
    return max_size;
}

void ArithmeticDynamicArray::reset(){
    max_size = 0;
    int *array_reset = new int [max_size];

    delete start;

    top = array_reset;

    start = array_reset;

}

bool ArithmeticDynamicArray::is_empty(){

    return (top == start);

}

bool ArithmeticDynamicArray::is_full(){
    return (top == start + max_size);

}
