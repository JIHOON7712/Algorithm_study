num = int(input())

words = []

for i in range(num):
    words.append(input())

words=list(set(words))
words.sort()
words.sort(key=len)

for i in words:
    print(i)