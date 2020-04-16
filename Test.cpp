// Author - Dvir Sadon

#include "doctest.h"
#include "FamilyTree.hpp"
#include <string>
using namespace family;
using namespace std;

family::Tree CreateFamilyForTest()
{
	 family::Tree T ("Yosef");
	 T.addFather("Yosef", "Yaakov") 
	 .addMother("Yosef", "Rachel")   
	 .addFather("Yaakov", "Isaac")
	 .addMother("Yaakov", "Rivka")
	 .addFather("Rachel", "Armond")
	 .addMother("Rachel", "Shaked")
	 .addFather("Isaac", "Avraham")
	 .addMother("Isaac", "Sheniqua")
	 .addFather("Rivka", "Terah")
	 .addMother("Rivka", "liger")
	 .addFather("Armond", "Ranan")
	 .addMother("Armond", "Michela")
	 .addFather("Shaked", "Ran")
	 .addMother("Shaked", "Lior")
	 .addFather("Ran", "Itai")
	 .addMother("Ran", "Miriam")
     .addFather("Miriam", "Dani")
     .addMother("Miriam", "Lioria")
     .addMother("Dani", "Shir")
     .addFather("Avraham","Palpal")
     .addMother("Avraham", "Runny");
	 return T;
 }
 
TEST_CASE("Check the relation method")
{
	Tree T = CreateFamilyForTest();
	CHECK( T.relation("Yaakov") == "father");
	CHECK( T.relation("Rachel") == "mother");
	CHECK( T.relation("Rivka") == "grandmother");
	CHECK( T.relation("Isaac") == "grandfather");
	CHECK( T.relation("Avraham") == "grand-grandfather");
	CHECK( T.relation("tovachi") == "unrelated");
	CHECK( T.relation("Ofek") == "unrelated");
	CHECK( T.relation("guy") == "unrelated");
	CHECK( T.relation("Yosef") == "me" );
	CHECK( T.relation("Yaakov") == "father" );
	CHECK( T.relation("Rachel") == "mother" );
	CHECK( T.relation("Isaac") == "grandfather" );
	CHECK( T.relation("Rivka") == "grandmother" ); 
	CHECK( T.relation("Armond") == "grandfather" );
	CHECK( T.relation("Shaked") == "grandmother" );
	CHECK( T.relation("Avraham") == "great-grandfather" );
	CHECK( T.relation("Sheniqua") == "great-grandmother" );
	CHECK( T.relation("Terah") == "great-grandfather" );
	CHECK( T.relation("liger") == "great-grandmother" );
	CHECK( T.relation("Ranan") == "great-grandfather" );
	CHECK( T.relation("Michela") == "great-grandmother" );
    CHECK( T.relation("Twiz") == "unrelated");
	CHECK( T.relation("tovachi") == "unrelated");
	CHECK( T.relation("Ariel") == "unrelated");
	CHECK( T.relation("Adele") == "unrelated");
	CHECK( T.relation("kena") == "unrelated");
	CHECK( T.relation("Ran") == "great-grandfather" );
	CHECK( T.relation("Lior") == "great-grandmother" );
	CHECK( T.relation("Itai") == "great-great-grandfather" );
	CHECK( T.relation("Miriam") == "great-great-grandmother" );
	CHECK( T.relation("Rom") == "unrelated" );
	CHECK( T.relation("Michel") == "unrelated" );
	CHECK( T.relation("lene") == "unrelated" );
	CHECK( T.relation("Shakedi") == "unrelated" );
	CHECK( T.relation("Rotem") == "unrelated" );

}

