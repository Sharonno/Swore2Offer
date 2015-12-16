class Solution {
public:
    void reOrderArray(vector<int> &array) {
        int length = array.size();
        int i,j;
        for(i=0; i< length; i++){
            for(j=length-1; j>i; j--){
                if(isEven(array[j]) && !isEven(array[j-1])){
                    int tmp;
                    tmp = array[j];
                    array[j] = array[j-1];
                    array[j-1] = tmp;
                }                   
                
            }
        }
    }
     bool isEven(int n){
         return (n & 1) == 1;
     }
    };