#include <iostream>
#include <vector>
using namespace std;

auto find_max(vector<int> num)->vector<int>{
    vector<int> max(2,0);
    for (int i = 0; i < num.size(); i++){
        int a = num[i-1]*num[i]*num[i+1];
        if (a > max[0]){
            max[0] = a;
            max[1] = i;
        }
    }
    return max;
}
int main() {
    vector<int> nums{3, 1, 5, 8};
    vector<int> max = find_max(nums);
    cout << max[0] << endl;
    cout << max[1] << endl;
    return 0;
}
