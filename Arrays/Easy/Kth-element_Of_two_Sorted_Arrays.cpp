/*
a1 = [1, 3, 4, 7, 10, 12]
a2 = [2, 3, 6, 15]
k = 5

Brute Force:-
Use Two pointer and compare elements, when counter reaches 5th element return that element.
TC- O(K)
SC- O(1)

Efficient Approach:-
1. Both the array is sorted, So we can use Binary Search.
2. lefthalf element <= righthalf elements.
	
	1 3 4 | 7 10 12
	  2 3 | 6 15

3. If we got our correct left half, 4 is largest in the first array, and 3 is largest in second array.
4. Ans will be max(4, 3) ==> 4
5. l1 <= r2 and l2 <= r1, max(l1, l2)

TC - log(min(n, m))
SC - O(1)
*/

int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        if(n > m){
            return kthElement(arr2, arr1, m, n, k);
        }
        int low = max(0, k-m), high = min(k, n);
        
        while(low <= high){
            int cut1 = (low + high) >> 1;
            int cut2 = k - cut1;
            
            int l1 = cut1 == 0 ? INT_MIN : arr1[cut1-1];
            int l2 = cut2 == 0 ? INT_MIN : arr2[cut2-1];
            int r1 = cut1 == n ? INT_MAX : arr1[cut1];
            int r2 = cut2 == m ? INT_MAX : arr2[cut2];
            
            if(l1 <= r2 && l2 <= r1){
                return max(l1, l2);
            }
            else if(l1 > r2){
                high = cut1 - 1;
            }
            else{
                low = cut1 + 1;
            }
        }
        return 1;
    }

