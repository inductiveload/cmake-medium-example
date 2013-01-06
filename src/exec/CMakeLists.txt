SET(foo_exec_src main.c)

ADD_EXECUTABLE(main ${foo_exec_src})

TARGET_LINK_LIBRARIES(main foo)

#rename to the final executable name
#which just so happens to be the same as a lib
SET_TARGET_PROPERTIES(main
                      PROPERTIES OUTPUT_NAME foo)
