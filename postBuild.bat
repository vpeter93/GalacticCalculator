copy ..\build-GalacticCalculator-Desktop_Qt_5_8_0_MinGW_32bit-Release\release\GalacticCalculator.exe "..\GalacticCalculator-Release\GalacticCalculator.exe"
copy ..\build-GalacticCalculator-Desktop_Qt_5_8_0_MinGW_32bit-Release\release\GalacticCalculator.exe "..\GalacticCalculator-ReleaseUpdate\GalacticCalculator-Release\GalacticCalculator.exe"
"C:\Program Files\7-Zip\7z" a -tzip E:\Dropbox\Tajo\GalacticCalculator-win32Full.zip ..\GalacticCalculator-Release
"C:\Program Files\7-Zip\7z" a -tzip E:\Dropbox\Tajo\GalacticCalculator-win32.zip ..\GalacticCalculator-ReleaseUpdate\GalacticCalculator-Release
