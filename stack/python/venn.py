import matplotlib.pyplot as plt
from matplotlib_venn import venn3
from itertools import product

# Given
U = set(range(-5, 11))
A = {-5, -4, -2, 0, 1, 2, 4, 5}
B = {-5, -3, -1, 0, 1, 3, 5}
C = {0, 1, 2, 3, 4, 6, 7}

# Problem 1
intersection_ABC = A.intersection(B).intersection(C)

complement_intersection = U - intersection_ABC

print(sorted(complement_intersection))

# Problem 2
difference_AB = U - (A - B)
complement_C = U - C
union_ABC = difference_AB.union(complement_C)

print(sorted(union_ABC))

# Problem 3
union_ABC = A.union(B).union(C) - U

print(None if not union_ABC else union_ABC)

# Problem 4
intersection_BC = B.intersection(C)
intersection_AC = A.intersection(C)
intersection_BCAC = intersection_BC.intersection(intersection_AC)
print(intersection_BCAC)

# Problem 5

cartesian_product = list(product(intersection_ABC, intersection_ABC))
print(cartesian_product)






