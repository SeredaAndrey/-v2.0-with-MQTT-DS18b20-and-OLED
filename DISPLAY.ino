void dispRefr ()
{
  if ( currentMillis - dispMillis > dispRefrinterval)
  {
    dispMillis = currentMillis;
    if ( flagDisp == 1 )
    {
      display.setTextSize ( 4 );
      display.setTextColor ( WHITE );
      display.setCursor ( 30 , 2 );
      display.clearDisplay ();
      display.println ( TnowR );

      if      ( Mode == 0 ) { display.drawRoundRect (1,  0, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 5 ,  2 ); display.println ( "OFF" );
                              //display.drawRoundRect (1, 11, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); 
                                if      ( EcoORComf == 0 ) { display.setCursor ( 5 , 13 ); display.println ( "ECO" );}
                                else if ( EcoORComf == 1 ) { display.setCursor ( 2 , 13 ); display.println ( "COMF" );}
                              //display.drawRoundRect (1, 22, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 8 , 24 ); display.println ( "ON" ); }
      else if ( Mode == 1 ) { //display.drawRoundRect (1,  0, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 5 ,  2 ); display.println ( "OFF" );
                                if      ( RadiatorsOnOff == 1 ) { display.fillRoundRect (1, 11, 26, 10, 2, 1); display.setTextColor ( BLACK ); }
                                else if ( RadiatorsOnOff == 0 ) { display.drawRoundRect (1, 11, 26, 10, 2, 1); display.setTextColor ( WHITE ); }
                              display.setTextSize ( 1 ); 
                                if      ( EcoORComf == 0 ) { display.setCursor ( 5 , 13 ); display.println ( "ECO" );}
                                else if ( EcoORComf == 1 ) { display.setCursor ( 2 , 13 ); display.println ( "COMF" );}
                              //display.drawRoundRect (1, 22, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 8 , 24 ); display.println ( "ON" ); }
      else if ( Mode == 2 ) { //display.drawRoundRect (1,  0, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 5 ,  2 ); display.println ( "OFF" );
                              //display.drawRoundRect (1, 11, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); 
                                if      ( EcoORComf == 0 ) { display.setCursor ( 5 , 13 ); display.println ( "ECO" );}
                                else if ( EcoORComf == 1 ) { display.setCursor ( 2 , 13 ); display.println ( "COMF" );}
                              display.drawRoundRect (1, 22, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 8 , 24 ); display.println ( "ON" ); }
      else if ( Mode == 3 ) { //display.drawRoundRect (1,  0, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 5 ,  2 ); display.println ( "OFF" );
                              //display.drawRoundRect (1, 11, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); 
                                if      ( EcoORComf == 0 ) { display.setCursor ( 5 , 13 ); display.println ( "ECO" );}
                                else if ( EcoORComf == 1 ) { display.setCursor ( 2 , 13 ); display.println ( "COMF" );}
                              //display.drawRoundRect (1, 22, 26, 10, 2, 1); 
                              display.setTextSize ( 1 ); display.setTextColor ( WHITE ); display.setCursor ( 8 , 24 ); display.println ( "ON" ); }                        
      display.display ();
      flagDisp = 0; 
    }
    else if ( flagDisp == 0 ) 
    {
      display.setTextSize ( 4 );
      display.setTextColor ( WHITE );
      display.setCursor ( 6 , 2 );
      display.clearDisplay ();
      display.println ( GetTime() );
      display.display ();
      flagDisp = 1;
    }
  }
}
