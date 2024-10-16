import matplotlib.pyplot as plt
from matplotlib_venn import venn3

U = set(range(-5, 11))
A = {-5, -4, -2, 0, 1, 2, 4, 5}
B = {-5, -3, -1, 0, 1, 3, 5}
C = {0, 1, 2, 3, 4, 6, 7}

# Problem 1
intersection_ABC = A.intersection(B).intersection(C)


complement_intersection = U - intersection_ABC

venn = venn3([A, B, C], set_labels=('A', 'B', 'C'))

venn.get_label_by_id('100').set_text(A - B - C)
venn.get_label_by_id('010').set_text(B - A - C)
venn.get_label_by_id('001').set_text(C - A - B)
venn.get_label_by_id('110').set_text(A.intersection(B) - C)
venn.get_label_by_id('101').set_text(A.intersection(C) - B)
venn.get_label_by_id('011').set_text(B.intersection(C) - A)
venn.get_label_by_id('111').set_text(intersection_ABC)

plt.title(f"Complement of Intersection \n(A ∩ B ∩ C)' = {sorted(complement_intersection)}")

plt.show()

# Problem 2
difference_AB = U - (A - B)
complement_C = U - C
union_ABC = difference_AB.union(complement_C)


venn.get_label_by_id('111').set_text(A - B - C)
venn.get_label_by_id('112').set_text(B - A - C)
venn.get_label_by_id('113').set_text(C - A - B)
venn.get_label_by_id('114').set_text(A.intersection(B) - C)
venn.get_label_by_id('115').set_text(A.intersection(C) - B)
venn.get_label_by_id('116').set_text(B.intersection(C) - A)
venn.get_label_by_id('117').set_text(A.intersection(B).intersection(C))

# Highlight the union of (A - B)' and C' by shading
plt.title(f"Union of (A - B)' and C' = {sorted(union_ABC)}")

# Display the Venn diagram
plt.show()