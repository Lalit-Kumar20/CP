using namespace std;
#define MAX 500

int multiply(int x, int res[], int res_size);

string factorial(int factorial){
 int res[MAX];
int n = factorial;
    res[0] = 1;
    int res_size = 1;

    for (int x=2; x<=n; x++)
    {
        res_size = multiply(x, res, res_size);
    }

  
    string s;
    for (int i=res_size-1; i>=0; i--)
        s.push_back('0'+res[i]);
        
   return s;
}
int multiply(int x, int res[], int res_size)
{
    int carry = 0;

    for (int i=0; i<res_size; i++)
    {
        int prod = res[i] * x + carry;
        res[i] = prod % 10;  
        carry  = prod/10;    
    }

    while (carry)
    {
        res[res_size] = carry%10;
        carry = carry/10;
        res_size++;
    }
    return res_size;
}
