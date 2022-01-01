// https://practice.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1/
int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        int ans = 0;
        if(k<=0){
            return 0;
        }
        int i = 0;
        int s = 0;
        long long prod = 1;
        while(i<n){
            prod*=a[i];
            while(prod >= k && s<i){
                prod/=a[s++];
            }
            if(prod<k){
                ans+=(i-s+1);
            }
            i++;
        }
        return ans;
    }
