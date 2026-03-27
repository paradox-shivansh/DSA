// #include <bits/stdc++.h>

// using namespace std;

// int main() {
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         int arr[n];
//         for(int i=0; i<n; i++){
//             cin>>arr[i];
//         }
//         int maximum = arr[0];
//         for(int i=0; i<n; i++){
//             if(arr[i]>maximum) maximum = arr[i];
//         }
//         cout<<maximum<<endl;
//     }
// }


#include <bits/stdc++.h>
using namespace std;


void peak(int arr[] , int start , int end){
    
    if(start==end){
        cout<< arr[start];
        
        return;
    }
    
    int mid = (start+end)/2;
    
    if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]){
        cout<< arr[mid];
        return;
    }if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
        peak(arr,start,mid);
    }else{
        peak(arr,mid+1,end);
    }
    
    
    
    
}

int main() {
	int T,N;
	cin>>T;
	
	while(T--){
	    cin >> N;    
	
    	int arr[N];
    	for(int i=0;i<N;i++){
    	    cin>>arr[i];
    	}
    	
    	peak(arr,0,N-1);
	}
	
	return 0;

}
