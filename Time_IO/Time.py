import time

def haveIO():
    sum=0
    for count in range(10000000):
        sum+=count
        print(sum)

def nohaveIO():
    sum=0
    for count in range(10000000):
        sum+=count
        sum+=1
        sum-=1

time1_haveIO=time.time()
haveIO()
time2_haveIO=time.time()
time1_nohaveIO=time.time()
nohaveIO()
time2_nohaveIO=time.time()
print(f'IO: {time2_haveIO-time1_haveIO}')
print(f'NoIO: {time2_nohaveIO-time1_nohaveIO}')
