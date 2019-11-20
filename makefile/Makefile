all:main
	echo "Completed..."
main:main.o bubble_sort.o Insertion_sort.o selection_sort.o merge_sort.o quick_sort.o
	gcc -Werror main.o bubble_sort.o Insertion_sort.o selection_sort.o merge_sort.o quick_sort.o -o main
main.o:main.c
	gcc  -c main.c
bubble_sort.o:bubble_sort.c
	gcc -c bubble_sort.c
Insertion_sort.o:Insertion_sort.c
	gcc -c Insertion_sort.c
selection_sort.o:selection_sort.c
	gcc -c selection_sort.c
merge_sort.o:merge_sort.c
	gcc -c merge_sort.c
quick_sort.o:quick_sort.c
	gcc -c quick_sort.c
clean:
	rm -rf *.o
