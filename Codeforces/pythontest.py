import time
start_time=time.time()
sum=0
for x in range(1,100000000):
    sum+=x
print(sum)
print("completed running")
print("----Time taken to complete --------")
print(time.time()-start_time)