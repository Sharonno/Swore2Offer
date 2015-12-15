class Solution {
public:
    double Power(double base, int exponent) {
        double result = 1;
        //if(base == 0.0)//由于计算机表示小数都有误差，因此不能这样直接判断；
        if(equal(base, 0.0))
            if(exponent == 0)            
                return 1.0;
            else if(exponent < 0.0)
                return 0.0;
            else
                return 0;
        //base != 0
            //compute as normal
        else if(exponent >= 0)
            
            for(int i=1; i<= exponent; i++){
                result *= base;
        }
        else
            // abs(exponent)
            for(int i=1; i<=  -1*exponent; i++){
                result *= base;
        }
        if(exponent < 0) 
            result = 1.0 / result;
        return result;
                
    
    }
    bool equal(double num1, double num2){
        if((num1 - num2) < 0.0000001 && (num1- num2) > -0.0000001)
            return true;
        else
            return false;
    }
};