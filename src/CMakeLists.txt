add_subdirectory(common)
add_subdirectory(worldsim)
add_subdirectory(engine)

include_directories(
    ${PROJECT_SOURCE_DIR}/src/
    ${PROJECT_SOURCE_DIR}/include/
    ${LUA_INCLUDE_DIR}
    ${SFML_INCLUDE_DIR}
    )

add_executable(
    run
    main.cpp
    )

target_compile_definitions(
    run PUBLIC
    -std=c++11
    -Wall
)

target_link_libraries(
    run
    engine
    logger
    worldsim
    gui
    ${COMMON_LIBRARIES}
    )