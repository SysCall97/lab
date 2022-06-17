
# -*- coding: utf-8 -*-
"""
Created on Tue Jun  7 11:45:02 2022

@author: Pabon Shaha  
"""

print("Enter the number of input input Variable: ")
variable = int(input())

number_of_state = pow(2, variable)

x=[]

weight = 1

bias =-0.5

sum=0

def unit_step(sum):
    if sum>=0 :
        return 1
    else:
        return 0

for i in range(number_of_state):
    for j in range(variable):
        print("Enter the values of variabls:")
        variable_value = int(input())
       # x.append(variable_value)
        sum = sum +(variable_value*weight)
    '''    
    if variable>2:
        d= variable-2   
        bias = bias+ (-d)
    '''
        
    sum = sum+bias
    
    output = unit_step(sum)
    
    print("Output :",output)
    
    sum=0
        
    


