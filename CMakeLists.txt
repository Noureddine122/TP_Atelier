cmake_minimum_required(VERSION 3.21)
project(Atelier_TP)

set(CMAKE_CXX_STANDARD 14)

add_executable(Atelier_TP Source.cpp AppBanque.h AppBanque.cpp Client.cpp Client.h Compte.cpp Compte.h CompteCourant.cpp CompteCourant.h CompteEpagnePayant.cpp CompteEpagnePayant.h CompteEpargne.h CompteEpargne.cpp ComptePayant.h ComptePayant.cpp Devise.h Devise.cpp Dollar.h Dollar.cpp GC.h GC.cpp MAD.h MAD.cpp OperationR.h OperationR.cpp operationV.h operationV.cpp Transaction.h Transaction.cpp)

