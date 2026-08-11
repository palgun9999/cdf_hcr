# cook your dish here
def fact(n):
    if n==0 or n==1:
        return 1;
    return n*fact(n-1);
t=int(input())
while t>0:
    n=int(input())
    print(fact(n))
    t-=1