class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int length = array.size();
        int i = 0;
        int j = length - 1;
        while(i < j){
            while(i < j && isEven(array[i]))
                i ++;
            while(i < j && !isEven(array[j]))
                j --;
            if (i < j)
            {
                int tmp;
                tmp = array[j];
                array[j] = array[j-1];
                array[j-1] = tmp;
            }
        }
        
    }
     bool isEven(int n){
         return (n & 1) == 1;
     }
    };
