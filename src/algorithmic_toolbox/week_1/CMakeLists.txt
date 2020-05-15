add_executable(APlusB APlusB.cpp)
target_link_libraries(APlusB PRIVATE project_warnings project_options)

add_executable(max_pairwise_product max_pairwise_product.cpp)
target_link_libraries(max_pairwise_product PRIVATE project_warnings project_options)

message(
    "Building Tests."
  )
add_subdirectory(test)