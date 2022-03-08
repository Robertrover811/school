#include "HttpClient/HttpClient.h"

#include "Adafruit_DHT/Adafruit_DHT.h"

unsigned int nextTime = 0;
HttpClient http;

http_header_t headers[] = {
    { "Accept" , "*/*"},
    { NULL, NULL } 
};

http_request_t request;
http_response_t response;

void setup()  {

}

void loop()  {
    request.hostname = "dweet.io";
    request.port = 80;
    request.path = "/dweet/for/robertgs-photon-eight?hello-world";
	
    // Get request
    http.get(request, response, headers);
    
    delay(10000);
}
