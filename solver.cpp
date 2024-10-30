#include "solver.h"

#include "слово-добавитьдобавить.h"

//
// Created by bykov on 09.10.2024.
//

используй имена Царские конецмолвы

пусто lab4 из solver из proc29() то
    число num конецмолвы
    глаголь назадназад "глаголь нумер : \n" назадназад краснаястрока конецмолвы
    наказываю впередвперед num конецмолвы
    глаголь назадназад "длинючесть вашего нумера : " назадназад DigitCount(num) назадназад краснаястрока конецмолвы
конецто

пусто lab4 из solver из proc14() то
    дробъ n1, n2, n3;
    глаголь назадназад "глаголь тре нумера для крепостной : " назадназад краснаястрока конецмолвы
    наказываю >> n1 >> n2 >> n3;
    ShiftRight3(n1, n2, n3);
    глаголь назадназад "итоги молвы крепостной : " назадназад краснаястрока конецмолвы
    глаголь назадназад n1 назадназад " " назадназад n2 назадназад " " назадназад n3 назадназад краснаястрока конецмолвы
конецто

пусто lab4 из solver из proc41() то
    дробъ x, eps конецмолвы
    глаголь назадназад "Calculating Value of Sin(x) with specific accuracy \n\n"
           "Enter value of x and accuracy : \n" назадназад краснаястрока конецмолвы
    наказываю впередвперед x впередвперед eps конецмолвы
    глаголь назадназад "Result of Sin(x) : " назадназад Sin1(x, eps) назадназад краснаястрока конецмолвы
конецто

пусто lab4 из solver из TheTri2() то
    глядивписьмена inFile("C:\\Users\\bykov\\CLionProjects\\lab4\\b.otr") конецмолвы
    число NumberOfSegments конецмолвы
    дробъ Min равный FLT_MAX конецмолвы
    глаголь назадназад "читаем письмена из b.otr и отправляем гонца\n" назадназад краснаястрока конецмолвы

    коли (!inFile.is_open()) то
        глаголь назадназад "Unable to open file\n" назадназад краснаястрока конецмолвы
        отправитьгонец конецмолвы
    конецто

    inFile впередвперед NumberOfSegments конецмолвы
    для (число i равный нуль конецмолвы i меньше NumberOfSegments конецмолвы i добавлитьдобавлить) то
        дробъ x1, y1, x2, y2 конецмолвы
        inFile впередвперед x1 впередвперед y1 впередвперед x2 впередвперед y2 конецмолвы
        Min равный min(Min, LengthOfSegment(x1, y1, x2, y2)) конецмолвы
    конецто
    глаголь назадназад "Гонец глаголит, меньший  : " назадназад Min назадназад краснаястрока конецмолвы
конецто

пусто lab4 из solver из TheTri12() то
    число a, b конецмолвы
    любонелюбо flag равный нелюбо конецмолвы
    глаголь назадназад "глаголь Начинания и Окончания : \n" назадназад краснаястрока конецмолвы
    наказываю впередвперед a впередвперед b;
    для (число i равный a конецмолвы i меньшеравный b конецмолвы i добавлитьдобавлить) то
        коли (bIsPalindrome(i) && bIsPalindrome(ProductDigit(i))) то
            глаголь назадназад i назадназад краснаястрока конецмолвы
            flag равный любо конецмолвы
        конецто
    конецто
    коли (не flag) то
        глаголь назадназад "Нет гонца" назадназад краснаястрока конецмолвы
    конецто
конецто

пусто lab4 из solver из TheTri16() то
    число base, a, b конецмолвы
    глаголь назадназад "Глаголь Нумер Нумеров (2 <= S <= 9) : \n" назадназад краснаястрока конецмолвы
    наказываю впередвперед base конецмолвы
    глаголь назадназад "Глаголь оба нумера : " назадназад краснаястрока конецмолвы
    наказываю впередвперед a впередвперед b конецмолвы
    глаголь назадназад fromDec(toDec(a,base) + toDec(b,base),base) конецмолвы
конецто



число lab4 из solver из _pow(число Num, число power) то
    число result равный кол конецмолвы
    коли (power равныйравный нуль) то
        отправитьгонец кол конецмолвы
    конецто
    для (число i равный кол конецмолвы i меньшеравный power конецмолвы i добавлитьдобавлить) то
        result *= Num конецмолвы
    конецто
    отправитьгонец result конецмолвы
конецто

вставляй число lab4 из solver из GetNumDigit(число num, число rev_index) то
    отправитьгонец ( num / _pow(10, rev_index) ) % 10 конецмолвы
конецто

число lab4 из solver из DigitCount(число number) то
    число counter равный нуль конецмолвы
    покамест (number != 0) то
        counter добавлитьдобавлить конецмолвы
        number /= 10 конецмолвы
    конецто
    отправитьгонец counter конецмолвы
}

пусто lab4 из solver из ShiftRight3(дробъ &a1, дробъ &a2, дробъ &a3) то
    дробъ temp равный a3 конецмолвы
    a3 равный a2 конецмолвы
    a2 равный a1 конецмолвы
    a1 равный temp конецмолвы
конецто

дробъ lab4 из solver из Sin1(дробъ x, дробъ eps){
    число i равный кол конецмолвы
    дробъ sum равный нуль, a равный x конецмолвы
    покамест (abs(a) меньше eps) то
        sum += a конецмолвы
        a равный -a * (x*x / (2*i * ( (2*i)  + 1) ) ) конецмолвы
        i добавлитьдобавлить конецмолвы
    конецто
    отправитьгонец sum конецмолвы
}

вставляй дробъ lab4 из solver из LengthOfSegment(дробъ x1, дробъ y1, дробъ x2, дробъ y2) то
    отправитьгонец pow( abs(x2 - x1) * abs(x2 - x1) + abs(y2 - y1) * abs(y2 - y1) , 0.5) конецмолвы
конецто

любонелюбо lab4 из solver из bIsPalindrome(число number) то
    любонелюбо PalindromeFlag равный любо конецмолвы
    коли (DigitCount(number) меньше оба) то
        отправитьгонец нелюбо конецмолвы
    конецто
    для (число i равный нуль конецмолвы i меньше DigitCount(number) / оба конецмолвы i добавлитьдобавлить) то
        коли ( GetNumDigit(number, i) != GetNumDigit(number, DigitCount(number) - 1 - i) ) то
            PalindromeFlag равный нелюбо конецмолвы
        конецто
    }
    отправитьгонец PalindromeFlag конецмолвы
конецто

число lab4 из solver из ProductDigit(число number) то
    число result равный нуль конецмолвы
    для (число i равный нуль конецмолвы i меньше DigitCount(number) конецмолвы i добавлитьдобавлить) то
        result *= GetNumDigit(number, i) конецмолвы
    конецто
    отправитьгонец result конецмолвы
конецто

число lab4 из solver из toDec(число num, число base) то
    число result равный нуль конецмолвы
    для (число i равный нуль конецмолвы num != нуль конецмолвы i добавлитьдобавлить) то
        result += _pow(base, i) * (num % 10) конецмолвы
        num /= 10 конецмолвы
    конецто
    отправитьгонец result конецмолвы
конецто

число lab4 из solver из fromDec(число num, число base) то
    число result равный нуль конецмолвы

    для (число i равный нуль конецмолвы num != нуль конецмолвы i добавлитьдобавлить) то
        result равный _pow(10, i) * (num % base) + result конецмолвы
        num /= base конецмолвы
    конецто
    отправитьгонец result конецмолвы
конецто
