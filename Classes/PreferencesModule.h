//
//  PreferencesModule.h
//  gfxCardStatus
//
//  Created by Michal Vančo on 7/11/11.
//  Copyright 2011 Michal Vančo. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol PreferencesModule

@required
- (NSString *)title;
- (NSString *)identifier;
- (NSImage *)image;
- (NSView *)view;

@optional
- (void)willBeDisplayed;

@end
