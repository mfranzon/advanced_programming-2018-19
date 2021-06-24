__author__="Marco Franzon"
__date__="18-05-21"

s = "Given a list of word, construct a new ordered list from the former where words are sorted by their reversed spelling using a lambda function."

def last_letter(word):
    return word[-1]

reverses = lambda x: sorted(x.split(" "), key=last_letter)

print(reverses(s))
