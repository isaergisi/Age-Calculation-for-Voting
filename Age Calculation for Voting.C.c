#include <stdio.h>
#include <stdlib.h>

int main()
{

// C Dilinde Oy Kullanmak Icin Kalan Gun Sayisi Hesap Makinesi
// Voting Days Remaining Calculator in C Language

int CurrentDate = (12 * 2024 + 2) * 30 + 23;
int day, month, year;
printf("Please enter your official birth date in day month year format:\n");
scanf("%d %d %d", &day, &month, &year);

if ((0== day || day >31) || (0== month || month > 12)) {
        printf("Please enter a valid date."); }
else {
int livedDays = 30 * (12 * year + month) + day;
int AgeInDays = CurrentDate - livedDays;
int DaysUntil18Years = 18 * 365 - AgeInDays;

printf("Days Lived: %d\n", AgeInDays);

float age = AgeInDays / 365 + 1;


if (age >= 18) {
    printf("According to your identity data, your age is: %.2f.\nYou are eligible to vote based on this information!!", age);
} else {
    printf("According to your identity data, your age is: %.2f.\nYou are not eligible to vote based on this information!!\nTo vote, remaining days: %d ", age, DaysUntil18Years);
}
// son
// the end
}

 return 0;
}
