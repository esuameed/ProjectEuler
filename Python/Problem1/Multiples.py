num = [] # Create an empty list
n = 1000
for i in range(1,n):
    if i%3==0 or i%5==0:
        num.append(i) # add elements in a list
print (sum(num)) # prints the sum of a list elements
#######
###SOLVING SAME PROBLEM USING BASIC LIST COMPREHENSION! IT'S AMAZING!!! 
divisors = sum([i for i in range(1,n) if i%3==0 or i%5==0])
print(divisors)

###  FASTER CALCULATION!!! ####
def sum_divided_by(num,n):
    '''
    (int,int) >> float
    Returns the sum of all multiples of n in the range (1,num) **NOT** including num.
    >>> sum_divided_by(10,2)
    30.0
    '''
    p = (num-1)//n # num-1 because the multiples not include less num
    return n*p*(1+p)*0.5
  
print(sum_divided_by(1000,3)+sum_divided_by(1000,5)- sum_divided_by(1000,15)) # We have to subtract the sum of multiples of 3 AND 5, 
                                                                              #in other words multiples of 15! 
