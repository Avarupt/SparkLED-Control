//
// display init
//
void displayInit(){
const unsigned char flash [] = {
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x02, 0x2F, 0x73, 0xA2, 0x1D, 0x2E, 0x4E, 0xE8, 0xB8, 0xE0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x83, 0x68, 0x4A, 0x54, 0x21, 0x29, 0x50, 0x4D, 0xA5, 0x00, 0x80, 0x00, 0x00,
0x00, 0x00, 0x01, 0x42, 0xAE, 0x7B, 0xC8, 0x21, 0xEF, 0x5E, 0x4A, 0xBD, 0xE1, 0x40, 0x00, 0x00,
0x00, 0x00, 0x00, 0x82, 0x28, 0x52, 0x88, 0x21, 0x2A, 0x42, 0x48, 0xA4, 0x20, 0x80, 0x00, 0x00,
0x00, 0x00, 0x00, 0x02, 0x2F, 0x4A, 0x48, 0x1D, 0x29, 0x5C, 0x48, 0xA5, 0xC0, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44, 0x44,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x10, 0x02, 0x00,
0x00, 0x40, 0x08, 0x01, 0x00, 0x20, 0x04, 0x00, 0x80, 0x10, 0x02, 0x00, 0x40, 0x10, 0x02, 0x00,
0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0, 0x38, 0x07, 0x00,
0x01, 0x50, 0x2A, 0x05, 0x40, 0xA8, 0x15, 0x02, 0xA0, 0x54, 0x0A, 0x81, 0x50, 0x54, 0x0A, 0x80,
0x00, 0xE0, 0x1C, 0x03, 0x80, 0x70, 0x0E, 0x01, 0xC0, 0x38, 0x07, 0x00, 0xE0, 0x38, 0x07, 0x00,
0x01, 0x50, 0x2A, 0x05, 0x40, 0xA8, 0x15, 0x02, 0xA0, 0x54, 0x0A, 0x81, 0x50, 0x54, 0x0A, 0x80,
0x02, 0xE8, 0x5D, 0x0B, 0xA1, 0x74, 0x2E, 0x85, 0xD0, 0xBA, 0x17, 0x42, 0xE8, 0xBA, 0x17, 0x40,
0x01, 0x50, 0x2A, 0x05, 0x40, 0xA8, 0x15, 0x02, 0xA0, 0x54, 0x0A, 0x81, 0x50, 0x54, 0x0A, 0x80,
0x02, 0xE8, 0x5D, 0x0B, 0xA1, 0x74, 0x2E, 0x85, 0xD0, 0xBA, 0x17, 0x42, 0xE8, 0xBA, 0x17, 0x40,
0x01, 0x50, 0x2A, 0x05, 0x40, 0xA8, 0x15, 0x02, 0xA0, 0x54, 0x0A, 0x81, 0x50, 0x54, 0x0A, 0x80,
0x02, 0x48, 0x49, 0x09, 0x21, 0x24, 0x24, 0x84, 0x90, 0x92, 0x12, 0x42, 0x48, 0x92, 0x12, 0x40,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x2A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x02, 0x00, 0x0A, 0xA8, 0x00, 0x00, 0x00, 0x00, 0x0A, 0xA8, 0x00, 0x40, 0x00, 0x00,
0x00, 0x00, 0x05, 0x00, 0x0E, 0xB8, 0x00, 0x00, 0x00, 0x00, 0x0E, 0xB8, 0x00, 0xA0, 0x00, 0x00,
0x00, 0x00, 0x02, 0x00, 0x02, 0xA0, 0x00, 0x00, 0x00, 0x00, 0x02, 0xA0, 0x00, 0x40, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x03, 0xF8, 0x00, 0x04, 0x10, 0x00, 0x0F, 0xE0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x02, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x06, 0x30, 0x00, 0x07, 0x80, 0x00, 0x00, 0x40, 0x00,
0x00, 0x05, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x07, 0x70, 0x00, 0x03, 0x80, 0x00, 0x00, 0xA0, 0x00,
0x00, 0x02, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x3B, 0xEE, 0x00, 0x03, 0x80, 0x00, 0x00, 0x40, 0x00,
0x02, 0x00, 0x02, 0x00, 0x3F, 0xC0, 0x00, 0x1D, 0xDC, 0x00, 0x01, 0xFE, 0x00, 0x40, 0x00, 0x40,
0x05, 0x00, 0x05, 0x00, 0xFF, 0xC0, 0x10, 0x0E, 0xB8, 0x04, 0x01, 0xFF, 0x80, 0xA0, 0x00, 0xA0,
0x02, 0x00, 0x02, 0x00, 0x7F, 0x80, 0x28, 0x07, 0x70, 0x0A, 0x00, 0xFF, 0x00, 0x40, 0x00, 0x40,
0x00, 0x00, 0x00, 0x00, 0x7F, 0xE0, 0x10, 0x0E, 0xB8, 0x04, 0x03, 0xFF, 0x00, 0x00, 0x00, 0x00,
0x00, 0x02, 0x00, 0x00, 0x73, 0x20, 0x00, 0x1D, 0xDC, 0x00, 0x02, 0x67, 0x00, 0x00, 0x40, 0x00,
0x00, 0x05, 0x00, 0x00, 0xF1, 0x20, 0x00, 0x3B, 0xEE, 0x00, 0x02, 0x47, 0x80, 0x00, 0xA0, 0x00,
0x00, 0x02, 0x00, 0x00, 0x91, 0x20, 0x00, 0x07, 0x70, 0x00, 0x02, 0x44, 0x80, 0x00, 0x40, 0x00,
0x00, 0x00, 0x02, 0x00, 0x91, 0x00, 0x00, 0x06, 0x30, 0x00, 0x00, 0x44, 0x80, 0x40, 0x00, 0x00,
0x00, 0x00, 0x05, 0x00, 0x91, 0x00, 0x00, 0x04, 0x10, 0x00, 0x00, 0x44, 0x80, 0xA0, 0x00, 0x00,
0x00, 0x00, 0x02, 0x00, 0x91, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x80, 0x40, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x91, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x44, 0x80, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x55, 0x54,
0x2A, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA, 0xAA,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x08, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22, 0x22,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x08, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88, 0x88,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C);     
  display.clearDisplay(); 
  display.drawBitmap(0, 0, flash,128,64,1);
  display.display();
}

