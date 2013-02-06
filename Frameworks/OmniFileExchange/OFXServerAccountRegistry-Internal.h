// Copyright 2008-2012 Omni Development, Inc. All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFileExchange/OFXServerAccountRegistry.h>

@class OFXServerAccount;

@interface OFXServerAccountRegistry ()

@property(nonatomic,readonly) NSURL *accountsDirectoryURL;

- (NSURL *)localStoreURLForAccount:(OFXServerAccount *)account; // Where we put our metadata and the containers.

- (BOOL)_cleanupAccountAfterRemoval:(OFXServerAccount *)account error:(NSError **)outError;

@end
