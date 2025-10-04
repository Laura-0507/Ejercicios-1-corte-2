class Solution {
public:
    bool isPalindrome(int x) {
        // Caso especial: números negativos no son palíndromos
        if (x < 0) return false;

        long reversed = 0;
        int original = x;

        // Construir el número al revés
        while (x != 0) {
            int digit = x % 10;
            reversed = reversed * 10 + digit;
            x /= 10;
        }

        // Un número es palíndromo si es igual al reverso
        return original == reversed;
    }
};
