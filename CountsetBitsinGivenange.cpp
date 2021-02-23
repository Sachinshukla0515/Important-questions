// Problem statement : given a number , count the total number of set bits between 0 to n.

// using look up table
// time : O(n) space : constant

// function to implement
 
int countBits(int num) {
        
        int table[256]={0};
    
         for(int i=1;i<256;i++){
            table[i]=(i&1)+table[i/2];
        }
        
        int count=0;
        for(int i=0;i<=num;i++){
            count+= table[i & 0xff]+ table[(i>>8)& 0xff] + table[(i>>16)&0xff]+table[(i>>24)&0xff];
        }
        
        return count;
   }// end of Function
