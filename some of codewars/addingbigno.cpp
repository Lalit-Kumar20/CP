#include<bits/stdc++.h>


using namespace std;

std::string add(const std::string& a, const std::string& b) {
std::string str1 = a;
std::string str2 = b;
if (str1.length() > str2.length()) 
        swap(str1, str2); 

    string str = ""; 

    int n1 = str1.length(), n2 = str2.length(); 
    int diff = n2 - n1; 
  
    int carry = 0; 
  
    for (int i=n1-1; i>=0; i--) 
    { 
        int sum = ((str1[i]-'0') + 
                   (str2[i+diff]-'0') + 
                   carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  

    for (int i=n2-n1-1; i>=0; i--) 
    { 
        int sum = ((str2[i]-'0')+carry); 
        str.push_back(sum%10 + '0'); 
        carry = sum/10; 
    } 
  
  
    if (carry) 
        str.push_back(carry+'0'); 
  

    reverse(str.begin(), str.end()); 
  
    return str; 
}
