#include <Rcpp.h>
#include <netcdf.h>
#include <stdlib.h>
#include <string.h>


using namespace Rcpp;

//' Open a connection.
//'
//' Pass  a character data source name to the internal nc_open library function.
//' @param dsn data source name, i.e. file path or server path
//' @export
//' @examples
//' f1 <- "S2008001.L3b_DAY_CHL.nc"
//' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
//' con <-  ncran_open(f_l3b)
//' ncran_close(con)
//' f2 <- "S2008001.L3m_DAY_CHL_chlor_a_9km.nc"
//' f_l3m <- system.file("extdata", "oceandata", f2, package = "ncran")
//' con <-  ncran_open(f_l3m)
//' ncran_close(con)
//' #u_cst <- "http://coastwatch.pfeg.noaa.gov/erddap/griddap/erdQSwind3da"
//' # Rnc_open(u_cst)
// [[Rcpp::export]]
int ncran_open(CharacterVector dsn) {
  int ncid;
  std::string fname0 = Rcpp::as<std::string>(dsn);
  nc_open(fname0.c_str(), NC_NOWRITE, &ncid);
  return ncid;
}

//' Close a connection.
//'
//' @param ncid file connection provided by `ncran_open`
//' @export
//' @examples
//' f1 <- "S2008001.L3b_DAY_CHL.nc"
//' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
//' con <- ncran_open(f_l3b)
//' ncran_close(con)
// [[Rcpp::export]]
void ncran_close(int ncid) {
  nc_close(ncid);
}
//' Inquire group IDs
//'
//' @inheritParams ncran_close
//' @export
//' @examples
//' f1 <- "S2008001.L3b_DAY_CHL.nc"
//' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran)
//' con <- ncran_open(f_l3b)
//' ncran_inq_grps(con)
//' ncran_close(con)
// [[Rcpp::export]]
IntegerVector ncran_inq_grps(int ncid) {
  int numgrps;
  nc_inq_grps(ncid, &numgrps, NULL);
  int *ncids = new int[numgrps];
  nc_inq_grps(ncid, NULL, ncids);
  IntegerVector grpids(numgrps);
  for (int i = 0; i < numgrps; i++) grpids[i] = ncids[i];
  return grpids;
}

//' Dimension inquiry
//'
//' @param grpid open connection
//' @export
//' @examples
//' f1 <- "S2008001.L3b_DAY_CHL.nc"
//' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
//' con <- ncran_open(f_l3b)
//' groupids <- ncran_inq_grps(con)
//' ncran_inq_dims(groupids[1])
//' ncran_close(con)
// [[Rcpp::export]]
int ncran_inq_dims(int grpid) {

  int ndims;
  nc_inq_ndims(grpid, &ndims);

  return(ndims);
}

