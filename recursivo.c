int verificar_recursivo(int n, int i) {
    if (i * i > n) return 1;          // Condição-base 1
    if (n % i == 0) return 0;         // Condição-base 2
    return verificar_recursivo(n, i + 1); // Chamada recursiva
}