option(CPP_WEEK_1 "Enable compilation of Week 1 assignments" ON)


# week_1
if(CPP_WEEK_1)
  message("Using Week 1 folder")
  add_subdirectory(week_1)
endif()