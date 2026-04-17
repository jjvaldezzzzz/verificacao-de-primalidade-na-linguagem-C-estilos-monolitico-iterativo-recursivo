int verificar_recursivo(int n, int i) {
    if (i * i > n) return 1;          // condição-base 1
    if (n % i == 0) return 0;         // condição-base 2
    return verificar_recursivo(n, i + 1); // chamada recursiva
}
