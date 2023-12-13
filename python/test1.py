import numpy as np

# a=np.array([0,1])
# b=np.array([1,0])
# result = np.dot(a,b) # 0
# print(result)


# X=np.array([[1,0,1],[2,2,2]]) 
# out=X[0,1:3]
# print(out)
# # array([0, 1])

# X=np.array([[1,0],[0,1]])
# Y=np.array([[2,2],[2,2]])
# Z=np.dot(X,Y)
# print(Z)

import os

# Get the current directory
current_dir = os.getcwd()

# Create the full file path
file_path = os.path.join(current_dir, r"C:\Users\hacke\OneDrive\Desktop\OOP-CPP-Specialization-Projects\python\Example1.txt")

with open(file_path, "r") as File1:
    file_stuff = File1.readline()
    print(file_stuff)