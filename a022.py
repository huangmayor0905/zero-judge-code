word = input()
tf = True

for i in range(0, len(word)):
    if (word[i] != word[len(word) - i - 1]):
        tf = False
        break
    else:
        tf = True

print("yes") if tf else print("no")
