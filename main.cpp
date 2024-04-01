#include <iostream>
#include "dynamic_array.hpp"
#include "arithmetic_array.hpp"

using namespace std;

int main(){
    ArithmeticDynamicArray array = ArithmeticDynamicArray(3);

    array.append_element(5);
    cout << array.size() << "\n\n";

    array.append_element(7);
    array.append_element(3);
    array.append_element(7);
    array.append_element(12);
    cout << array.size() << "\n\n";

    array.append_element(10);

    cout << array.size() << '\n';

    array.append_element(21);

    cout << array.size() << "\n\n";

    array.append_element(22);

    cout << array.size() << "\n\n";

    array.append_element(23);

    cout << array.size() << "\n\n";

    array.append_element(21);

    cout << array.size() << "\n\n";

    cout << array.get_element_at_index(0) << '\n';

    array.reset();

    cout << array.size() << '\n';

    return 0;
}
