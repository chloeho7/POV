//https://www.youtube.com/redirect?event=video_description&redir_token=QUFFLUhqbi1HV0M1a0VkQzcwMDF5SXRBbE0yTDBjNHFnQXxBQ3Jtc0ttTW16NGdPMTk3QkpBZXh4ay11dFZ2SGNNd0JfeUl4YlNJMVZyNzRKR3VVWkFZMzdwYlYwNnFXUzhUdndRbVB5c05mRHRDbzNjZ3EwUjRvWTRWNmZPU3Uxb0l6SmpydTQ2VmxKY0NiX1FpSy03WkE4Yw&q=https%3A%2F%2Fdrive.google.com%2Fdrive%2Ffolders%2F1mUlahfYxqAzE_nKC9PLhp7NsvAd838KZ%3Fusp%3Dsharing&v=j7yeR1vaqDs
#include <TimeLib.h>
int LED_PINS[] = {21,22,17,2,15,13,12,27}; 

int NUMBER9[] = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0};
int NUMBER8[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
int NUMBER7[] = {1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 1};
int NUMBER6[] = {1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
int NUMBER5[] = {1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int NUMBER4[] = {1, 0, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 0, 0, 0, 1};
int NUMBER3[] = {0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int NUMBER2[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1};
int NUMBER1[] = {0,0,1,0,0,0,1,1,0,0,1,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,0,0,1,0,0,1,1,1,1,1};
int NUMBER0[] = {1,1,1,1,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,0,0,0,1,1,1,1,1,1};

int _[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
int A[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
int B[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 0, 1, 1, 0, 1, 1, 1, 0};
int C[] = {0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1};
int D[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 0, 0};
int E[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1};
int F[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0};
int G[] = {0, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0};
int H[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
int I[] = {1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1};
int J[] = {0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0};
int K[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1};
int L[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1};
int M[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
int N[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1};
int O[] = {0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0};
int P[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0};
int Q[] = {0, 1, 1, 1, 1, 1, 1, 0, 1, 0, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1};
int R[] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1};
int S[] = {0, 1, 1, 1, 0, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 1, 1, 1, 0};
int T[] = {1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0};
int U[] = {1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 0};
int V[] = {1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 0, 0};
int W[] = {1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1};
int X[] = {1, 1, 0, 0, 0, 0, 1, 1, 0, 0, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 1, 0, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0, 1, 1};
int Y[] = {1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 0, 0, 1, 0, 0, 0, 0, 0, 1, 1, 0, 0, 0, 0, 0, 0};
int Z[] = {1, 0, 0, 0, 0, 1, 1, 1, 1, 0, 0, 0, 1, 0, 0, 1, 1, 0, 0, 1, 0, 0, 0, 1, 1, 0, 1, 0, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0, 0, 1};
int* alpha[] = {A, B, C, D, E, F, G, H, I, J, K, L, M, N,O,P,Q,R,S,T,U,V,W,X,Y,Z};
int* nums [] = {NUMBER0,NUMBER1,NUMBER2,NUMBER3,NUMBER4, NUMBER5, NUMBER6, NUMBER7, NUMBER8, NUMBER9};
int exclamation[] = {0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0};
int colon[] = {0,1,1,1,0,0,1,1,1,0,0,1,1,1,0,0,0,0,0,0,0,0,0,0,0,0,1,1,1,0,0,1,1,1,0,0,1,1,1,0};
int letterSpace;
int dotTime;
#include <SPI.h>
#include <WiFi.h>


char ssid[] = "Barnard Guest";      //  your network SSID (name)
int keyIndex = 0;                 // your network key Index number (needed only for WEP)

WiFiServer server(80);


void printWifiStatus() {
  // print the SSID of the network you're attached to:
  Serial.print("SSID: ");
  Serial.println(WiFi.SSID());

  // print your WiFi shield's IP address:
  IPAddress ip = WiFi.localIP();
  Serial.print("IP Address: ");
  Serial.println(ip);

  // print the received signal strength:
  long rssi = WiFi.RSSI();
  Serial.print("signal strength (RSSI):");
  Serial.print(rssi);
  Serial.println(" dBm");
  // print where to go in a browser:
  Serial.print("To see this page in action, open a browser to http://");
  Serial.println(ip);
}


void setup()
{ Serial.begin(9600);
  // setting the ports of the leds to OUTPUT(SExperiments)
  for ( int i = 0; i < 8 ; i++ )
  { pinMode( LED_PINS[i] , OUTPUT);
  }

  // defining the space between the letters (ms)
  letterSpace = 3; // og 6
  // defining the time dots appear (ms)
  dotTime = 1;

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("Connected to wifi");  
  server.begin();                           // start the web server on port 80
  Serial.printf("Now listening at IP %s", WiFi.localIP().toString().c_str());
  printWifiStatus();                        // you're connected now, so print out the status

}
void printLetter(int letter[])
{
  int y;
  // printing the first y row of the letter
  for (y = 0; y < 8; y++)
  {
    digitalWrite( LED_PINS[y] , letter[y]);
  }
  delay(dotTime);
  // printing the second y row of the letter
  for (y = 0; y < 8; y++)
  {
    digitalWrite( LED_PINS[y], letter[y + 8]);
  }
  delay(dotTime);
  // printing the third y row of the letter
  //(SExperiments)
  for (y = 0; y < 8; y++)
  {
    digitalWrite( LED_PINS[y], letter[y + 16]);
  }
  delay(dotTime);
  for (y = 0; y < 8; y++) {
    digitalWrite( LED_PINS[y], letter[y + 24]);
  }
  delay(dotTime);
  for (y = 0; y < 8; y++) {
    digitalWrite( LED_PINS[y], letter[y + 32]);
  }
  delay(dotTime);
  // printing the sspace between the letters
  //(SExperiments)
  for (y = 0; y < 8; y++)
  {
    digitalWrite( LED_PINS[y], 0);
  }
  delay(letterSpace);
}

void printString(String str){
  for (int i = 0; i < str.length(); i++){
    char c = str[i];
    if (c >= 'A' && c <= 'Z') {
      int index = c - 'A'; // Get the index in the alpha array
      printLetter(alpha[index]); // Print the corresponding letter
    } else if (isdigit(c)) {
      int index = c - '0'; // Get the index in the number array
      if (index >= 0 && index <= 9) {
        printLetter(nums[index]); // Print the corresponding number
      }
    } else if (c == ' ' or c == '+') {
      printLetter(_);
    } else if (c == '!'){
      printLetter(exclamation);
    } else if (c == ':'){
      printLetter(colon);
    }
  }
}

void printTime(){
  time_t cur = now();
  int hr = hourFormat12(cur);
  int min = minute(cur);
  //print hr
  if (hr < 10){
    printLetter(nums[hr]);
  } else {
    printLetter(NUMBER1);
    printLetter(nums[hr-10]);
  }
  printLetter(colon);
  //print min
  printLetter(nums[(min-min%10)/10]);
  printLetter(nums[min%10]);
  //print am/pm
  if (isPM(cur)) {
    printLetter(P);
  } else {
    printLetter(A);
  }
  printLetter(M);
}

void loop()//write here =)
{
  //State = hallRead();
  //if (State != lastState){
    //if (State == HIGH){
    printLetter(I);
    printLetter(R);
    printLetter(E);
    printLetter(N);
    printLetter (E);
   // }
//  }
 // lastState = State;

  WiFiClient client = server.available();   // listen for incoming clients
  String display = "";

  if (client) {                             // if you get a client,
    Serial.println("new client");           // print a message out the serial port
    String currentLine = "";                // make a String to hold incoming data from the client
    while (client.connected()) {            // loop while the client's connected
      if (client.available()) {             // if there's bytes to read from the client,
        char c = client.read();             // read a byte, then
      //  Serial.write(c);                    // print it out the serial monitor
        if (c == '\n') {                    // if the byte is a newline character

          // if the current line is blank, you got two newline characters in a row.
          // that's the end of the client HTTP request, so send a response:
          if (currentLine.length() == 0) {
            // HTTP headers always start with a response code (e.g. HTTP/1.1 200 OK)
            // and a content-type so the client knows what's coming, then a blank line:
            client.println("HTTP/1.1 200 OK");
            client.println("Content-type:text/html");
            client.println();

            // the content of the HTTP response follows the header:
            client.print("Click <a href=\"/H\">here</a> turn the LED on pin 12 on<br>");
            client.print("Click <a href=\"/L\">here</a> turn the LED on pin 12 off<br>");
            client.print("Click <a href=\"/Time\">here</a> to see the time<br>");
            client.print("<form><label for=\"msg\">Message:</label><br><input type=\"text\" id=\"msg\" name=\"msg\"><br></form>");
            client.print("Supports alphanumeric characters, ! and :");

            // The HTTP response ends with another blank line:
            client.println();
            // break out of the while loop:
            break;
          } else {    // if you got a newline, then clear currentLine:
            currentLine = "";
          }
        } else if (c != '\r') {  // if you got anything else but a carriage return character,
          currentLine += c;      // add it to the end of the currentLine
        }

        // Check to see if the client request was "GET /H" or "GET /L":
        if (currentLine.endsWith("GET /H")) {
          digitalWrite(12, HIGH);               // GET /H turns the LED on
        }
        if (currentLine.endsWith("GET /L")) {
          digitalWrite(12, LOW);                // GET /L turns the LED off
        }
        if (currentLine.endsWith("GET /Time")) {
          display = "";
        }
        
        if (currentLine.startsWith("GET /?msg=")){
         // Serial.println(currentLine);

          int startPos = currentLine.indexOf(' /?msg='); 
          int endPos = currentLine.indexOf(' HTTP/1.1');
       //   Serial.println(startPos);
         // Serial.println(endPos);
          if (startPos > 0 && endPos > 0){
        //    Serial.print("display= ");
            String input = currentLine.substring(startPos+1,endPos-5);
            input.toUpperCase();
            if (input != display){
              display = input;
            }
            Serial.print(display);
            Serial.println(" ");
          }

        }
      }
    }
    // close the connection:
    client.stop();
    Serial.println("client disconnected");
  }
  if (display == ""){
    printTime();
  } else {
    printString(display);
  }
  
}
