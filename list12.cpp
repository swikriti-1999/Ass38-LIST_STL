#include<bits/stdc++.h>
using namespace std;

int main() {
    // Define a list of vectors (each vector can have varying elements)
    
    list<vector<int>> li = {{1,2,3}, {4,5,6}, {7,8,9}};

    // Iterate and print each vector in the list
    for (const auto& vec : li) {
        for (int element : vec) {
            std::cout << element << " ";
        }
        std::cout << std::endl;
    }

   

    return 0;
}
