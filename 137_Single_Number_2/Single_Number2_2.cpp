int singleNumber(vector<int>& nums) {
    int numSize = nums.size();
    int bitCnt[32] = {0};
    for (int i = 0; i < numSize; ++i) {
        int num = nums[i];
        for (int j = 0; j < 32; ++j) {
            if (num & (1 << j))
                bitCnt[j]++;
        }
    }
    int res = 0;
    for (int i = 0; i < 32; ++i) {
        if (bitCnt[i] % 3) {
            res |= (1 << i);
        }
    }
    return res;
}
