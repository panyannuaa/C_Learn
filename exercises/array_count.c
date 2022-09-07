//
// Created by yapan on 4/9/22.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "array_count.h"


void char_count(char *s, int *count) {

    memset(count,0,256);
    while (*s !=0) {
        count[*s]++;
        s++;
    }

}

void my_printf(char *s, int d) {
    while (*s != 0) {
        if (*s =='%') {

        }
        s++;

    }
}

void char_count_test() {
    char ch[]="Distributions include the Linux kernel and supporting system software and libraries, many of which are provided by the GNU Project. Many Linux distributions use the word \"Linux\" in their name, but the Free Software Foundation uses the name \"GNU/Linux\" to emphasize the importance of GNU software, causing some controversy.[16][17]\n"
                    "\n"
                    "Popular Linux distributions[18][19][20] include Debian, Fedora Linux, and Ubuntu. Commercial distributions include Red Hat Enterprise Linux and SUSE Linux Enterprise. Desktop Linux distributions include a windowing system such as X11 or Wayland, and a desktop environment such as GNOME or KDE Plasma. Distributions intended for servers may omit graphics altogether, or include a solution stack such as LAMP. Because Linux is freely redistributable, anyone may create a distribution for any purpose.[21]\n"
                    "\n"
                    "Linux was originally developed for personal computers based on the Intel x86 architecture, but has since been ported to more platforms than any other operating system.[22] Because of the dominance of the Linux-based Android on smartphones, Linux also has the largest installed base of all general-purpose operating systems.[23][24][25][26] Although Linux is used by only around 2.3 percent of desktop computers,[27][28] the Chromebook, which runs the Linux kernel-based Chrome OS, dominates the US K–12 education market and represents nearly 20 percent of sub-$300 notebook sales in the US.[29] Linux is the leading operating system on servers (over 96.4% of the top 1 million web servers' operating systems are Linux),[30] leads other big iron systems such as mainframe computers, and is the only OS used on TOP500 supercomputers (since November 2017, having gradually eliminated all competitors).[31][32][33]\n"
                    "\n"
                    "Linux also runs on embedded systems, i.e. devices whose operating system is typically built into the firmware and is highly tailored to the system. This includes routers, automation controls, smart home technology, televisions (Samsung and LG Smart TVs use Tizen and WebOS, respectively),[34][35][36] automobiles (for example, Tesla, Audi, Mercedes-Benz, Hyundai, and Toyota all rely on Linux),[37] digital video recorders, video game consoles, and smartwatches.[38] The Falcon 9's and the Dragon 2's avionics use a customized version of Linux.[39]\n"
                    "\n"
                    "Linux is one of the most prominent examples of free and open-source software collaboration. The source code may be used, modified and distributed commercially or non-commercially by anyone under the terms of its respective licenses, such as the GNU General Public License.[21]";

    //char ch[20] = {'a','1','3','?','9','0','e','?','2','2','3','2','?'};
    int count[256];
    memset(count,0,256*sizeof(int));

    char_count(ch, count);
    for(int i=0;i <256;i++) {
        if (count[i] !=0) {
            printf("count char result: ch = %c, count = %d\n", i, count[i]);
        }

    }

}