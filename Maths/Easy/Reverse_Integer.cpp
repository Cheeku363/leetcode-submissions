int reverse(int x) {
        int y=0;
        while(x){
            // Check for overflow. If the answer we have got so far is out of range of 
            // 32-bit integer, then return 0;
            // We are dividing it by 10 because, we are going to multiple 'y'
            // by 10 after this condition. 
            // Hence if y is > 32-integer max value already, we would not be multiplying 
            // it by 10 anyways, so we check y > INT_MAX/10, then return 0. Otherwise
            // y*10 would be in the range and we can add mudolus value to it and it would 
            // be in the 32-bit integer range.
            if(y>INT_MAX/10 || y<INT_MIN/10){
                return 0;
            }else{ // add one digit to the final answer one by one
                y=y*10 +x%10;
                x=x/10;
            }
        }
        return y;