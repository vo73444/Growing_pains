#include <iostream>


class ArithmeticDynamicArray{

    int resize;

    int *start;

    int *top;

    int max_size;

    public:

    ArithmeticDynamicArray(int amount = 1);

    void append_element(int element);

    int get_element_at_index(int index);

    int size();

    void reset();

    bool is_empty();

    bool is_full();


};

