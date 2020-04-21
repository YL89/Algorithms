//The school starts a survey of the books wanted by the students
//Each student says a book ISBN (assume as integers between 1 and 1000)
//If a book is duplicated, it only shows up in the list once
//List the ISBNs from small to large
//The funtion prompt for the no of ISBNs an each ISBN value

#include <iostream>

int main()
{
//Bucket Sort````````````````````````````````````````````````````````````````````````````````````````````````````
    int numbers[1001] = {0}, no, isbn;

    std::cout << "Enter numbers of ISBNs: ";
    std::cin >> no;

    for (int j = 0; j < no; j++)
    {
        std::cout << "Enter ISBN " << j + 1 << ":";
        std::cin >> isbn;
        for (int i = 1; i < 1001; i++)
        {
            if (i == isbn)
                numbers[i]++;
        }
    }

    for (int i = 1; i < 1001; i++)
        if (numbers[i])
            std::cout << i << " ";
//```````````````````````````````````````````````````````````````````````````````````````````````````````````````

//Bubble Sort````````````````````````````````````````````````````````````````````````````````````````````````````

//```````````````````````````````````````````````````````````````````````````````````````````````````````````````

//Quick Sort`````````````````````````````````````````````````````````````````````````````````````````````````````

//```````````````````````````````````````````````````````````````````````````````````````````````````````````````

    return 0;
}