# sequence is the most basic data structure in the Python
# for more info go : https://www.tutorialspoint.com/python/python_lists.htm
# first index is 0 and second index is 1 ...

# creating a list:
mystringlist = ['first', 'second', 5 ,100, "fifth"]
mynumberlist = [40, -7 , 0 ,89]

# directly access an element of list using index of element
print ("first thing in the mystringlist is: ", mystringlist[0])
print ("second thing in the mystringlist is: ", mystringlist[1])

# to get all element using loop
for x in range(0,4):
    print ("inside the list: ", mystringlist[x])

# or
print ("second thing in the mystringlist is: ", mystringlist[1 : 4])

# updating list
mystringlist[1] = mynumberlist[1]
# deleting
del mystringlist[0]
# length
size = len (mystringlist) # to give the number of the element

print ("after operation", mystringlist)
print ("size of the element : ", size)