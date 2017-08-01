# binary to decimal and vice versa

def choice():
    ch = input("press 1 : binary to decimal\n"
               "press 2 : decimal to binary\n"
               ": ")

    if ch == '1':
        print("binary to decimal converion")
        number = int(input("enter your number that you want to convert decimal: "))

        if number >= 0:
            binary_to_decimal(number)
        else:
            print("given number must be greater than 0")

    elif ch == '2':
        print("decimal to binary converion")
        number = int(input("enter your number that you want to convert binary: "))
        if number >= 0:
            decimal_to_binary(number)
        else:
            print("given number must be greater than 0")

    else:
        print("wrong choice")
        exit()

# decimal to binary conversion
def decimal_to_binary(number):
    digits = []
    binaryNumber = "" # blank
    if number == 0:
        binaryNumber = 0
    else:
        while (number > 0):
            digits.append(number % 2)
            number = int(number / 2)
        digits.reverse()
        
    for x in digits:
        binaryNumber += str(x)
    print("[MS ... LS]: ",binaryNumber)


# binary to decimal conversion
def binary_to_decimal(number):
    decimals = [] # store the each elements in given num
    decimalNumber = 0

    while (number > 0):
        decimals.append(number % 10)
        number = int(number / 10)
    i = 0
    for x in decimals:
        # in the mean time to control given number is binary or not
        if (x == 0) or (x == 1):
            decimalNumber += x * (2 ** i)
            i += 1
        else:
            print("only zero or one can be accepted as in binary values")
            exit()

    print("[MS ... LS]: ", decimalNumber)

# main function
def main():
    choice()

if __name__ == "__main__":
    main()