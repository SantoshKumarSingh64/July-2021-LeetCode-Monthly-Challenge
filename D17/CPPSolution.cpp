class Solution {
public:
    vector<int> threeEqualParts(vector<int>& arr) {
        int count = 0;
        int n = arr.size();
        
        for(int i=0;i<n;i++){
            count += arr[i];
        }
        if(count == 0 && n>=3){
            return {0,2};
        }
        
        if(count%3 != 0){
            return {-1,-1};
        }
        
        int onesInPart = count/3;
        int first = -1, second = -1,third = -1;
        int num1s = 0;
        
        for(int i=0;i<n;i++){
            if(arr[i]){
                num1s++;
                if(num1s == 2*onesInPart+1){
                    third = i;
                }else if(num1s == onesInPart+1){
                    second = i;
                }else if(num1s == 1){
                    first = i;
                }
            }
        }
        
        while(third < n){
            if(arr[first] == arr[second] && arr[second] == arr[third]){
                first++;
                second++;
                third++;
            }
            else{
                return {-1,-1};
            }
        }
        
        return {first-1,second};
        
    }
};
