const int mod = 1e9 + 7;  
const int base = 31;      

// funciton substring calculate hashvalue
long long calculateHash(string& s, int length) {
    long long hashVal = 0;  
    
    
    for (int i = 0; i < length; i++) {  // O(length)
        hashVal = (hashVal * base + s[i]) % mod;  
    }
    
    return hashVal;  
}


int task_2(string& haystack, string& needle) {
    int n = haystack.size();  
    int m = needle.size(); 
    
    //edge case test
    if(m>n) return -1;
    if(m==0) return 0;   

    // here calculate hash value of needle and first substring of haystack.
    long long needlehash = calculateHash(needle, m);    // O(m)
    long long haystackhash = calculateHash(haystack, m);  // O(m)

    // jsut check first index 
    if (haystackhash == needlehash && haystack.substr(0, m) == needle) { 
        return 0;  
    }

    long long basepower = 1;  
    
    
    for (int i = 1; i < m; i++) {  // O(m)
        basepower = (basepower * base) % mod;  
    }

    // (n-m) times using sliding window to check subsequenc of substring
    // 
    for (int i = 1; i <= n - m; i++) {  // O(n-m)
        // roling hash technique for update hashvalue
        haystackhash = (haystackhash - haystack[i - 1] * basepower % mod + mod) % mod;  
        haystackhash = (haystackhash * base + haystack[i + m - 1]) % mod;  

        // here if hash match then return index
        if (haystackhash == needlehash && haystack.substr(i, m) == needle) {  // O(m)
            return i;  
        }
    }

    return -1;  
}

// Time complexity O((n-m)*m) that O(n*m)
// Space complexity O(1)
