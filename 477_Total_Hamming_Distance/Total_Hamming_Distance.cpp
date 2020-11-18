int totalHammingDistance(vector<int> &nums) {
  int numSize = nums.size();
  int ham = 0;
  int bitCnt[32];
  for (int i = 0; i < 32; i++)
    bitCnt[i] = 0;
  for (int i = 0; i < numSize; ++i) {
    // calculate each bit of each num
    for (int j = 0; j < 32; j++) {
      if (nums[i] & (0x1 << j)) {
        ++bitCnt[j];
      }
    }
  }
  for (int i = 0; i < 32; i++) {
    ham += ((numSize - bitCnt[i]) * bitCnt[i]);
  }
  return ham;
}
