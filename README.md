Projective Geometry
===================

[![Gitpod Ready-to-Code](https://img.shields.io/badge/Gitpod-Ready--to--Code-blue?logo=gitpod)](https://gitpod.io/#https://github.com/luk036/projective)
[![Build Status](https://travis-ci.org/luk036/projective.svg?branch=master)](https://travis-ci.org/luk036/projective)
[![Documentation Status](https://readthedocs.org/projects/projective/badge/?version=latest)](https://projective.readthedocs.io/en/latest/?badge=latest)
[![codecov](https://codecov.io/gh/luk036/projective/branch/master/graph/badge.svg)](https://codecov.io/gh/luk036/projective)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/2791a40d6cd94011b8c36d7ad6b9b8f0)](https://app.codacy.com/app/luk036/projective?utm_source=github.com&utm_medium=referral&utm_content=luk036/projective&utm_campaign=badger)
[![CodeFactor](https://www.codefactor.io/repository/github/luk036/projective/badge)](https://www.codefactor.io/repository/github/luk036/projective)
[![BCH compliance](https://bettercodehub.com/edge/badge/luk036/projective?branch=master)](https://bettercodehub.com/)
[![Documentation](https://img.shields.io/badge/Documentation-latest-blue.svg)](https://luk036.github.io/doc/projective/index.html)

Configuration inspided by Modern C++ Continuous Integration

Features
--------

-   constexpr aware


Installation and run
--------------------

To start with gitpod:

    ./envconfig.sh  # first time
    conda activate /workspace/conda/arcw

To build with Ninja:

    mkdir build && cd build
    cmake -GNinja ..
    ninja all

To run CTest:

    ninja test
