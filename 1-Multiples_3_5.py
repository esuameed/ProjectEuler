#If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6
#and 9. The sum of these multiples is 23.
#Find the sum of all the multiples of 3 or 5 below 1000.

soma=0
for i in range(1,1000):
    if i%3==0 or i%5==0:
        soma=soma+i
print(soma)    


def sum_divided_by(num,n):
    '''
    (int,int) >> float
    Returns the sum of all multiples of n in the range (1,num) **NOT** including num.
    >>> sum_divided_by(10,2)
    30.0
    '''
    p = (num - 1)//n
    return n*p*(1+p)*0.5
    


print("The sum of all multiples of 3 OR 5 below 1000 is {}?".format(sum_divided_by(1000,5)+sum_divided_by(1000,3)\
    -sum_divided_by(1000,15)))

# Let's find the sum of the all multiples of 3 and 5 below 1000:


print("The sum of all multiples of 3 AND 5 below 1000 is {}?".format(sum_divided_by(1000,15)))