//
// rotary control init
//
void rotaryInit(){
Encoder.begin(INT_DATA | WRAP_DISABLE | DIRE_LEFT | IPUP_ENABLE | RMOD_X1 | RGB_ENCODER);
    
  Encoder.writeCounter((int32_t)0); /* Reset the counter value */
  Encoder.writeMax((int32_t)255); /* Set the maximum threshold*/
  Encoder.writeMin((int32_t)0); /* Set the minimum threshold */
  Encoder.writeStep((int32_t)1); /* Set the step to 8*/
  Encoder.writeInterruptConfig(0xff); // Enable all the interrupts
  Encoder.writeFadeRGB(5); //Set the fade with 5ms step
  Encoder.writeAntibouncingPeriod(25);  /* Set an anti-bouncing of 200ms */
  Encoder.writeDoublePushPeriod(0);  /*Set 0 to disable double push */
      Encoder.writeLEDR(0x00);
      Encoder.writeLEDG(0xFF);
      Encoder.writeLEDB(0xEE);  
}

//
// display Item
//
void displayMenuItem(String item, byte position, boolean selected)
{
    if(selected)
    {
      display.setTextColor(BLACK, WHITE);
    }else
    {
      display.setTextColor(WHITE);
    }
    display.setCursor(0, position);
    display.print("> "+item);
}

