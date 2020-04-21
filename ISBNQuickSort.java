//The school starts a survey of the books wanted by the students
//Each student says a book ISBN (assume as integers between 1 and 1000)
//If a book is duplicated, it only shows up in the list once
//List the ISBNs from small to large
//The funtion prompt for the no of ISBNs an each ISBN value

import java.util.Scanner;

class ISBNQuickSort {

    int numbers[] = new int[1000];
    int no;

    ISBNQuickSort(){
        System.out.print("Enter number of numbers: ");
        Scanner input = new Scanner(System.in);
        this.no = input.nextInt();

        for (int i = 0; i < no; i++) {
            System.out.print("Enter number " + (i + 1) + ": ");
            this.numbers[i] = input.nextInt();
        }

        input.close();
    }

    void quickSort(int left, int right) {

        if(left > right) return; //recursive method exit point
        int beginning = this.numbers[left];

        int i = left;
        int j = right;

        while (i != j) {
            while (this.numbers[j] >= beginning && i < j){
                j--;
            }
          

            while (this.numbers[i] <= beginning && i < j){
                i++;
            }

            if (i < j) {
                int temp = this.numbers[i];
                this.numbers[i] = this.numbers[j];
                this.numbers[j] = temp;
            }
        }

        
        int temp = this.numbers[left];
        this.numbers[left] = this.numbers[i];
        this.numbers[i] = temp;
        
        quickSort(left, i - 1);
        quickSort(i + 1, right);
        return;
    }

    public static void main(String[] args) {

        ISBNQuickSort a = new ISBNQuickSort();

        a.quickSort(0, a.no - 1);

        for (int i = 0; i < a.no; i++) {
            System.out.print(a.numbers[i] + " ");
        }
    }
}