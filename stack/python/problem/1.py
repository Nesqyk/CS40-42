from graphviz import Digraph

dot = Digraph()

# Domain and Range sets
domain = [0, 1, 2, 3]
range_set = [0, 1, 2, 3]

# Relation R
R = [(0,0), (0,1), (0,2), (0,3), (1,0), (1,1), (1,2), (2,0), (2,1), (3,0)]

# Add nodes for domain (left side)
for i, elem in enumerate(domain):
    dot.node(f'd_{elem}', str(elem), pos=f"-1,{i}!")

# Add nodes for range (right side)
for i, elem in enumerate(range_set):
    dot.node(f'r_{elem}', str(elem), pos=f"1,{i}!")

# Add edges based on the relation R
for pair in R:
    dot.edge(f'd_{pair[0]}', f'r_{pair[1]}')

# Set graph attributes
dot.attr(rankdir='LR')
dot.attr(splines='line')

# Render the diagram
dot.render('diagram/problem_2', view=True)
