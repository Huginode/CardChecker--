#include <iostream>
#include <vector>

using namespace std;

//Erase function to solve later problems

template<typename T>
void pop_front(std::vector<T> &v) {
    if (v.size() > 0) {
        v.erase(v.begin());
    }
}