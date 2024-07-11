    int peakIndexInMountainArray(vector<int>& arr) {
        
        int start = 1, end = arr.size() - 2;
        int mid = start + (end - start)/2;
        while (start <= end){

            if ( arr[mid-1]< arr[mid] && arr[mid +1]<arr[mid]){
                return mid;
            }

            else if (arr[mid -1]< arr[mid] ){
                start = mid +1;
            }
            else if (arr[mid -1]> arr[mid]){
                end = mid -1;
            }
            
            
            mid = start + (end - start)/2;
            
        }
        return -1;

    }
int main (){
int n;
	cin >> n;
	
	vector <int> arr(n);
	for(int i=0; i<n; i++){
		cin >> num;
		arr.push_back(num);
	}
	peakIndexInMountainArray(arr);
}
