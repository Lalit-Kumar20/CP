def countOnes(left, right): 
    return count(right) - count(left-1)
def count(n):
    s = 0
    while n:
        p = n.bit_length()-1 
        p2 = 1<<p
        n -=  p2
        s += p*(p2>>1)+1 + n
        print (p,s,n)
    return s
