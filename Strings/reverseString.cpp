#include <iostream>
#include <vector>
using namespace std;

void reverseString(vector<char>& s) {
        int start = 0;
        int end = s.size()-1;

        while(start <= end){
            swap(s[start],s[end]);
            start++;
            end--;
        }

        for(char c : s){
            cout << c ;
        }
}


int main(){
    vector<char> s;
    s.push_back('T');
    s.push_back('A');
    s.push_back('M');
    s.push_back('I');
    s.push_back('L');
    reverseString(s);
    return 0;
}

