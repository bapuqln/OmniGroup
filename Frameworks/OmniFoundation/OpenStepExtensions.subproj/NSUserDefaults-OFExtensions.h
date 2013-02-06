// Copyright 1997-2005, 2008, 2011, 2013 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

// Don't try to read defaults in +didLoad, they might not be registered yet.  In +didLoad, register for OFControllerDidInitNotification, then read defaults when that's posted.

#import <Foundation/NSUserDefaults.h>

#import <OmniFoundation/OFBundleRegistry.h> // For OFBundleRegistryTarget

@interface NSUserDefaults (OFExtensions) <OFBundleRegistryTarget>
@end

OB_HIDDEN extern NSString * const OFUserDefaultsRegistrationItemName; // Needed by OFBundleRegistry
