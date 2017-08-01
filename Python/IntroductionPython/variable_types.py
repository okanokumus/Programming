# https://www.tutorialspoint.com/python/python_variable_types.htm

# Python variables do not need explicit declaration to reserve memory space.
# The declaration happens automatically when you assign a value to a variable.
# The equal sign (=) is used to assign values to variables.
number = 5
weight = 58.9
name = 'python'

print(weight)
print(number)
print(name)

# Multiple assignment
a = b = c = number
print(a * b * c)

string = 'Hello World !!!'
print (string[1:7])
print (string[5:])  # Prints string starting from 3rd character
print (string * 2 )     # Prints string two times
print (string + "python")

# Python Lists
list = [ 'abcd', 786 , 2.23, 'john', 70.2 ]
tinylist = [123, 'john']

print (list)          # Prints complete list
print (list[1:3])     # Prints elements starting from 2nd till 3rd
print (list[2:])      # Prints elements starting from 3rd element
print (tinylist * 2)  # Prints list two times
print (list + tinylist) # Prints concatenated lists

# Python Tuples

# The main differences between lists and tuples are: Lists are enclosed in brackets ( [ ] ) and
# their elements and size can be changed, while tuples are enclosed in parentheses ( ( ) ) and
# cannot be updated. Tuples can be thought of as read-only lists.
tuple = ('abcd', 786, 2.23, 'john', 70.2)
tinytuple = (123, 'john')

print(tuple)           # Prints complete list
print(tuple[1:3])      # Prints elements starting from 2nd till 3rd
print(tuple[2:])       # Prints elements starting from 3rd element
print(tinytuple * 2)   # Prints list two times
print(tuple + tinytuple)  # Prints concatenated lists