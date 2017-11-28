set(SOURCE_FILES arithmetics.cpp arithmetics.h user.cpp user.h)
set(FALLING_BALL_SRC falling_ball.cpp falling_ball.h constants.h)

add_executable(second_chapter ${SOURCE_FILES})
add_executable(falling_ball ${FALLING_BALL_SRC})