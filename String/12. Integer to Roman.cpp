class Solution {
public:
    string intToRoman(int num) {
        vector<int> v;
        string ans="";
        int temp=num;
        int mul=10;
        while(temp){
            int rem = num%mul;
            num =num /mul;
            num*=mul;
            mul *=10;
            temp = temp/10;
            v.push_back(rem);
        }
        for(int j=v.size()-1; j>=0; j--){
            if(j==3){
                int num=v[j]/1000;
                for(int i=0; i<num; i++){
                    ans+="M";
                }
            }
            else if(j==2){
                if(v[j]==400) ans+="CD";
                else if(v[j]==900) ans+="CM";
                
                else if(v[j]==500) ans+="D";
                
                else if(v[j] > 500){ 
                    int num = v[j]-500;
                    num/=100;
                    ans+="D";
                    for(int i=0;i<num; i++){
                        ans+="C";
                    }
                }else if(v[j]<400){
                    int num = v[j]/100;
                    for(int i=0; i<num; i++){
                        ans+="C";
                    }
                }
            }else if(j==1){
                if(v[j]==40) ans+="XL";
                else if(v[j]==90) ans+="XC";

                else if(v[j]<40){
                    int num = v[j]/10;
                    for(int i=0; i<num; i++){
                        ans+="X";
                    }
                }else if(v[j] == 50) ans+="L";
                else{
                    int num=v[j]-50;
                    num/=10;
                    ans+="L";
                    for(int i=0; i<num; i++){
                        ans+="X";
                    }
                }

            }else{
                if(v[j]==4) ans+="IV";
                else if(v[j]==9) ans+="IX";

                else if(v[j]<4){
                    for(int i=0; i<v[j]; i++){
                        ans+="I";
                    }
                }else if(v[j]==5){
                    ans+="V";
                }else{
                    ans+="V";
                    for(int i=0; i<v[j]-5; i++){
                        ans+="I";
                    }
                }
            }
        }

        return ans;


    }
};