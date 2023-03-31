print("Welcome to SBI ATM")

# User need to enter the name so that atm will detect the user bank account details
print("PLEASE ENTER YOUR NAME")
nAME = input()

# User should enter the respective account number linked with the name mentioned above
print("PLEASE ENTER YOUR ACCOUNT NUMBER")
acc = int(input())

# The user need to enter his ATM PIN to verift wheather the person doing transaction is the  account owner or not
print("ENTER YOUR PRIVATE PIN")
pIN = int(input())

# The user should know the bank balance of his account and he need to enter the bank balance, after he enters the bank balance the atm proceeds to further steps
print("PLEASE ENTER YOUR BANK BALANCE")
bALANCE = float(input())
if bALANCE < 500:
    print("YOU CAN'T WITHDRAW MONEY DUE TO LESS BANK BALANCE ")

# If the bank balance is less than 500 then the user is unable to withdraw money. Because there should be minimum balance of 500 in the bank account
# The user need to enter his ATM PIN once again,that should be same as the pin entered before
print("PLEASE ENTER YOUR SECRET PIN")
sECRET = int(input())
if pIN == sECRET:
    pass
else:
    print("*INVALID YOUR PRIVATE PIN IS WRONG")

# If the pin entered doest match then the ATM dont move to further steps
# The user need to enter the amout that he need to withdraw
print("PLEASE ENTER THE AMOUNT TO BE WITHDRAWN")
aMOUNT = int(input())
if aMOUNT < bALANCE:
    pass
else:
    print("SORRY YOUR BANK BALNCE IS LESS THAN THE AMONT TO BE WITHDRAWN")

# The amount entered should be less than the bank balance
# After transaction the ATM displays the present bank balance
present = bALANCE - aMOUNT
print("YOUR PRESENT BANK BALANCE IS  " + str(present))
print("YOUR TRANSACTION IS SUCCESSFUL")
print("VISIT AGAIN")

