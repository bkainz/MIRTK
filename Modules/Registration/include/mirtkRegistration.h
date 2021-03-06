/*
 * Medical Image Registration ToolKit (MIRTK)
 *
 * Copyright 2013-2015 Imperial College London
 * Copyright 2013-2015 Andreas Schuh
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MIRTK_Registration_H
#define MIRTK_Registration_H

#include <mirtkRegistrationConfig.h>

// Base classes
#include <mirtkDataFidelity.h>
#include <mirtkImageSimilarity.h>
#include <mirtkProbabilisticImageSimilarity.h>
#include <mirtkGradientFieldSimilarity.h>

#if MIRTK_Registration_WITH_PointSet
#  include <mirtkPointSetDistance.h>
#  include <mirtkSurfaceDistance.h>
#endif // MIRTK_Registration_WITH_PointSet

// Image (dis-)similarities
#include <mirtkSimilarityMeasure.h>
#include <mirtkCosineOfNormalizedGradientField.h>
#include <mirtkIntensityCrossCorrelation.h>
#include <mirtkMutualImageInformation.h>
#include <mirtkNormalizedGradientFieldSimilarity.h>
#include <mirtkNormalizedIntensityCrossCorrelation.h>
#include <mirtkNormalizedMutualImageInformation.h>
#include <mirtkSumOfSquaredIntensityDifferences.h>

// Point set distances
#if MIRTK_Registration_WITH_PointSet
#  include <mirtkPointSetDistanceMeasure.h>
#  include <mirtkPointCorrespondenceDistance.h>
#  include <mirtkFiducialRegistrationError.h>
#  include <mirtkCurrentsDistance.h>
#endif // MIRTK_Registration_WITH_PointSet

// Generic registration filter
#include <mirtkRegistrationEnergy.h>
#include <mirtkRegistrationFilter.h>
#include <mirtkGenericRegistrationFilter.h>
#include <mirtkGenericRegistrationLogger.h>
#include <mirtkGenericRegistrationDebugger.h>


#endif // MIRTK_Registration_H
