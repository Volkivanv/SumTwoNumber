#include <iostream>
#include <vector>
using namespace std;


int main() {
    vector<int>vec = {2, 11, 15, 6, 3, 1};
    int answer = 9;
    int ix = 0;
    int jx = 0;
    for(int i = 0; i < vec.size() - 1;i++){
        for(int j = i+1; j < vec.size(); j++){
            if(vec[i]+vec[j] == answer){
                ix = i;
                jx = j;
            }
        }
    }
    cout <<vec[ix] << "  " <<vec[jx] << endl;

}
