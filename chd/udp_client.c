#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
int main(int argc, const char *argv[])
{
    int sfd = socket(AF_INET, SOCK_DGRAM,0);
    if(sfd == -1)
    {
        perror("socket:");
        exit(-1);
    }
    struct sockaddr_in toaddr;
    bzero(&toaddr, sizeof(toaddr));
    toaddr.sin_family = AF_INET;
    toaddr.sin_port = htons(atoi(argv[2]));
    toaddr.sin_addr.s_addr = inet_addr(argv[1]);
    sendto(sfd, "hello", 6, 0, (struct sockaddr*)&toaddr, sizeof(struct sockaddr));
    char buf[512] = {0};

    struct sockaddr_in fromaddr;
    bzero(&fromaddr, sizeof(struct sockaddr));
    int fromaddrlen = sizeof(struct sockaddr);
    if(recvfrom(sfd, buf, sizeof(buf), 0,(struct sockaddr*)&fromaddr, &fromaddrlen) == -1)
    {
        perror("recvfrom:");
        exit(-1);
    }
    printf("receive from %s %d, the message is :%s\n",inet_ntoa(fromaddr.sin_addr),ntohs(fromaddr.sin_port),buf);









    close(sfd);

    return 0;
}
