from graphviz import Digraph

dot = Digraph()

domain = [-3, -2, -1, 0, 1, 2, 3]
range_set = [-3, -2, -1, 0, 1, 2, 3]
R = [(-3, -3), (-3, 0), (-3, 3), (-2, -2), (-2, 1), (-1, -1), (-1, 2),
     (0, -3), (0, 0), (0, 3), (1, -2), (1, 1), (2, -1), (2, 2),
     (3, -3), (3, 0), (3, 3)]

for i, elem in enumerate(domain):
    dot.node(f'd_{elem}', str(elem), pos=f"-1,{i}!")

for i, elem in enumerate(range_set):
    dot.node(f'r_{elem}', str(elem), pos=f"1,{i}!")

for pair in R:
    dot.edge(f'd_{pair[0]}', f'r_{pair[1]}')

dot.attr(rankdir='LR')
dot.attr(splines='line')

dot.render('diagram/problem_1', view=True)

domain_2 = []
range_set_2 = []
R_2 = []
