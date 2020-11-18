void swap(int &a, int &b) {
  int t = a;
  a = b;
  b = t;
}

int firstMissingPositive(vector<int> &nums) {
  int numSize = nums.size();
  for (int i = 0; i < numSize; ++i) {
    if (nums[i] > 0 && nums[i] < numSize && nums[i] != nums[nums[i] - 1]) {
      swap(nums[i], nums[nums[i] - 1]);
      --i;
    }
  }
  for (int i = 0; i < numSize; ++i) {
    if (nums[i] != i + 1)
      return i + 1;
  }
  return numSize + 1;
}
