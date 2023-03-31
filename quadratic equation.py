# PREPARING QUADRATIC EQUATION AND FINDING ITS ROOTS
# THE VALUSE OF A,B,C ARE THE COEFFICIENTS OF X^2,X,CONSTANT
# RESPECTIVELY.THE USER ALIGNS THE VALUES OF THEM.
print("ENTER THE COEFFICIENT OF X^2")
a = int(input())
print("ENTER THE COEFFICIENT OF X")
b = int(input())
print("ENTER THE CONSTANT")
c = int(input())

# THE QUADRIC EQUYATION WILL BE FORMED
print("THE QUADRATIC EQUATION IS " + str(a) + "X^2+" + str(b) + "X+" + str(c))

# THYE SYSTEM WILL DISPLAYS THE ROOTS OF THE EQUATION
root1 = (-b + (b ** 2 - 4 * a * c) ** (float(1) / 2)) / 2 * a
print("THE ROOT1 " + str(root1))
root2 = (-b - (b ** 2 - 4 * a * c) ** (float(1) / 2)) / 2 * a
print("THE ROOT2 " + str(root2))

