# python loops like for, while and if will be studied

# for loop
for x in range(0,2):
    print("for loop: ")
    print("x : %d  " % x)

# nested for loop
for x in range(0,2):
    for y in range(0,3):
        print("nested for loop: ")
        print("x : %d  " % x)
        print("y : %d  " % y)
        print("x+y: %d \n " % (x+y))

# while loop
k = 1
while (k<10):
    print("while loop: ")
    print ("%d" % k)
    k += 1


print ("if loop: ")
l = int(input ("enter a number that between 0 to 10 : "))
if l == 5:
    print ("l" ,"is ", l," and equals to 5: ")
elif l<5:
    print ("l" ,"is ", l," and lower than 5: ")
else:
    print("l", "is ", l, " and greater than 5: ")

