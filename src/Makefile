CC := gcc
CFLAGS := -Wall -Wextra -Werror -std=c11
LDFLAGS := -lcheck 
ifeq ($(shell uname), Linux)
    LDFLAGS += -lpthread -lrt -lm -lsubunit
    OPEN_CMD := xdg-open
else ifeq ($(shell uname), Darwin)
    OPEN_CMD := open
endif

SRC := $(wildcard modules/*.c)
OBJ = $(SRC:.c=.o)
TEST_SRC := tests/tests.c
TARGET := smartcalc2
TEXI2DVI = texi2dvi # texinfo!!
all: clean install

test:smart_calc.a
	@$(CC) $(CFLAGS) -g $(TEST_SRC) smart_calc.a $(LDFLAGS) -o test
	@./test

smart_calc.a: $(OBJ)
	@ar -rc smart_calc.a $^
	ranlib smart_calc.a
	rm -rf modules/*.o

gcov_report:
	$(CC) --coverage $(SRC) $(TEST_SRC) -lcheck -lm -lsubunit -o greport
	./greport
	lcov -t "s21_smart" -o s21_smart.info -c -d .
	genhtml -o ./report s21_smart.info
	open ./report/index.html


install: uninstall
	@clear
	@echo "===>    Installation has started     <==="
	@mkdir -p ../build
	# @cd ui/smartcalc2/ && qmake && make && make clean && rm -rf Makefile && mv $(TARGET).app ../../../build
	@cd ui/smartcalc2/ && qmake && make && make clean && rm -rf Makefile && mv $(TARGET) ../../../build
	# @cp -R ../build/$(TARGET).app ~/Desktop/$(TARGET).app
	@echo "===> SmartCalc application installed <==="

uninstall:
	@rm -rf ../build/$(TARGET)
	@echo "===>  SmartCalc application removed  <==="

dvi: 
	$(TEXI2DVI) --pdf ../documentation/docs.tex

dist:
	@mkdir -p ../dist
	@cp -R ../build/$(TARGET) ../dist
	@cp ../README_RUS.md ../dist && cp ../README.md ../dist
	@cd ../dist && tar cvzf $(TARGET).tgz *
	@cd ../dist && rm -rf $(TARGET) README.md README_RUS.md

clean:
	@rm -rf ../build ../dist gcov_obj/*.o test
	@rm -rf gcov_obj/*.gcda gcov_obj/*.gcno 
	@rm -rf gcov_obj/*.info out *.a *.gcno tests/tests.o qt/*
	@rm -rf ../.DS_Store .DS_Store ../.vscode ui/.DS_Store
	@rm -rf ui/smartcalc2/moc* ui/smartcalc2/*.o ui/smartcalc2/.qmake.stash
	@rm -rf ui/smartcalc2/Makefile ui/smartcalc2/ui*.h *.gcno *.gcda *.info gcov_report report greport *.aux *.log *.dvi *.pdf

clang:
	@clang-format -i modules/*.c modules/*.h ui/smartcalc2/*.cpp ui/smartcalc2/*.h ui/smartcalc2/*.ui tests/*.c 

style:
	@cp ../materials/linters/.clang-format ./
	@clang-format -n modules/*.c modules/*.h ui/smartcalc2/*.cpp ui/smartcalc2/*.h ui/smartcalc2/*.ui tests/*.c
	@clang-format -i modules/*.c modules/*.h ui/smartcalc2/*.cpp ui/smartcalc2/*.h ui/smartcalc2/*.ui tests/*.c
	@rm -rf .clang-format

cppcheck: clean test
	@cppcheck --enable=all --suppress=missingIncludeSystem modules/ ui/smartcalc2/

valgrind: smart_calc.a
	@$(CC) $(CFLAGS) -g $(TEST_SRC) smart_calc.a $(LDFLAGS) -o test
	valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./test

leaks: clean test
	@leaks -atExit -- ./test
