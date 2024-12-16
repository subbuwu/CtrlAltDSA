#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;

    // push_back and pop_back
    // adds an element at last of vec
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    // deletes an element at last of vec
    // vec.pop_back();

    // front and back
    cout << "front of vec : " << vec.front() << " back of vec : " << vec.back() << endl;

    // for(int i : vec){
    //     cout << i << endl;
    // }

    // size of vector
    cout << "size of vec : " << vec.size() << endl;

    // .at() method
    cout << "Vector element at last index : " << vec.at(vec.size()-1) << endl;
    return 0;


}
