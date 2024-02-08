This branch is specifically designed for those who are trying to initialize their project but have encountered issues. It includes all the files you'll need for the project initialization (yes, this includes Wwise). You just need to ensure the following have been completed before you can compile your project:

1. [Visual Studio 2022](https://visualstudio.microsoft.com/vs/) is installed.
2. [.Net 6](https://dotnet.microsoft.com/en-us/download/dotnet/6.0/runtime?cid=getdotnetcore&os=windows&arch=x64) is installed.
3. UE5.1.1 is installed.

You don't need to install Wwise separately because I've integrated it into the project (and also fixed a few bugs that could potentially cause EAV errors).

If you've completed the steps above, double-click on Pal.uproject. Then, take a break for a meal; it should compile in about 5 minutes, and then you'll be all set to start. Best of luck.

I've also included a convenient script, AutoDeploy.cmd, in the project. This script can automatically move your packaged .pak files to the correct game directory (This process is fully automated, so you generally won't need to manually input the game directory.), delete the compile cache, and launch the game. You can also just double-click it to launch the game directly, which is quite handy. You just need to replace "YourProjectName" with your project's name in the line set projectName=YourProjectName.

Be luck, have fun!