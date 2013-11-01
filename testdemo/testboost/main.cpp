#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <string>
#include <cstdio>
#include <string>
#include <sstream>
#include <fstream>
#include <iostream>
//#include <syslog.h>

#include <boost/asio.hpp>
//#include <boost/lexical_cast.hpp>
#include <iostream>

using namespace boost::asio;
using namespace std;

int main(int argc, const char *argv[])
{
   // printf("hello world\r\n");
   
    string host1 = "10.142.49.127";
    int port1 = 80;
    string uri1="/test.php";
    string getargs1="userName=bbba";
    std::string filepath;

    io_service ioservice;
    ip::tcp::socket sock(ioservice); 

    // -----------------------------------------------
    char szport[16];
    sprintf(szport, "%d", port1);
    ip::tcp::resolver resolver(ioservice);
    ip::tcp::resolver::query query(host1, std::string(szport));
    boost::system::error_code ec_resolve;
    ip::tcp::resolver::iterator endpoint_iterator = resolver.resolve(query, ec_resolve);
    ip::tcp::endpoint endpoint = *endpoint_iterator;
    // -----------------------------------------------

    //ip::address addr = ip::address::from_string("127.0.0.1");
    //ip::tcp::endpoint endpoint(addr, port);

    // -----------------------------------------------

    boost::system::error_code ec;
    sock.connect(endpoint, ec);
    if ( ec ) {
        std::cout << "Socket connect " << host1 << " failure!" << std::endl;
    } else {
        //boost::asio::streambuf request; 
        //std::ostream request_stream(&request); 
        //request_stream << "GET " << uri << " HTTP/1.1\r\n"; 
        //request_stream << "User-agent: curl/7.27.0\r\n";
        //request_stream << "Host: " << host << ":" << port << "\r\n"; 
        //request_stream << "Accept: */*\r\n"; 
        //request_stream << "Connection: close\r\n"; 
        //request_stream << "\r\n";

        std::stringstream ss;
        if ( !uri1.empty() ){
            ss << "GET " << uri1 << "?" << getargs1 << " HTTP/1.1\r\n"; 
        } else {
            ss << "GET " << "?" << getargs1 << " HTTP/1.1\r\n";
        }
        //ss << "User-agent: curl/7.27.0\r\n";
        ss << "User-agent: flvplay/1.0.0\r\n";
        ss << "Host: " << host1 << ":" << port1 << "\r\n"; 
        ss << "Accept: */*\r\n"; 
        ss << "Connection: close\r\n"; 
        ss << "\r\n";

        // Send the request. 
        //boost::asio::write(sock, request); 
        const std::string str = ss.str();
        const char* szRequest = str.c_str(); 
        size_t nRequest = str.length();
        sock.send(buffer(szRequest, nRequest));
    
        char szResponse[1024];
        size_t nResponse = sizeof(szResponse);
        size_t nBytes = sock.receive(buffer(szResponse, nResponse), 0);

        if ( nBytes <= nResponse )
            szResponse[nBytes] = 0;
        else
            szResponse[nResponse] = 0;

        filepath = szResponse;
        printf("\n");
        printf("%s\n",szResponse);
    } 
    return 0;
}
