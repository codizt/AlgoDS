/*The simple idea of Kadane’s algorithm is to look for all positive contiguous segments of the array (sum is used for this). And keep track of maximum sum contiguous segment among all positive segments (best is used for this). Each time we get a positive-sum compare it with sum and update sum if it is greater than sum */

#include<iostream>
using namespace std;

int kadane(int arr[], int n){
	int best = 0, sum = 0;
	for (int i=0; i<n; i++){
		sum = max(arr[i], sum+arr[i]);
		best = max(sum,best);
	}
	return best;
}

int main(){
	int n; //Size of array
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<kadane(arr, n);
	return 0;
}
