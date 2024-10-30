//
// Created by bykov on 14.10.2024.
//

#ifndef LIB_CPP_H

#define LIB_CPP_H

namespace labs {
    int _pow(int Num, int power) {
        int result = 1;
        if (power == 0) {
            return 1;
        }
        for (int i = 1; i <= power; i++) {
            result *= Num;
        }
        return result;
    }

    inline int GetNumDigit(int num, int rev_index) {
        return ( num / _pow(10, rev_index) ) % 10;
    }

    int DigitCount(int number) {
        int counter = 0;
        while (number != 0) {
            counter++;
            number /= 10;
        }
        return counter;
    }


    bool bIsPalindrome(int number) {
        bool PalindromeFlag = true;
        if (DigitCount(number) < 2) {
            return false;
        }
        for (int i = 0; i < DigitCount(number) / 2; i++) {
            if ( GetNumDigit(number, i) != GetNumDigit(number, DigitCount(number) - 1 - i) ) {
                PalindromeFlag = false;
            }
        }
        return PalindromeFlag;
    }

    int ProductDigit(int number) {
        int result = 1;
        for (int i = 0; i < DigitCount(number); i++) {
            result *= GetNumDigit(number, i);
        }
        return result;
    }

    int toDec(int num, int base) {
        int result = 0;
        for (int i = 0; num != 0; i++) {
            result += _pow(base, i) * (num % 10);
            num /= 10;
        }
        return result;
    }

    int fromDec(int num, int base) {
        int result = 0;

        for (int i = 0; num != 0; i++) {
            result = _pow(10, i) * (num % base) + result;
            num /= base;
        }
        return result;
    }
}

#endif //LIB_CPP_H
