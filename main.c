// 1. Write a program to find the number of vowels in each of the 5 strings stored in two-
// dimensional arrays, taken from the user.

#include <stdio.h>
int main()
{
    int row, column;
    printf("\nEnter number of rows: ");
    scanf("%d", &row);
    printf("\nEnter number of columns: ");
    scanf("%d", &column);
    char name[row][column];
    printf("Enter names: ");

    for (int i = 0; i < row; i++)
    {

        scanf("%s", &name[i]);
    }
    printf("\n");
    int count = 0;
    for (int i = 0; i < 12; i++)
    {
        if (name[0][i] == 'a' || name[0][i] == 'A' || name[0][i] == 'e' || name[0][i] == 'E' || name[0][i] == 'i' || name[0][i] == 'I' || name[0][i] == 'o' || name[0][i] == 'O' || name[0][i] == 'u' || name[0][i] == 'U')
            count++;
    }
    printf("%d", count);
    return 0;
}

// 2. Write a program to sort 10 city names stored in two dimensional arrays, taken from
// the user.
#include <string.h>
#include <stdio.h>
int main()
{
    char city[4][10] = {"pune", "nagpur", "mysore", "nanda"};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (city[i] > city[i + 1])
                strcpy(city[i], city[i + 1]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", city[i]);
    }

    return 0;
}
// 3. Write a program to read and display a 2D array of strings in C language.
#include <stdio.h>
int main()
{
    char cities[5][10];
    for (int i = 0; i < 5; i++)
    {
        fgets(cities[i], 10, stdin);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s", cities[i]);
    }

    return 0;
}
// 4. Write a program to search a string in the list of strings.
#include <stdio.h>
int main()
{
    char cities[5][10];
    char search[10];
    printf("Enter 5 cities: ");
    for (int i = 0; i < 5; i++)
    {
        fgets(cities[i], 10, stdin);
    }
    int count = 0;
    int stop = 0;
    printf("search for city: ");
    fgets(search, 10, stdin);
    for (int i = 0; i < 5; i++)
    {
        if (cities[i][0] == search[0])
        {
            for (int j = 1; search[j]; j++)
            {
                stop++;
                if (!(search[j] == cities[i][j]))
                {
                    count++;
                    break;
                }
            }
        }
        if (stop == 6)
            break;
    }
    if (count)
        printf("Not found");
    else
        printf("found");

    return 0;
}

// 5. Suppose we have a list of email addresses, check whether all email addresses have
// ‘@’ in it. Print the odd email out.

#include <stdio.h>

int main()
{
    char email[5][20];
    printf("Enter 5 email: ");
    for (int i = 0; i < 5; i++)
    {
        fgets(email[i], 20, stdin);
    }
    int count = 0;
    for (int i = 0; i < 5; i++)
    {
        int k = 0;
        for (k; email[i][k] != '\n'; k++)
            ;
        int j = 0;
        for (j; email[i][j] != '\n'; j++)
        {
            if (!(email[i][j] >= 'a' && email[i][j] <= 'z') && !(email[i][j] >= 'A' && email[i][j] <= 'Z') && email[i][j] == '@')
            {
                break;
            }
        }
        if (j == k)
        {
            printf("\n");
            printf(" %s", email[i]);
        }
    }
    return 0;
}

// 6. Write a program to print the strings which are palindrome in the list of strings.
#include <stdio.h>
int main()
{

    char names[5][20];
    printf("Enter 5 names: ");
    for (int i = 0; i < 5; i++)
    {
        fgets(names[i], 20, stdin);
    }
    // nitin, level
    for (int i = 0; i < 5; i++)
    {
        int k = 0;
        for (k; names[i][k] != '\n'; k++)
            ;
        int t = k - 1;
        int j = 0;
        for (j; names[i][j] != '\n'; j++)
        {
            if (j < t)
            {
                if (!(names[i][j] == names[i][t]))
                {
                    break;
                }
            }
            t--;
        }
        if (j == k)
        {
            printf("\n");
            printf("%s", names[i]);
        }
    }

    return 0;
}

// 7. From the list of IP addresses, check whether all ip addresses are valid.
#include <stdio.h>
int main()
{
    char a[3][16] = {"250.257.0.1", "30.120.0.1", "104.111.0.12"};
    for (int i = 0; i < 3; i++)
    {
        int k = 0;
        for (k; a[i][k]; k++)
            ;

        int flag = 0;
        int dot = 0;
        for (int j = 0; j < k; j++)
        {
            if (a[i][0] - '0' == 0)
            {
                flag = 1;
                break;
            }
            int sum = 0;

            if (dot <= 3)
            {
                while (a[i][j] != '.' && j < k)
                {
                    sum = sum * 10 + a[i][j] - '0';
                    if (sum > 256)
                    {
                        printf("%s is not valid\n", a[i]);
                        break;
                    }
                    j++;
                }
                dot++;
            }
        }
        if (flag == 1 || dot <= 3)
            printf("%s is not valid\n", a[i]);
    }

    return 0;
}
// 9. Write a program that asks the user to enter a username. If the username entered is
// one of the names in the list then the user is allowed to calculate the factorial of a
// number. Otherwise, an error message is displayed
#include <stdio.h>

int main()
{
    char username[5][20];
    char name[20];
    printf("enter five names: ");

    for (int i = 0; i < 5; i++)
    {
        fgets(username[i], 20, stdin);
    }

    printf("search your name: ");
    fgets(name, 20, stdin);
    int exist = 0;
    for (int i = 0; i < 5; i++)
    {
        int count = 1;
        int j;
        if (username[i][0] == name[0])
        {
            for (j = 1; name[j] != '\n'; j++)
            {
                count++;
                if (!(name[j] == username[i][j]))
                {
                    break;
                }
            }
        }
        if (j == count)
        {
            exist++;
            printf("%s", username[i]);
            int fact = 1;

            for (int i = 1; i <= 5; i++)
            {
                fact = fact * i;
            }
            printf("%d\n", fact);

            break;
        }
        j = 0;
    }
    if (exist <= 0)
    {
        printf("No records found");
    }

    return 0;
}

// 10. Create an authentication system. It should be menu-driven.

#include <stdio.h>
void swap(char nums[])
{
    int j=0;
    for ( j; nums[j]; j++) ;
    j--;
    for (int i = 0,j; i < j; ++i,j--)
    {
        nums[i]=nums[j];
    }
}
int main() {
    char name[6]="kasif";
    swap(name);
    printf("%s",name);
    return 0;
}
