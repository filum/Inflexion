// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here
#include <iostream>
#include <vector>
#include "vector_math.h"

typedef double Real;

using namespace vmath;
using namespace std;

//! The null vector
const vec3<Real> zeroVec(0.,0.,0.);

//! Time step
const Real dTime = 0.001;

//! gravitational constant
const Real gravity = 0.0;//9.8;