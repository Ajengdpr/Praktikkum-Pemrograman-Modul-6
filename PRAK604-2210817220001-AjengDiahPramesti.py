kode1=str(input())
kode2 =str(input())
kata1 = len(kode1) 
kata2 = len(kode2)
a= 0 
b = 0

if kata1 == kata2 :
    for i in range (0, kata1):
        if kode1 [i]== kode2 [i]:
            if kode1 [i]==' ':
                print(" ", end=' ')
            else: 
                print("*", end=' '); a+=1
        else:
            print("#", end=' '); b+=1    
    print("\n*= ", a)
    print("#= ", b)
    if a >= b:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")
else:
    print("Panjang kalimat berbeda, pesan palsu")     