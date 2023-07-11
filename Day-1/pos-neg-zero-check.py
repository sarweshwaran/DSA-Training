n = int(input("Enter Value of N : "))

for i in range(n):
    number = int(input("Enter A Number: "))
    if number>0:
        print(number, " is Positive")
    elif number< 0:
        print(number, " is Negative")
    else:
        print("Given Number is Zero")

