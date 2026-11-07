student:stud_main.o stud_add.o stud_save.o stud_mod.o stud_show.o stud_del.o 
	cc stud_main.o stud_add.o stud_save.o stud_mod.o stud_show.o stud_del.o -o student
	
stud_main.o:stud_main.c
	cc -c stud_main.c
stud_add.o:stud_add.c
	cc -c stud_add.c
stud_save.o:stud_save.c
	cc -c stud_save.c
stud_mod.o:stud_mod.c
	cc -c stud_mod.c
stud_show.o:stud_show.c
	cc -c stud_show.c
stud_del.o:stud_del.c
	cc -c stud_del.c
clear:
	@echo "cleaning up..."
	@rm -r *.o
	
