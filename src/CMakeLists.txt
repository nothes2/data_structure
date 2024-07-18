include_directories(${INCLUDE_DIRECTORIES})


add_library(DYNALIB
    dynamic_list.c
)

target_include_directories(DYNALIB PUBLIC ${INCLUDE_DIR})