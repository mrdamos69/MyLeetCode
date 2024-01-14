OS := $(shell uname -s)
CC = g++
FLAG = 
FLAG_C = -c 
CL_11 = -std=c++17 -Wall -Wextra -Werror
PR_NAME = leetCodeTest
ALL_FILE_CC = main.cc
ALL_FILE_O = main.o

ifeq ($(OS), Darwin)
	FLAGS_PLATFORM = -lgtest
else
	FLAGS_PLATFORM = -lgtest -lsubunit -lrt -lm -lpthread -g
endif

all: clean test clean

test:
	@$(CC) $(CL_11) unit_test.cc main.cc -o tests.o -lgtest
	@./tests.o

clean:
	@rm -f *.a
	@rm -f *.o
	@rm -f *.out
	@rm -f *.gcda
	@rm -f *.gcdo
	@rm -f *.gcno
	@rm -f *.info
	@rm -f *.info
	@rm -f ./*/*.gch
	@rm -rf build
	@rm -f RESULT_VALGRIND.txt

leaks: test
	@CK_FORK=no valgrind --vgdb=no --leak-check=full --show-leak-kinds=all --tool=memcheck --track-origins=yes --verbose --log-file=RESULT_VALGRIND.txt ./tests.o

# check:
# 	@cp ../materials/linters/.clang-format ./
# 	@cd view && clang-format -i ./*.cc ./*.h
# 	@cd model && clang-format -i ./*.cc ./*.h
# 	@cd controller && clang-format -i ./*.cc ./*.h
# 	@rm -rf .clang-format

cppcheck:
	@cppcheck --enable=all --suppress=missingIncludeSystem $(ALL_FILE_CC)