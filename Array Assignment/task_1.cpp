vector <int> task_1(vector <int> &v, int target ){  
     //declares map for store key, value here time O(1) 
     unordered_map<int,int>mapData;  
      
    //iterates each element of vector time O(n) 
    for(int i=0;i<v.size();i++){ 
    //calculate need value basically what we want.          
    int need=target-v[i]; 
    // check need value is already key or not time O(1)    
         if(mapData.find(need)!=mapData.end()) 
            {     
                // if need found return result time O(1)           
                return {mapData[need],i};  
           }  
           // insert here key-value pair time O(1) 
         mapData[v[i]]=i;  
      }  
     return {}; } 
Space: O(n)  
Time: O(n) 