/*

For example, using the g++ compiler you may open a terminal (unix) and write:

$ man g++

This opens the manual for the g++ compiler, which has a part with filename specifications.
We can se that you may use different file extensions, but .cpp is a convention:

...
Options Controlling the Kind of Output
       Compilation can involve up to four stages: preprocessing, compilation proper, assembly and linking, always in that order.  GCC is capable of preprocessing and
       compiling several files either into several assembler input files, or into one assembler input file; then each assembler input file produces an object file,
       and linking combines all the object files (those newly compiled, and those specified as input) into an executable file.

       For any given input file, the file name suffix determines what kind of compilation is done:

       file.c
           C source code that must be preprocessed.

       file.i
           C source code that should not be preprocessed.

       file.ii
           C++ source code that should not be preprocessed.

       file.m
           Objective-C source code.  Note that you must link with the libobjc library to make an Objective-C program work.

       file.mi
           Objective-C source code that should not be preprocessed.

       file.mm
       file.M
           Objective-C++ source code.  Note that you must link with the libobjc library to make an Objective-C++ program work.  Note that .M refers to a literal
           capital M.

       file.mii
           Objective-C++ source code that should not be preprocessed.

       file.h
           C, C++, Objective-C or Objective-C++ header file to be turned into a precompiled header (default), or C, C++ header file to be turned into an Ada spec
           (via the -fdump-ada-spec switch).

       file.cc
       file.cp
       file.cxx
       file.cpp
       file.CPP
       file.c++
       file.C
           C++ source code that must be preprocessed.  Note that in .cxx, the last two letters must both be literally x.  Likewise, .C refers to a literal capital C.

       file.mm
       file.M
           Objective-C++ source code that must be preprocessed.

       file.mii
           Objective-C++ source code that should not be preprocessed.

       file.hh
       file.H
       file.hp
       file.hxx
       file.hpp
       file.HPP
       file.h++
       file.tcc
           C++ header file to be turned into a precompiled header or Ada spec.

       file.f
       file.for
       file.ftn
           Fixed form Fortran source code that should not be preprocessed.

       file.F
       file.FOR
       file.fpp
       file.FPP
       file.FTN
           Fixed form Fortran source code that must be preprocessed (with the traditional preprocessor).

       file.f90
       file.f95
       file.f03
       file.f08
           Free form Fortran source code that should not be preprocessed.

       file.F90
       file.F95
       file.F03
       file.F08
           Free form Fortran source code that must be preprocessed (with the traditional preprocessor).

       file.go
           Go source code.

       file.ads
           Ada source code file that contains a library unit declaration (a declaration of a package, subprogram, or generic, or a generic instantiation), or a
           library unit renaming declaration (a package, generic, or subprogram renaming declaration).  Such files are also called specs.

       file.adb
           Ada source code file containing a library unit body (a subprogram or package body).  Such files are also called bodies.

       file.d
           D source code file.

       file.di
           D interface code file.

       file.dd
           D documentation code file.

       file.s
           Assembler code.

       file.S
       file.sx
           Assembler code that must be preprocessed.

       other
           An object file to be fed straight into linking.  Any file name with no recognized suffix is treated this way.

           ... 
           Etc.

           */
int main(){
	return 0;
}