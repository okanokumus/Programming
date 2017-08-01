# to control the given TC ID is correct or wrong
# some rules are here to control this statement

# the purpose of this study is to exercise function, list and loops

def TCID(number):

# rule 1: ID must have 11 digits
    if (len(number) != 11):
            print ("given number must have 11 digits ")
            return False

# rule 2:  ID can not start with 0
    if (int(number[0]) == 0):
            print("given number must start with nonzero element")
            return False

# rule 3: only digits can be accepted as ID
    if not number.isdigit():
            print ("ID must contain only digit number")
            return False

# rule 4: 10. digit of the ID is calculated by
# (7 * (the sum of the 1. 3. 5. 7. ve 9. elements) - (the sum of the 2. 4. 6. ve 8. elements) ) % 10 == 10. element
    i = 0 # counter
    total1to9 = int(0) # sum of the 1. 3. 5. 7. ve 9. elements
    total2to8 = int(0) # sum of the 2. 4. 6. ve 8. elements
    while (i <= 8 ):
        if (i % 2 == 0): # EVEN
            total1to9 = total1to9 + int(number[i])
        if (i % 2 == 1): # ODD
            total2to8 = total2to8 + int(number[i])
        i += 1
    if ( int((7*total1to9 - total2to8) % 10) != int(number[9]) ):
        print("invalid input")
        return False

# rule 5: modes of the sum of all elements except last element gives us the last elemnt
    tot = 0
    for x in range (0,10):
        tot = int(tot) + int(number[x])
    if (int (tot % 10) != int(number[10])):
        print("invalid input")
        return False

    print ("valid TC ID")

number = input("enter your TC ID: " )

TCID(number)