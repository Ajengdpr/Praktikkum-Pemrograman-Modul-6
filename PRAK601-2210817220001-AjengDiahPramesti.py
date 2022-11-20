k, b = map(int, input().split())
angka = list(map(int, input().split()))
matriks = []
a = 0
for i in range (0, k):
    matriks.append(angka[a : a + b])
    a = a + b
for i in range (0, k):
    for j in range (0, b):
        print(matriks[i][j], end=' ')
    print()