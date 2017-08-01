# introduction to functions
# below code make a decision about grade using given score

# a function to make decision for grade
def grades(score):
    if (score >= 85) and (score <= 100) :
        print ("your score is ", score, " and grade : AA")
    elif(score >=70) and (score <85):
        print ("your score is ", score, " and grade : BB")
    elif(score >=55) and (score <70):
        print ("your score is ", score, " and grade : CC")
    elif(score >=35) and (score <55):
        print ("your score is ", score, " and grade : DD")
    elif (score >= 0) and (score < 35):
        print("your score is ", score, " and grade : FF")
    else:
        print("wrong score value that must be in the range of 0 to 100")


print('#' * 5) # prints five times stark
score = int(input("enter your score: ")) # to get score
grades(score) # calls the grades function

# to get the control input q for quit and c for continue to get input
control = input(" press 'q' to quit or to press 'c' to continue: ")

while (control == 'c' or control == 'C' ): # lower or upper case for inpput both c and q
    score = int(input("enter your score: "))
    grades(score)
    control = input(" press 'q' to quit or to press 'c' to continue: ")
    if (control == 'q' or control == 'Q'):
        exit()
    else:
        print("invalid input")
