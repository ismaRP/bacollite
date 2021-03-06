#include <Rcpp.h>
using namespace Rcpp;

// This is a simple example of exporting a C++ function to R. You can
// source this function into an R session using the Rcpp::sourceCpp
// function (or via the Source button on the editor toolbar). Learn
// more about Rcpp at:
//
//   http://www.rcpp.org/
//   http://adv-r.had.co.nz/Rcpp.html
//   http://gallery.rcpp.org/
//


// You can include R code blocks in C++ files processed with sourceCpp
// (useful for testing and development). The R code will be automatically
// run after the compilation.
//

/*** R
timesTwo(42)
*/


//The following commented-out functions were used as stepping stones
//To get Julie Wilsons peak mass code working in R....

/*// [[Rcpp::export]]
CharacterVector helloWorld(){

	char hello[128];

	sprintf(hello,"Hello World");

  CharacterVector x = CharacterVector::create( hello ) ;
  return(x);
}
*/




/*// [[Rcpp::export]]
CharacterVector helloPerson(CharacterVector cvname){

	std::string fname = Rcpp::as<std::string>(cvname);

	char hello[128];

	sprintf(hello,"Hello %s",fname.c_str());
  CharacterVector x = CharacterVector::create(hello ) ;
  return(x);
}
*/


/*// [[Rcpp::export]]
NumericVector helloNvec(CharacterVector cvname){

	std::string fname = Rcpp::as<std::string>(cvname);

	char hello[128];

	sprintf(hello,"Hello %s",fname.c_str());
  CharacterVector x = CharacterVector::create(hello ) ;

  	NumericVector mass = NumericVector::create(2345,6789,1234);
  	NumericVector prob = NumericVector::create(1.0,0.7,0.2);

  	return(mass);
}*/


/*// [[Rcpp::export]]
DataFrame helloDfram(CharacterVector cvname){

	std::string fname = Rcpp::as<std::string>(cvname);

	char hello[128];

	sprintf(hello,"Hello %s",fname.c_str());
  CharacterVector x = CharacterVector::create(hello ) ;

  	NumericVector mass = NumericVector::create(2345,6789,1234);
  	NumericVector prob = NumericVector::create(1.0,0.7,0.2);

	return Rcpp::DataFrame::create( Named("mass")= mass, Named("prob") = prob);
}*/




