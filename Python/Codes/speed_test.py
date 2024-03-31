from time import time


def speed_time(func) :
    
    def wrapper () :
        start = time()
        
        func()
        
        end = time()
        
        print(f"Time duration is : {end - start}")
        
    return wrapper
@speed_time 
def Loop():
    
    for number in range(1,10000) :
        print(number)

Loop()

