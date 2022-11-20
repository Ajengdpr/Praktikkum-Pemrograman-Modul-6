baris, baris2 = map(int, input().split())
if baris != baris2 :
    print("Jumlah tidak sama")
else :
    nilai = list(map(int, input().split()))
    nilai2 = list(map(int, input().split()))
    matriks = []
    matriks2 = []
    a = 0
    matriks.append(nilai[a : a + baris])
    matriks2.append(nilai2[a : a + baris2])
    for i in range(0, baris) :
        print(matriks[0][i] * matriks2[0][i], end=' ')