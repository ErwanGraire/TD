cmake_minimum_required(VERSION 3.10)
project(TD)

# Ajout des fichiers sources
set(SRCS "main2.c")

# Ajout de l'exécutable avec les fichiers sources
add_executable(TD2 ${SRCS})