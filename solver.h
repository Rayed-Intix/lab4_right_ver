#include <iostream>
#include <fstream>
#include <cmath>
#include <float.h>
#include <algorithm>
#include <vector>

//
// Created by bykov on 09.10.2024.
//
namespace lab4 {
    class solver {
        public:
            void proc29();
            void proc14();
            void proc41();
            void TheTri2();
            void TheTri12();
            void TheTri16();
        private:
            int DigitCount(int number); //proc29
            void ShiftRight3(float&, float&, float&); //proc14
            float Sin1(float x, float eps); //proc41

            inline float LengthOfSegment(float x1, float y1, float x2, float y2);

            bool bIsPalindrome(int number);
            int ProductDigit(int number);

            int toDec(int num, int base);
            int fromDec(int num, int base);
        protected:
            int _pow(int num, int pow);
            inline int GetNumDigit(int num, int rev_index);
    };
}
