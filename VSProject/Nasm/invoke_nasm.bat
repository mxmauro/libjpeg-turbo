@ECHO OFF
REM Nasm long path fix
"%~dp0nasm.exe" -i%~sdp0..\..\simd\ %~s1 -o "%~2" %3 %4 %5