void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        int i =m, j=0;
        while (i<m+n && j<n){
            nums1[i] = nums2[j];
            i++;
            j++;
        }

        sort(nums1.begin(), nums1.end());
    }
int main (){
  int m;
  int num1;
  cin >> m;
  vector <int> nums1(m);
  for (int i=0; i<m; i++){
    cin >> num1;
    nums1.push_back(num1);
  }
  int n;
  int num2;
  cin >> n;
  vector <int> nums2(n);
  for (int i=0; i<n; i++){
    cin >> num2;
    nums2.push_back(num2);
  }
  merge(nums1, m, nums2, n);
  return 0;
  
}
