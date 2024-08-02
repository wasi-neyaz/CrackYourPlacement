class Solution {
public:
    int strStr(string haystack, string needle) {
       
        //   for (int i = 0; i <= haystack.length() - needle.length(); ++i) {
        //     if (haystack.substr(i, needle.length()) == needle) {
        //         return i;
        //     }
        // }
        // return -1; 

         int i=0,j=0;
        int len1=haystack.length();
        int len2=needle.length();
        int count =0;
        int store;
        while(i<len1){
            if(haystack[i]==needle[j]){
                i++;
                j++;
                count++;
                if(count ==1){
                    store = i;
                }
                if(count==len2){
                    return i-len2;
                }
            }
            else if(count>0){
                count =0;
                j=0;
                i=store;
            }
            else{
                i++;
            }
        }
        return -1;
        // int m = haystack.length();
        // int n = needle.length();
        // if(n>m){
        //     return -1;
        // }

        // for(int i =0;i<m-n;i++){
        //     for(int j = 0;j<n;j++){
        //          if(j==i){
        //             return i;
        //         }
        //         if(haystack[i+j] != needle[j]){
        //             break;
        //         }
        //         if(j == n){
        //             return i;
        //         }
                
        //     }
        // }
        // return -1;
    }
};
