option(CPP_AGORITHMIC_TOOLBOX "Enable compilation of Algorithmic Toolbox" ON)


# Algorithmic Toolbox
if(CPP_AGORITHMIC_TOOLBOX)
  message("Using Algorithmic Toolbox")
  add_subdirectory(algorithmic_toolbox)
endif()

# Generic test that uses conan libs
add_executable(intro main.cpp)
target_link_libraries(
  intro PRIVATE project_options project_warnings CONAN_PKG::docopt.cpp
                CONAN_PKG::fmt CONAN_PKG::spdlog)
