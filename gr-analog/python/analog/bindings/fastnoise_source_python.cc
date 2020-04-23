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

#include <gnuradio/analog/fastnoise_source.h>

template <typename T>
void bind_fastnoise_source_template(py::module& m, const char* classname)
{
    using fastnoise_source = gr::analog::fastnoise_source<T>;

    py::class_<fastnoise_source,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<fastnoise_source>>(m, classname)
        .def(py::init(&gr::analog::fastnoise_source<T>::make),
             py::arg("type"),
             py::arg("ampl"),
             py::arg("seed") = 0,
             py::arg("samples") = 1024 * 16)

        .def("sample", &fastnoise_source::sample)
        .def("sample_unbiased", &fastnoise_source::sample_unbiased)
        .def("samples", &fastnoise_source::samples)

        .def("set_type", &fastnoise_source::set_type, py::arg("type"))
        .def("set_amplitude", &fastnoise_source::set_amplitude, py::arg("amplitude"))
        .def("type", &fastnoise_source::type)
        .def("amplitude", &fastnoise_source::amplitude)

        ;
}

void bind_fastnoise_source(py::module& m)
{
    bind_fastnoise_source_template<std::int16_t>(m, "fastnoise_source_s");
    bind_fastnoise_source_template<std::int32_t>(m, "fastnoise_source_i");
    bind_fastnoise_source_template<float>(m, "fastnoise_source_f");
    bind_fastnoise_source_template<gr_complex>(m, "fastnoise_source_c");
}
