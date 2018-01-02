/*
 Copyright 2015-present the Material Components for iOS authors. All Rights Reserved.

 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <CoreGraphics/CoreGraphics.h>
#import <Foundation/Foundation.h>

#ifdef NS_TYPED_EXTENSIBLE_ENUM // This macro is introduced in Xcode 9.
#define MDC_SHADOW_ELEVATION_TYPED_EXTENSIBLE_ENUM NS_TYPED_EXTENSIBLE_ENUM
#elif __has_attribute(swift_wrapper) // Backwards compatibility for Xcode 8.
#define MDC_SHADOW_ELEVATION_TYPED_EXTENSIBLE_ENUM __attribute__((swift_wrapper(struct)))
#else
#define MDC_SHADOW_ELEVATION_TYPED_EXTENSIBLE_ENUM
#endif

/**
 Constants for elevation: the relative depth, or distance, between two surfaces along the z-axis.
 https://material.io/guidelines/material-design/elevation-shadows.html
 */
NS_SWIFT_NAME(ShadowElevation)
typedef CGFloat MDCShadowElevation MDC_SHADOW_ELEVATION_TYPED_EXTENSIBLE_ENUM;

/** The shadow elevation of the app bar. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationAppBar;

/** The shadow elevation of a card in its picked up state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationCardPickedUp;

/** The shadow elevation of a card in its resting state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationCardResting;

/** The shadow elevation of dialogs. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationDialog;

/** The shadow elevation of the floating action button in its pressed state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationFABPressed;

/** The shadow elevation of the floating action button in its resting state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationFABResting;

/** The shadow elevation of a menu. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationMenu;

/** The shadow elevation of a modal bottom sheet. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationModalBottomSheet;

/** The shadow elevation of the navigation drawer. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationNavDrawer;

/** No shadow elevation at all. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationNone;

/** The shadow elevation of a picker. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationPicker;

/** The shadow elevation of the quick entry in the scrolled state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationQuickEntry;

/** The shadow elevation of the quick entry in the resting state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationQuickEntryResting;

/** The shadow elevation of a raised button in the pressed state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationRaisedButtonPressed;

/** The shadow elevation of a raised button in the resting state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationRaisedButtonResting;

/** The shadow elevation of a refresh indicator. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationRefresh;

/** The shadow elevation of the right drawer. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationRightDrawer;

/** The shadow elevation of the search bar in the resting state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationSearchBarResting;

/** The shadow elevation of the search bar in the scrolled state. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationSearchBarScrolled;

/** The shadow elevation of the snackbar. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationSnackbar;

/** The shadow elevation of a sub menu (+1 for each additional sub menu). */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationSubMenu;

/** The shadow elevation of a switch. */
FOUNDATION_EXPORT const MDCShadowElevation MDCShadowElevationSwitch
    __deprecated_msg("Prefer UISwitch over MDCSwitch.");