//
// display Menu
//
void displayMenuPage(String menuItem, String value)
{
    display.setTextSize(1);
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(5, 0);
    display.print(menuItem);
    display.drawFastHLine(0,10,128,WHITE);
    display.setCursor(5, 20);
    display.print("Value");
    display.setTextSize(2);
    display.setCursor(5, 32);
    display.print(value);
    display.setTextSize(2);
    display.display();
}

//
// Oled Menu
//
void drawMenu()
  {
  String menuItem[7] = { "FX Mode", "FX Speed", "Brightness", "RED", "GREEN", "BLUE", "RESET" };  
  if (page==1) 
  {    
    display.setTextSize(1);
    display.clearDisplay();
    display.setTextColor(WHITE);
    display.setCursor(18, 2);
    display.print("SparkLED Control");
    display.drawFastHLine(0,15,128,WHITE);

    if(menuitem==1 && frame ==1)
    {   
      displayMenuItem(menuItem[0], 20,true);
      displayMenuItem(menuItem[1], 32,false);
      displayMenuItem(menuItem[2], 45,false);
    }
    else if(menuitem == 2 && frame == 1)
    {
      displayMenuItem(menuItem[0], 20,false);
      displayMenuItem(menuItem[1], 32,true);
      displayMenuItem(menuItem[2], 45,false);
    }
    else if(menuitem == 3 && frame == 1)
    {
      displayMenuItem(menuItem[0], 20,false);
      displayMenuItem(menuItem[1], 32,false);
      displayMenuItem(menuItem[2], 45,true);
    }
     else if(menuitem == 4 && frame == 2)
    {
      displayMenuItem(menuItem[1], 20,false);
      displayMenuItem(menuItem[2], 32,false);
      displayMenuItem(menuItem[3], 45,true);
    }

      else if(menuitem == 3 && frame == 2)
    {
      displayMenuItem(menuItem[1], 20,false);
      displayMenuItem(menuItem[2], 32,true);
      displayMenuItem(menuItem[3], 45,false);
    }
    else if(menuitem == 2 && frame == 2)
    {
      displayMenuItem(menuItem[1], 20,true);
      displayMenuItem(menuItem[2], 32,false);
      displayMenuItem(menuItem[3], 45,false);
    }
    
    else if(menuitem == 5 && frame == 3)
    {
      displayMenuItem(menuItem[2], 20,false);
      displayMenuItem(menuItem[3], 32,false);
      displayMenuItem(menuItem[4], 45,true);
    }

    else if(menuitem == 6 && frame == 4)
    {
      displayMenuItem(menuItem[3], 20,false);
      displayMenuItem(menuItem[4], 32,false);
      displayMenuItem(menuItem[5], 45,true);
    }
    
      else if(menuitem == 5 && frame == 4)
    {
      displayMenuItem(menuItem[3], 20,false);
      displayMenuItem(menuItem[4], 32,true);
      displayMenuItem(menuItem[5], 45,false);
    }
      else if(menuitem == 4 && frame == 4)
    {
      displayMenuItem(menuItem[3], 20,true);
      displayMenuItem(menuItem[4], 32,false);
      displayMenuItem(menuItem[5], 45,false);
    }
      else if(menuitem == 7 && frame == 5)
    {
      displayMenuItem(menuItem[4], 20,false);
      displayMenuItem(menuItem[5], 32,false);
      displayMenuItem(menuItem[6], 45,true);
    }
      else if(menuitem == 6 && frame == 5)
    {
      displayMenuItem(menuItem[4], 20,false);
      displayMenuItem(menuItem[5], 32,true);
      displayMenuItem(menuItem[6], 45,false);
    }
      else if(menuitem == 5 && frame == 5)
    {
      displayMenuItem(menuItem[4], 20,true);
      displayMenuItem(menuItem[5], 32,false);
      displayMenuItem(menuItem[6], 45,false);
    }
      else if(menuitem == 3 && frame == 3)
    {
      displayMenuItem(menuItem[2], 20,true);
      displayMenuItem(menuItem[3], 32,false);
      displayMenuItem(menuItem[4], 45,false);
    }
        else if(menuitem == 2 && frame == 2)
    {
      displayMenuItem(menuItem[1], 20,true);
      displayMenuItem(menuItem[2], 32,false);
      displayMenuItem(menuItem[3], 45,false);
    }
    else if(menuitem == 4 && frame == 3)
    {
      displayMenuItem(menuItem[2], 20,false);
      displayMenuItem(menuItem[3], 32,true);
      displayMenuItem(menuItem[4], 45,false);
    }   
    display.display();
  }
  else if (page==2 && menuitem == 1) 
  {    
   String fxName = patterns[tempArray[0]].name;
   displayMenuPage(menuItem[0], fxName);
  }
  else if (page==2 && menuitem > 1) 
  {
   displayMenuPage(menuItem[menuitem-1], String(tempArray[(menuitem-1)]));
  }
}

