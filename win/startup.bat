@echo off
:a
if exist G:\ (goto Yes) else (goto a)
:Yes
G:
start File.bat
goto end
:end
exit
