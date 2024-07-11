void moveZeroes(vector<int>& nums) {
        int i=0;
        int j;
        int k = 0;
        int e =nums.size() ;
        while (i <e-k){
            
            if ( nums[i] == 0){
            j =i;
            while (j<e-1-k){
                swap (nums[j], nums[j+1]);
                j++;
            }
            k++;
            
            }
            else  i++;
        }
        }
int main (){
  int n;
  cin >> n;
  vector <int> nums ;
  int a;
  for (int i=0; i<n; i+){
    cin >> a;
    nums.push_back(a);
  }
  moveZeroes(nums);
  return 0;
}
