 string addStrings(string num1, string num2) {        
        string ans="";
        int i=num1.length()-1,j=num2.length()-1,c=0; //c is carry
        while(i>=0 && j>=0){
            int sum=num1[i]-'0' + num2[j]-'0'+c; //converting char to int and adding the carry
            ans+=(sum%10+'0'); 
            c=sum/10;
            i--;
            j--;
        }
        //if string 2 is not travesrsed fully
        while(j>=0){
            int sum=num2[j]-'0'+c;
            ans+=(sum%10+'0');
            c=sum/10;
            j--;
        }
        //if string 1 is not travesrsed fully
        while(i>=0){
            int sum=num1[i]-'0'+c;
            ans+=(sum%10+'0');
            c=sum/10;
            i--;
        }
        //if carry is greater than zero than add it in the ans string
        if(c>0){
            ans+=(c+'0');
        }
        i=0,j=ans.length()-1;
        //reverse of the string
        while(i<j){
            char temp=ans[i];
            ans[i]=ans[j];
            ans[j]=temp;
            i++;
            j--;
        }        
        return ans;     
    }