int result = 0;
    while(nums.size() > 0){
        vector<int> max = find_max(nums);
        cout << "max[0]" << max[0] << endl;
        cout << "max[1]" << max[1] << endl;
        nums.erase(nums.begin() + max[1]);
        result += max[0];
    }
    return result;