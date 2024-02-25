#include <iostream>
#include "dynamic_array.hpp"

using namespace std;

int main(){
    DynamicArray array;

    array.append_element(5);
    array.append_element(7);
    array.append_element(3);
    array.append_element(7);
    array.append_element(12);
    array.append_element(10);

    cout << array.get_element_at_index(0) << '\n';

    cout << array.size() << '\n';

    array.reset();

    cout << array.get_element_at_index(0) << '\n';

    cout << array.size() << '\n';

    return 0;
}
