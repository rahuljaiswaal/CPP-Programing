import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
file = open('D:\C++ Programing\DAALab\file.txt','r') 
file1 = file.read().split() 
l_ip =[] 
l_ip = file1[::4] 
l_time1 = file1[1::4] 
l_time2 = file1[2::4] 
l_time3 = file1[3::4] 
for i in range(0,len(l_ip)): 
 l_ip[i] = int(l_ip[i]) 
for i in range(0,len(l_time1)): 
 l_time1[i] = float(l_time1[i]) 
 l_time2[i] = float(l_time2[i]) 
 l_time3[i] = float(l_time3[i]) 
print("No. of elements are : ") 
print(l_ip) 
print() 
print("Their Time complexity are : ") 
print(l_time1) 
print(l_time2) 
print(l_time3) 
print("Graph of time complexity of Insertion, Quick, Merge sort with different input ") 
time1 = np.array(l_time1) 
time2 = np.array(l_time2) 
time3 = np.array(l_time3) 
number =np.array(l_ip) 
# Initialise the subplot function using number of rows and columns 
figure, axis = plt.subplots(2, 2) 
# For Insertion Sort 
axis[0, 0].plot(time1, number) 
axis[0, 0].set_ylabel("Inputs") 
print() 
# For Quick Sort 
axis[0, 1].plot(time2, number) 
 
# For Merge Sort 
axis[1, 0].plot(time3, number) 
axis[1, 0].set_xlabel("time COmplexty") 
plt.show()


import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
file = open('D:\C++ Programing\DAALab\file.txt','r')
file1 = file.read().split()
l_ip =[]
l_ip = file1[::4]
l_time1 = file1[1::4]
l_time2 = file1[2::4]
l_time3 = file1[3::4]
for i in range(0,len(l_ip)):
    l_ip[i] = int(l_ip[i])
for i in range(0,len(l_time1)):
    l_time1[i] = float(l_time1[i])
    l_time2[i] = float(l_time2[i])
    l_time3[i] = float(l_time3[i])
print("No. of elements are : ")
print(l_ip)
print()
print("Their Time complexity are :  ")
print(l_time1)
print(l_time2)
print(l_time3)
print("Graph of time complexity of Insertion, Quick, Merge sort with different input ") 
time1 = np.array(l_time1)
time2 = np.array(l_time2)
time3 = np.array(l_time3)
number =np.array(l_ip)

# Initialise the subplot function using number of rows and columns 
figure, axis = plt.subplots(2, 2) 
# For Insertion Sort  
axis[0, 0].plot(time1, number) 
axis[0, 0].set_ylabel("Inputs")

print()
# For Quick Sort
axis[0, 1].plot(time2, number)  
  
# For Merge Sort 
axis[1, 0].plot(time3, number) 
axis[1, 0].set_xlabel("time COmplexty")

plt.show()