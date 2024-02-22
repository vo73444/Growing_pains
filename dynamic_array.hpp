#include <iostream>
#ifndef DYNAMIC_ARRAY
#define DYNAMIC_ARRAY

class DynamicArray{

    int *start;

    int *top;

    int max_size;

    int *arr[];

    int *resize_array(int *arr, int current_size);

    public:

    DynamicArray();

    void append_element(int element);

    int get_element_at_index(int index);

    void size();

    void reset();

    bool is_empty();

    bool is_full();


};

#endif
