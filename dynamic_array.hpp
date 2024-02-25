#include <iostream>
#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY

class DynamicArray{

    int *start;

    int *top;

    int max_size;

    public:

    DynamicArray();

    void append_element(int element);

    int get_element_at_index(int index);

    int size();

    void reset();

    bool is_empty();

    bool is_full();


};

#endif
