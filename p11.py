def binario(n):
    if n == 0:
        return 0
    return n % 2 + 10 * binario(n / 2)

def main():
    x = int(input('Ingrese un numero: '))
    xBin = binario(x)
    print(f'El numero {x} en binario es {xBin}')
    
if __name__ == "__main__":
    main()