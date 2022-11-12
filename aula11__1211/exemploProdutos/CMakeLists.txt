cmake_minimum_required(VERSION 3.23)
project(exemploProdutos C)

set(CMAKE_C_STANDARD 99)

add_executable(exemploProdutos gerenciar_produto.c produto.c produto.h)
