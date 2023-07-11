n = int(input("Enter Value of N : "))

for i in range(n):
    number = int(input("Enter A Number: "))
    if number <= 0:
        print("Given Number is Either Negative or Zero")
    elif number%2 == 0:
        print(number, " is Even")
    else:
        print(number, " is Odd")
