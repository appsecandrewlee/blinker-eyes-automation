#include <AudioToolbox/AudioToolbox.h>
#include <iostream>
#include <unistd.h>

// this is for handling every 4 second playback
using namespace std;
class BTime {

public:
  CFURLRef mySoundUrl = CFBundleCopyResourceURL(
      CFBundleGetMainBundle(), CFSTR("interval"), CFSTR("mp3"), NULL);

  BTime() { cout << "It is time to blink!" << endl; }
};
