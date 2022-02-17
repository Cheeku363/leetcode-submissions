   string addBinary(string a, string b) {
       string res;
        int i=a.length(),j=b.length();
        int sum=0;
        while(i>0||j>0){
            sum=sum>1?1:0;// if sum>1 then sum=1 else sum=0
            if(i>0)sum+=a[--i]-'0'; //converting string to integer for adding to sum variable while checking if character is present in string or not
            if(j>0)sum+=b[--j]-'0';
            res+=to_string(sum%2); // adding remainder of sum after dividing by 2 to res variable
        }
        if(sum>1?1:0)res+= to_string(sum>1?1:0); //if carry over 1 is present then adding that to string
        reverse(res.begin(),res.end()); // reversing the res string since the addition was done at end of string res
        return res; 
    }