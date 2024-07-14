void fun(string&s, int start,int end){
    if(start>=end) return ;
    // swap string value for reverse string
    swap(s[start],s[end]);//time O(1)
    fun(s,start+1,end-1);//time O(n)
    } 

  bool task_1(string&s){
    string orginal=s;//time O(n)
    fun(s,0,s.size()-1);
    return s==orginal;//time O(n)
  }
 
 // Time complexity O(n)
//  Spcae complexity O(n)