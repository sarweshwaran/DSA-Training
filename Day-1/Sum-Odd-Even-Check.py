num1 = int(input("Enter Number1 :"))
num2 = int(input("Enter Number2 :"))

sum = num1+num2

if sum <= 0:
        print("Given Number is Either Negative or Zero")
elif sum%2 == 0:
        print(sum, " is Even")
else:
        print(sum, " is Odd")
