# Imperative Paradigm code to calculate the sum of 10 numbers
s= 0
for i in range(10):
    s += i
print("The sum is(imperative):", s)

# Declarative Paradigm code to calculate sum of 10 numbers
l = [x for x in range(1, 10)]
s=sum(l)
print("The sum is(declarative):",s)