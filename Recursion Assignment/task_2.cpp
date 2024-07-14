//find sum of a
 int forA(int a){
    if(a==0) return 0;
    int ares=a+forA(a-1);//time O(a)
    return ares;
 }
 //find sum of b
 int forB(int b){
    if(b==0) return 0;
    int bres=b+forB(b-1);//time O(b)
    return bres;
 }

 int task_2(int a,int b){
    if(a==0 || b==0) return 0;
    int big=max(a,b);
    int result= (forA(a)+forB(b));//time O(a+b) space O(a+b)
    
    return result-big;
 }

 //Time complexity O(a+b)
 // Space complexity O(a+b)
