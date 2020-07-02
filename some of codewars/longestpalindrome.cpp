#include<iostream>
#include<string>

using namespace std;

string longest_palindrome(string input){

  // Have Fun! :)
  string s=input;
     int start=0, best_len = 0;
        string best_s = "";
        int n = s.length();
        for(int mid = 0; mid < n; mid++) {
            for(int x = 0; mid - x >= 0 && mid + x < n; x++) {
                if(s[mid-x] != s[mid+x]) {
                    break;
                }
                int len = 2 * x + 1;
                if(len > best_len) {
                    best_len = len;
                    start=mid-x;
                    //best_s = s.substr(mid - x, len);
                }
            }
        }
        for(int mid = 0; mid < n ; mid++) {
            for(int x = 1; mid - x + 1 >= 0 && mid + x < n; x++) {
                if(s[mid-x+1] != s[mid+x]) {
                    break;
                }
                int len = 2 * x;
                if(len > best_len) {
                    best_len = len;
                    start=mid-x+1;
                    //best_s = s.substr(mid - x + 1, len);
                }
            }
        }
        return s.substr(start, best_len);

}
