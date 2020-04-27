/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/* This file is automatically generated using bindtool */

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/dtv/dvbt2_pilotgenerator_cc.h>
// pydoc.h is automatically generated in the build directory
#include <dvbt2_pilotgenerator_cc_pydoc.h>

void bind_dvbt2_pilotgenerator_cc(py::module& m)
{

    using dvbt2_pilotgenerator_cc = ::gr::dtv::dvbt2_pilotgenerator_cc;


    py::class_<dvbt2_pilotgenerator_cc,
               gr::block,
               gr::basic_block,
               std::shared_ptr<dvbt2_pilotgenerator_cc>>(
        m, "dvbt2_pilotgenerator_cc", D(dvbt2_pilotgenerator_cc))

        .def(py::init(&dvbt2_pilotgenerator_cc::make),
             py::arg("carriermode"),
             py::arg("fftsize"),
             py::arg("pilotpattern"),
             py::arg("guardinterval"),
             py::arg("numdatasyms"),
             py::arg("paprmode"),
             py::arg("version"),
             py::arg("preamble"),
             py::arg("misogroup"),
             py::arg("equalization"),
             py::arg("bandwidth"),
             py::arg("vlength"),
             D(dvbt2_pilotgenerator_cc, make))


        ;
}