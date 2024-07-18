include_directories(${INCLUDE_DIR})

file(GLOB TEST_FILES 
    "${TEST_DIR}/*.c"
)

add_executable(
    DynamicListTest ${TEST_FILES}
)

target_include_directories(DynamicListTest PRIVATE ${INCLUDE_DIR})

target_link_libraries(DynamicListTest DYNALIB)