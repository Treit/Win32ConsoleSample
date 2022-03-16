@echo off
mkdir ..\..\build
pushd ..\..\build
cl.exe -Zi -DUNICODE -D_UNICODE ..\Win32ConsoleSample\code\win32_console.cpp user32.lib gdi32.lib
popd