/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class XCSyntaxColoringPrefsModule;

@interface XCSyntaxPreference : NSObject
{
    XCSyntaxColoringPrefsModule *_prefs;
}

- (id)fontName;
- (id)name;
- (id)identifier;
- (void)setColor:(id)arg1;
- (id)color;
- (BOOL)canChangeColor;
- (void)setFont:(id)arg1;
- (id)font;
- (BOOL)canChangeFont;
- (id)theme;
- (void)dealloc;
- (id)prefs;
- (id)initWithPrefs:(id)arg1;

@end
