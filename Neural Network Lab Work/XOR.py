# -*- coding: utf-8 -*-
"""
Created on Mon Jun 13 08:03:26 2022

@author: Pabon Shaha
"""
print()
print("Enter the number of input input Variable: ")
variable = int(input())

number_of_state = pow(2, variable)

x=[]

weight = 1

bias =0

sum=0

def binary_genrator(sum):
    if sum%2 == 0 :
        return 0
    else:
        return 1

for i in range(number_of_state):
    for j in range(variable):
        print("Enter the values of variabls:")
        variable_value = int(input())
       # x.append(variable_value)
        sum = sum +(variable_value*weight)
        
        
    sum = sum+bias
    
    output = binary_genrator(sum)
    
    print("Output :",output)
    
    sum=0