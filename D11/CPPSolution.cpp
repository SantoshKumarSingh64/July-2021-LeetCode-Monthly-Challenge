class MedianFinder {
public:
    /** initialize your data structure here. */
    vector<int>v;
    int count;
    MedianFinder() {
         v = {};
        count = 0;
    }
    
    void addNum(int num) {
        vector<int>::iterator upper;
        upper = upper_bound(v.begin(), v.end(), num);
        v.insert(upper,num);
        count++;
    }
    
    double findMedian() {
        if(count%2 == 0){
            return (double)(v[count/2]+v[count/2-1])/2;        
        }
        return (double)v[count/2];
    }
};

/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */
