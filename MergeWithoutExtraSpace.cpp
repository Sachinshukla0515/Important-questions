
//Merge without Extra Space : TIme :O(m+n) space :O(1)


void merge(int arr1[], int arr2[], int n, int m) { 
            
            int i=0,j=0,k=0;
            int maxm=max(arr1[n-1],arr2[m-1])+1; // maximum element in both the arrays
            
            while(i<n && j<m){
                
                int curr1=arr1[i]%maxm; // original value stored at ith position in first array
                int curr2=arr2[j]%maxm; // original value stored at jth position in second array
                
                if(curr1>=curr2){
                    
                    if(k<n){
                        arr1[k]+=curr2*maxm;
                        j++;
                      }
                    else{
                        arr2[k-n]+=curr2*maxm;
                        j++;
                      }
                     
                }
              else {
                   
                   if(k<n){
                       arr1[k]+=curr1*maxm;
                       i++;
                   }
                  else{
                      arr2[k-n]+=curr1*maxm;
                      i++;
                  }
                }
               k++;
            }// end of while
            
          while(i<n){
              int curr1=arr1[i]%maxm;
              if(k<n)  arr1[k]+=curr1*maxm;
              else arr2[k-n]+=curr1*maxm;
              i++,k++;
          }
         while(j<m){
             int curr2=arr2[j]%maxm;
             if(k<n) arr1[k]+=curr2*maxm;
             else arr2[k-n]+=curr2*maxm;
             j++,k++;
         }
         
         for(int i=0;i<n;i++) arr1[i]/=maxm;
         for(int j=0;j<m;j++) arr2[j]/=maxm;
            
        } //end of function
