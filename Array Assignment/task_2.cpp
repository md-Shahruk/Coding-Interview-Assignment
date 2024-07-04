int task_2(vector<int>& prices){ 
             // vector first element initial for minimum prices  
             int min_p=prices[0];        
             int mx_p=0;  
         //for iterates each elements time O(n)                                    
        for(int i=1;i<prices.size();i++){ 
        // calculate profit where current price-minimum price time O(1)   
            int cur_p=prices[i]-min_p;  
            // always take here highest profit compare to current profit time O(1) 
            mx_p=max(mx_p,cur_p);  
            //always update minimum  time O(1)           
            min_p=min(min_p,prices[i]);  
        }  
        // retrn result 
        return mx_p;  
    } 
Time: O(n)  
Space: O(1) 