@echo off
rmdir /s/q ..\build
mkdir ..\build
pushd ..\build
cl /EHsc /Zi /Fe:Dbll.exe ..\source\MainProg.cpp
popd ..\build

