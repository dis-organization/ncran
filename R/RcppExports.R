# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' Open a connection.
#'
#' Pass  a character data source name to the internal nc_open library function.
#' @param dsn data source name, i.e. file path or server path
#' @export
#' @examples
#' f1 <- "S2008001.L3b_DAY_CHL.nc"
#' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
#' con <-  ncran_open(f_l3b)
#' ncran_close(con)
#' f2 <- "S2008001.L3m_DAY_CHL_chlor_a_9km.nc"
#' f_l3m <- system.file("extdata", "oceandata", f2, package = "ncran")
#' con <-  ncran_open(f_l3m)
#' ncran_close(con)
#' #u_cst <- "http://coastwatch.pfeg.noaa.gov/erddap/griddap/erdQSwind3da"
#' # Rnc_open(u_cst)
ncran_open <- function(dsn) {
    .Call(`_ncran_ncran_open`, dsn)
}

#' Close a connection.
#'
#' @param ncid file connection provided by `ncran_open`
#' @export
#' @examples
#' f1 <- "S2008001.L3b_DAY_CHL.nc"
#' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
#' con <- ncran_open(f_l3b)
#' ncran_close(con)
ncran_close <- function(ncid) {
    invisible(.Call(`_ncran_ncran_close`, ncid))
}

#' Inquire group IDs
#'
#' @inheritParams ncran_close
#' @export
#' @examples
#' f1 <- "S2008001.L3b_DAY_CHL.nc"
#' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
#' con <- ncran_open(f_l3b)
#' ncran_inq_grps(con)
#' ncran_close(con)
ncran_inq_grps <- function(ncid) {
    .Call(`_ncran_ncran_inq_grps`, ncid)
}

#' Dimension inquiry
#'
#' @param grpid open connection
#' @export
#' @examples
#' f1 <- "S2008001.L3b_DAY_CHL.nc"
#' f_l3b <- system.file("extdata", "oceandata", f1, package = "ncran")
#' con <- ncran_open(f_l3b)
#' groupids <- ncran_inq_grps(con)
#' ncran_inq_dims(groupids[1])
#' ncran_close(con)
ncran_inq_dims <- function(grpid) {
    .Call(`_ncran_ncran_inq_dims`, grpid)
}

