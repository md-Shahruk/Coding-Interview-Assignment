string task_1(string& s, vector<int>&v){

    map<int,char>mapData;

    int n=s.size();

    if (n == 0 || v.empty()) {
        return "";
    }
    // map create  vector value and char from string 
    for(int i=0;i<n;i++){ // n times insert O(long n) so O(nlogn)
        mapData[v[i]]=s[i];
    }

    string result;
    // acces  from map and add to result string 
    // n times map data access O(logn) overall worst case O(n)
    // space here O(n)
    for(int i=0;i<n;i++){
        result+=mapData[i];
    }

    return result;
}
// Time complexity O(nlogn+n) that O(nlogn)
// Space complexity O(n)