ifneq ("$(wildcard config/config.mk)", "")
	include config/config.mk
endif

CONFIG_FOLDER := config
CONFIG_FILE := config/config.mk
vaild_input := false
CHECK_ENV := ./config/CHECK_GCC_ENV.sh
vaild_input = false; 

init: check_config, config_wizard
	@echo running default setup. $(CC)
run:

test:
	$(CHECK_ENV)
	@echo error=$$?

# TODO vaild_input not found
config_wizard:
	@echo "do u wanna skip the basic configuration (Y/N)?"; \
	
	while ['$$vaild_input' != 'true']; do \
		read -p "You can press CTRL + D to CANCEL : " SKIP_FLAG;

		if ["$$SKIP_FLAG" = "N"]; then \
			sed -i 's/^SKIP_FLAG := &&input/' config/config.mk; 
			vaild_input = true; \
		elif ["$$SKIP_FLAG" = "Y"]; then \
			sed -i 's/^SKIP_FLAG := &&input/' config/config.mk; 
			vaild_input = true; \
		else \
			echo "Invaild Input, please input 'Y' or 'N'"; \
		fi; \
	done

	
#project 
preprocessing: check_preprocessing
	$(CC) -E -o 
build:

compile:


# tools 
.PHONY: check_bin check_obj check_preprocessing check_config

config: config_wizard

check_obj:
	@if [ ! -d "$(obj)" ]; then \
		echo "obj folder doesn't exists, we created one for u !"; \
		mkdir $(obj); \
	fi

check_bin:
	@if [ ! -d "$(bin)" ]; then \
		echo "bin folder doesn't exists, we created one for u !"; \
		mkdir $(bin); \
	fi

check_preprocessing:
	@if [ ! -d "$(pre)" ]; then \
		echo "pre_data folder doesn't exists, we created one for u !"; \
		makdir $(pre); \
	fi

check_config:
	@if [ ! -d "$(CONFIG_FILE)" ]; then \
		echo "config folder doesn't exists, we created one for u :>"; \
		mkdir $(CONFIG_FOLDER); \
		touch $(CONFIG_FILE); \
		echo "CC := gcc" >> $(CONFIG_FILE); \
		echo "OBJ_FOLDER := obj" >> $(CONFIG_FILE); \
		echo "EXECUTEABLE_FOLDER := bin" >> $(CONFIG_FILE); \
		echo "PREPROCESSING_FOLDER := pre_data" >> $(CONFIG_FILE); \
		echo "PORJECT_FOLDER := project_name" >> $(CONFIG_FILE); \
		echo "SKIP_FLAG := Y" >> $(CONFIG_FILE); \
		echo "config file initialized: "; \
		cat config/config.mk; \
	fi