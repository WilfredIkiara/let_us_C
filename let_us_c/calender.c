#include <stdio.h>

int main(){
  int year;

  printf("enter a year\n");
  scanf("%d", &year);
  printf("your year is %d\n", year);

  /*#include <stdio.h>
  /// chat gpt code for the calender that checks the first day of any year entered through the keyboard
  

int calculateDayOfWeek(int year) {
    int day;

    // Zeller's Congruence algorithm
    if (year >= 1900) {
        day = (1 + 5 * ((year - 1) % 4) + 4 * ((year - 1) % 100) + 6 * ((year - 1) % 400)) % 7;
    } else {
        day = (1 + 5 * (year % 4) + 4 * (year % 100) + 6 * (year % 400)) % 7;
    }

    // The result 'day' is in the range [0, 6], where 0 is Saturday, 1 is Sunday, ..., 6 is Friday
    return day;
}

int main() {
    int year, dayOfWeek;

    // Get year input from the user
    printf("Enter a year: ");
    scanf("%d", &year);

    // Calculate the day of the week for January 1st of the input year
    dayOfWeek = calculateDayOfWeek(year);

    // Print the result
    printf("On January 1st, %d, the day is ", year);

    switch (dayOfWeek) {
        case 0:
            printf("Saturday");
            break;
        case 1:
            printf("Sunday");
            break;
        case 2:
            printf("Monday");
            break;
        case 3:
            printf("Tuesday");
            break;
        case 4:
            printf("Wednesday");
            break;
        case 5:
            printf("Thursday");
            break;
        case 6:
            printf("Friday");
            break;
        default:
            printf("Invalid result");
    }

    printf("\n");

    return 0;
}*/

  return 0;

}