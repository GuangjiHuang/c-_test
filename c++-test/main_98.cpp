#include<iostream>
#include<vector>
#include<cstdio>

using namespace std;

int main()
{
    // create a vector
    vector<int> my_vec{1, 3};
    cout << "the capacity of the my_vec is the: " << my_vec.capacity() << endl;
    // to see the adress of the my_vec
    printf("the adress of the my_vec is the: %p\n", my_vec);

    // dynastic to change the size of the my_vec
    cout << "Please input the size you want to change in the my_vec: " << endl;
    size_t new_size;
    cin >> new_size;
    my_vec.resize(new_size);
    cout << "the new capacity of the my_vec is the: " << my_vec.capacity() << endl;
    printf("the adress of the my_vec is the: %p\n", my_vec);
    //printf("the adress of the my_vec is the: %p\n", my_vec.data());

    return 0;
}
