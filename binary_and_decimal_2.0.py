def bi_to_dec(b):
    n = []
    c = len(b) - 1  # c is exponent
    for i in range(0, len(b)):
        d = int(b[i]) * 2 ** c
        n.append(d)
        c -= 1
    dec = sum(n)  # sum list of n
    return dec

while True:

    while True:
        print("\nChoose one of the conversions below:")
        choose = int(input("[1] Binary to decimal\n[2] Decimal to Binary\nChoose: "))
        if (choose == 1):
            be = input("Enter the number in binary: ")
            d = bi_to_dec(be)
            print(f"{be} is in decimal {d}")
            break
        if (choose == 2):
            d = int(input("Enter the number in decimal: "))
            bi = bin(d)
            print(f"\n{d} is in binary {bi[2:]}")
            break
        elif (choose != "1") or (choose != "2"):
            print("\nYou didn't choose which option you want, try again")

    while True:
        e = input("Do you wish to continue? [Y/N]").strip().upper()
        if (e == "N") or (e == "Y"):
            break
        elif (e != "Y") or (e != "N"):
            print("\nyou did not say [S/N], enter one of the options\n")
    if (e == "N"):
        break

print("----FIM----")


