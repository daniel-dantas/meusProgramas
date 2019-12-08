#include <stdio.h>
#include <stdlib.h>

int main (){
    system("apt-get update");
    system("apt-get install snapd");
    system("apt-get install virtualbox-qt");
    system("apt-get install git");
    system("apt-get install whatsapp-desktop");    
    system("snap install node --channel=12/stable --classic");
    system("snap install insomnia");
    system("snap install code --classic");
    system("snap install intellij-idea-ultimate --classic");
    system("snap install inkscape");
    system("snap install gimp");
    system("snap install slack --classic");
    system("snap install opera");
    system("snap install powershell --classic");
    system("snap install spotify");
    system("wget https://get.enterprisedb.com/postgresql/postgresql-10.11-2-linux-x64.run");
    system("yarn global add @vue/cli");
    system("yarn global add create-react-app");
    system("yarn global add react-native-cli");
    
    return 0;
}