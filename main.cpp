#include <iostream>
#include "dynamic_array.hpp"

using namespace std;

int main(){
    DynamicArray array;

    array.append_element(5);
    array.append_element(7);

    array.size();
    array.get_element_at_index(0);
    array.get_element_at_index(1);
    array.get_element_at_index(2);

    array.reset();

    for(int i = 0; i < 50; i++){
        array.append_element(i);
    }

    array.size();

    array.get_element_at_index(37);


    return 0;
}
