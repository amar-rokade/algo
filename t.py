def b(x):
    num=len(x)
    for i in range(num):
        for j in range(0,num-i-1):
            if x[j]>x[j+1]:
                x[j],x[j+1]=x[j+1],x[j]
        
        print(i," ",x)
b([4,10,2,7,1,8])