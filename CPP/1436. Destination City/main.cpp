//You are given the array paths, where paths[i] = [cityAi, cityBi] means there exists a direct path going from cityAi to cityBi. Return the destination city, that is, the city without any path outgoing to another city.
//
//It is guaranteed that the graph of paths forms a line without any loop, therefore, there will be exactly one destination city.

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;
class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> startPoints;
        for (auto i: paths) {
            startPoints.insert(i[0]);
        }
        for (auto i: paths) {
            if(find(startPoints.begin(), startPoints.end(), i[1]) == startPoints.end()){
                return i[1];
            }
        }
        return paths[0][1];
    }
};

int main() {
    vector<vector<string>> paths = {{"London","New York"},{"New York","Lima"},{"Lima","Sao Paulo"}};
    auto res = Solution().destCity(paths);
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
