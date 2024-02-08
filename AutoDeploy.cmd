@echo off
chcp 65001&cls
setlocal enabledelayedexpansion
set projectName=YourProjectName

set searchDirs[0]="C:\Program Files (x86)\Steam\steamapps\common"
set searchDirs[1]=D:\SteamLibrary\steamapps\common
set searchDirs[2]=E:\SteamLibrary\steamapps\common
set searchDirs[3]=F:\SteamLibrary\steamapps\common
set searchDirs[4]=G:\SteamLibrary\steamapps\common
set gameDir=
for /l %%i in (0,1,4) do (
    if exist "!searchDirs[%%i]!\Palworld\" (
        set gameDir=!searchDirs[%%i]!\Palworld
        goto foundGameDir
    )
)

:foundGameDir
if "%gameDir%"=="" (
    echo Palworld directory not found.
    goto endScript
)
echo !gameDir!
set pakFile=%CD%\Windows\Pal\Content\Paks\pakchunk114-Windows.pak
if exist "%pakFile%" (
    set targetDir=%gameDir%\Pal\Content\Paks\LogicMods
    if exist "!targetDir!\%projectName%.pak" del "!targetDir!\%projectName%.pak"
    copy /Y "%pakFile%" "!targetDir!\%projectName%.pak"
)
if exist "%CD%\Windows" rmdir /S /Q "%CD%\Windows"
if exist "%gameDir%\Palworld.exe" (
    start "" "%gameDir%\Palworld.exe"
)
:endScript
timeout /t 3
exit
