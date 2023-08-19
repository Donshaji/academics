import random

def randomArray(n):
    array=[]
    rNum = random.randint(1, n)
    # print("debug1 "+str(rNum))
    for i in range(1,n+1):
        if(i!=rNum):
            array.append(i)
    print(array)
    return array
            
def findMiss(array):
    sum=0
    n=len(array)+1
    # print("\ndebug3 "+str(n))
    Rsum=n*(n+1)/2
    # print("\ndebug3 "+str(Rsum))
    for i in array:
        sum=i+sum
    return Rsum-sum
    
# print(str(random.randint(0, 6))+"\n")
# print(randomArray(4))

print("\n")

print("missing No: "+str(findMiss(randomArray(4))))