void resetDefaults()
  {
   //do something
  }

void syncMenu()
  {
    tempArray[0] = currentPatternIndex; // update fxmode
    tempArray[1] = speed; // update speed
    tempArray[2] = brightness; // update brightness 
  }

void updateMenu(byte menuUpdate)
{
  switch (menuUpdate) {
    case 0:
      tempArray[0] = currentPatternIndex; // update fxmode
      break;
    case 1:
      tempArray[1] = speed; // update speed
      break;
    case 2:
      tempArray[2] = brightness; // update brightness 
      break;
    default:
      // default is optional
      break;
    }
  drawMenu();
}

void syncRotaryRGB()
{
  long HexRGB = ((long)leds[0].r << 16) | ((long)leds[0].g << 8 ) | (long)leds[0].b; // get value and convert.
  Encoder.writeRGBCode(HexRGB);
}

void processEncoder()
{
  if (up && page == 1 ) // Rotary Encoder Counter Clockwise 
    {
      up = false;
      if(menuitem==2 && frame ==2 || menuitem==3 && frame ==3 || menuitem==4 && frame ==4 || menuitem==5 && frame ==5)
        frame--;
      lastMenuItem = menuitem;
      if (menuitem>1)
        menuitem--; 
    }
    
    else if (up && page == 2 && menuitem<7 ) 
    {
      up = false;
      if(tempArray[(menuitem-1)] > 0)
      tempArray[(menuitem-1)]--;
    }

    if (down && page == 1) //We have turned the Rotary Encoder Clockwise
    {
      down = false;
      if(menuitem==3 && lastMenuItem == 2 || menuitem==4 && lastMenuItem == 3 || menuitem==5 && lastMenuItem == 4 || menuitem==6 && lastMenuItem == 5 && frame!=5)
        frame ++;
    lastMenuItem = menuitem;
    if (menuitem<7) 
      menuitem++;
    }
    
    else if (down && page == 2 && menuitem == 1) 
    {
      down = false;
      if(tempArray[0] < (patternCount-1))
        tempArray[0]++;
    }
    
    else if (down && page == 2 && menuitem>1) 
    {
    down = false;
    if(tempArray[menuitem-1] < 255)
      tempArray[menuitem-1]++;
    }
    
    if (middle) //Middle Button is Pressed
    {
      middle = false;
      if(page == 1 && menuitem ==7)// Reset
        resetDefaults();
      else if (page == 1 && menuitem<7)
        page=2;
      else if (page == 2)
      {
        if (menuitem == 1){
          setPattern(tempArray[0]);
          sendInt(currentPatternIndex);
          } //Set Mode
        else if (menuitem == 2){
          speed = tempArray[1];
          broadcastInt("speed", speed);
          sendInt(speed);
          } //Set Speed
        else if (menuitem == 3){
          setBrightness(tempArray[2]);
          sendInt(brightness);
          } // Set Brightness
        
        page=1; 
      }
    }  
}
