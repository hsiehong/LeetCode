int singleNumber(vector<int>& nums) {
    int numSize = nums.size();
    int lower = 0, higher = 0;
    for (int i = 0; i < numSize; ++i) {
        lower ^= nums[i];
        lower &= ~higher;
        higher ^= nums[i];
        higher &= ~lower;
    }
    return lower;
}

