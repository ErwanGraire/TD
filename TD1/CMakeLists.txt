cmake_minimum_required(VERSION 3.10)
project(TD)

# Ajout des fichiers sources
set(SRCS "main.c")

# Ajout de l'exécutable avec les fichiers sources
add_executable(TD1 ${SRCS})