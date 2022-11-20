a = int(input())
MatA = []
print("Matriks A")
for  b in range (a):
    c = list(map(int, input().split()))
    MatA.append(c)
MatB= []
print("Matriks B")
for b in range (a):
    c = list(map(int, input().split()))
    MatB.append(c)
MatAB= []
print("\nMatriks AXB")
for b in range (a):
    MatAB.append([])
    for d in range (a):
        x = 0
        for c in range (a):
            x = x + MatA[b][c] * MatB[c][d]
        MatAB[b].append(x)
for baris in MatAB:
    for c in baris:
        print(c, end=' ')
    print()