#include <iostream>
#include "ticpp.h"

void Generate1()
{
  TiXmlDocument doc;
  TiXmlDeclaration* decl = new TiXmlDeclaration( "1.0", "", "" );
  doc.LinkEndChild( decl );
  
  TiXmlElement* element = new TiXmlElement( "Hello" );
  doc.LinkEndChild( element );
  
  TiXmlText* text = new TiXmlText( "Opening a new salutation" );
  element->LinkEndChild( text );
  
  TiXmlElement* element2 = new TiXmlElement( "Greeting" );
  element2->SetAttribute("value","5");
  element2->SetAttribute("name","me");
  element->LinkEndChild( element2 );
  
  TiXmlText* text2 = new TiXmlText( "" );
  element2->LinkEndChild( text2 );
  
  doc.SaveFile( "madeByHand1.xml" );
}

void Generate2()
{
  TiXmlDocument doc;
  TiXmlDeclaration* decl = new TiXmlDeclaration( "1.0", "", "" );
  doc.LinkEndChild( decl );
  
  TiXmlElement* element = new TiXmlElement( "Hello" );
  doc.LinkEndChild( element );
  
  TiXmlText* text = new TiXmlText( "Opening a new salutation" );
  element->LinkEndChild( text );
  
  
  for(long i=0; i<3; i++)
    {
      TiXmlElement* element2 = new TiXmlElement( "Greeting" );
      TiXmlText* text2 = new TiXmlText( "" );
      
      element2->SetAttribute("value","5");
      element2->SetAttribute("name","me");
      
      element->LinkEndChild( element2 );
      element2->LinkEndChild( text2 );
    }


  doc.SaveFile( "madeByHand2.xml" );
}


int main()
{
        // whatch out for exceptions
  try
    {
      Generate1();
      Generate2();
    }
  catch(ticpp::Exception& ex)
    {
      std::cout << ex.what();
    }
  
  return -1;
}
