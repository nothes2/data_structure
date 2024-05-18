foo =

bar := ${subst num1, num2, ${num1} + ${num2}}

all:
ifeq ($(foo),)
	@echo "foo is empty"
else
	@echo "nope"
endif

ifdef foo
	echo "foo is defined"
endif

ifndef foo
	echo "bar is not "
endif