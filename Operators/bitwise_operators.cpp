#include <iostream>

int main() {
    int a = 5;  // Socho, yeh hai ek group of lights: 00000101
    int b = 3;  // Yeh hai doosra group of lights: 00000011

    // AND (&): Dono lights on honi chahiye tabhi result on hoga
    int result_and = a & b;
    std::cout << "a AND b: " << result_and << std::endl;

    // OR (|): Agar ek bhi light on hai, toh result on hoga
    int result_or = a | b;
    std::cout << "a OR b: " << result_or << std::endl;

    // XOR (^): Lights alag honi chahiye tabhi result on hoga
    int result_xor = a ^ b;
    std::cout << "a XOR b: " << result_xor << std::endl;

    // NOT (~): Sab lights ko flip kar do
    int result_not_a = ~a;
    std::cout << "NOT a: " << result_not_a << std::endl;

    // Left shift (<<): Saari lights ko ek position left shift karo
    int result_left_shift = a << 1;
    std::cout << "a shifted left: " << result_left_shift << std::endl;

    // Right shift (>>): Saari lights ko ek position right shift karo
    int result_right_shift = b >> 1;
    std::cout << "b shifted right: " << result_right_shift << std::endl;

    return 0;
}
