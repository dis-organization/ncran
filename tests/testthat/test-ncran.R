context("ncran")
f_l3b <- system.file("extdata", "oceandata", "S2008001.L3b_DAY_CHL.nc", package = "ncran")
f_l3m <- system.file("extdata", "oceandata", "S2008001.L3m_DAY_CHL_chlor_a_9km.nc", package = "ncran")
f_nofile <- file.path(dirname(f_l3b), "not.a.file")

test_that("ncran open/close works", {
  conb <-  ncran_open(f_l3b)
  expect_true(is.integer(conb))
  expect_null(ncran_close(conb))

    conm <-  ncran_open(f_l3m)
  expect_true(is.integer(conm))
  expect_null(ncran_close(conm))
})


test_that("ncran inquire groups works", {
  conb <-  ncran_open(f_l3b)
  grpids <- ncran_inq_grps(conb)
  expect_true(is.integer(grpids))
  expect_length(grpids, 2L)
  expect_null(ncran_close(conb))

  conm <-  ncran_open(f_l3m)
  grpids <- ncran_inq_grps(conm)
  expect_true(is.integer(grpids))
  expect_length(grpids, 1L)
  expect_null(ncran_close(conm))
})

test_that("ncran finds no groups in bad file", {
  expect_false(file.exists(f_nofile))
  con <- ncran_open(f_nofile)
  # tf?
 # expect_length(ncran_inq_grps(con), 0L)
  ncran_close(con)
})
