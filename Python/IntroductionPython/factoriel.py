# factoriel computation of a given positive number

def take():
    number = int(input("enter your positive number: "))
    if number < 0:
        print("given number must be positive!!!")
        exit()
    else:
        print("factoriel of this number is",factoriel(number)) # call factoriel and print result


def factoriel(number):
    if number == 0:
        fac = 1
        return fac
    else:
        i = number
        while i > 1:
            i -= 1
            number = number * i

    return number

# main function
def main():
    take()

# call main function
if __name__ == "__main__":
    main()