class MyClass {

    public static void sort_students(Integer[] numbers) {
        for(int i=0; i<numbers.length-1; i++)
            for(int j=i+1;j<numbers.length;j++)
                if(numbers[i]>numbers[j]){
                    int aux = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = aux;
                }
        for(int i=0; i<numbers.length;i++)
            System.out.print(numbers[i] + " ");
    }
}