TEST_CASE("Check the find method") {
	Tree T = CreateFamilyForTest();
	CHECK( T.find("me") == "Yosef" );
	CHECK( T.find("father") == "Yaakov" );
	CHECK( T.find("mother") == "Rachel" );
	CHECK( T.find("great-great-grandfather") == "Itai" );
	CHECK( T.find("great-great-grandmother") == "Miriam" ); 
	CHECK( T.find("me") == "Yaakov" );
	CHECK( T.find("father") == "Miriam" );
	CHECK( T.find("grandfather") == "Miriam" );
    CHECK( T.find("mother") == "Rachel");
	CHECK( T.find("father") == "Yaakov");
    CHECK( T.find("grand-grandfather") == "Terah");
	CHECK( T.find("grandfather") == "Isaac");
	CHECK( T.find("grandmother") == "Rivka");
	CHECK( T.find("grand-grandfather") == "Avraham");
	CHECK( T.find("great-great-grandmother") == "Sheniqua" );
	CHECK( T.find("great-great-grandmother") == "Itai" ); 
	CHECK( T.find("great-great-grandmother") == "Ran" ); 
	CHECK( T.find("great-great-grandmother") == "Terah" ); 
}
 
 
TEST_CASE("Check the remove method") 
{
 	Tree T = CreateFamilyForTest();
    T.remove("Yosef");
	CHECK( T.relation("Rotem") == "unrelated" );
	CHECK( T.relation("Rachel") == "unrelated" );
	CHECK( T.relation("Avraham") == "unrelated" );
    CHECK( T.relation("Is") == "unrelated" );
    CHECK( T.relation("Here") == "unrelated" );
	CHECK( T.relation("Michela") == "unrelated" );
	CHECK( T.relation("Rivka") == "unrelated" );
	CHECK( T.relation("Miriam") == "unrelated" );
	CHECK( T.relation("Lior") == "unrelated" );
    CHECK( T.relation("Palpal") == "unrelated" );
    CHECK( T.relation("Corona") == "unrelated" );
    CHECK( T.relation("Time") == "unrelated" );
	CHECK( T.relation("Shaked") == "unrelated" );
	CHECK( T.relation("Rotem") == "unrelated" );
	CHECK( T.relation("Yosef") == "unrelated" );
	CHECK( T.relation("Isaac") == "unrelated" );
	CHECK( T.relation("Sheniqua") == "unrelated" );
    CHECK( T.relation("Runny") == "unrelated" );
    CHECK( T.relation("Nini") == "unrelated" );
	CHECK( T.relation("Avraham") == "unrelated" );
	CHECK( T.relation("Armond") == "unrelated" );
	CHECK( T.relation("Ranan") == "unrelated" );
    CHECK( T.relation("Rosef") == "unrelated" );
    CHECK( T.relation("Miriam") == "unrelated" );
    CHECK( T.relation("Lee") == "unrelated" );
    CHECK( T.relation("My") == "unrelated" );
    CHECK( T.relation("Billy") == "unrelated" );
    CHECK( T.relation("Strange") == "unrelated" );
    CHECK( T.relation("Addiction") == "unrelated" );
    CHECK( T.relation("Im") == "unrelated" );
    CHECK( T.relation("Unrelated") == "unrelated" );
    CHECK( T.relation("To") == "unrelated" );
    CHECK( T.relation("You") == "unrelated" );
    CHECK( T.relation("See") == "unrelated" );
}

TEST_CASE("Checks exception throwing") 
{
    Tree T = CreateFamilyForTest();
    CHECK_THROWS_AS(T.find("Not"), InvalidRelative);
    CHECK_THROWS_AS(T.find("A"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Valid"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Relative"), InvalidRelative);
    CHECK_THROWS_AS(T.find("To"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Find"), InvalidRelative);
    CHECK_THROWS_AS(T.find("In"), InvalidRelative);
    CHECK_THROWS_AS(T.find("The"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Tree"), InvalidRelative);

    CHECK_THROWS_AS(T.remove("Not"), InvalidRelative);
    CHECK_THROWS_AS(T.find("A"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Valid"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Relative"), InvalidRelative);
    CHECK_THROWS_AS(T.find("To"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Remove"), InvalidRelative);
    CHECK_THROWS_AS(T.find("From"), InvalidRelative);
    CHECK_THROWS_AS(T.find("The"), InvalidRelative);
    CHECK_THROWS_AS(T.find("Tree"), InvalidRelative);
}
