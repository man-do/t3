if(EXISTS "/home/maverick/personal_projects/t3/build/board_test[1]_tests.cmake")
  include("/home/maverick/personal_projects/t3/build/board_test[1]_tests.cmake")
else()
  add_test(board_test_NOT_BUILT board_test_NOT_BUILT)
endif()
