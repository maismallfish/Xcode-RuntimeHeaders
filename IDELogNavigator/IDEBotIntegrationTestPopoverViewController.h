/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTViewController.h"

@class NSImage, NSImageView, NSString, NSView;

@interface IDEBotIntegrationTestPopoverViewController : DVTViewController
{
    NSString *_integrationTitle;
    NSString *_timestamp;
    NSString *_testsSuccessText;
    NSString *_testsFailedText;
    id _clickHandler;
    NSImage *_testsFailedIcon;
    NSImage *_testsSucceededIcon;
    NSView *_testCountsHostView;
    NSImageView *_integrationFailedImageView;
}

@property __weak NSImageView *integrationFailedImageView; // @synthesize integrationFailedImageView=_integrationFailedImageView;
@property __weak NSView *testCountsHostView; // @synthesize testCountsHostView=_testCountsHostView;
@property(retain) NSImage *testsSucceededIcon; // @synthesize testsSucceededIcon=_testsSucceededIcon;
@property(retain) NSImage *testsFailedIcon; // @synthesize testsFailedIcon=_testsFailedIcon;
@property(copy) id clickHandler; // @synthesize clickHandler=_clickHandler;
@property(copy) NSString *testsFailedText; // @synthesize testsFailedText=_testsFailedText;
@property(copy) NSString *testsSuccessText; // @synthesize testsSuccessText=_testsSuccessText;
@property(copy) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSString *integrationTitle; // @synthesize integrationTitle=_integrationTitle;
- (void).cxx_destruct;
- (void)showIntegrationTestsResults:(id)arg1;
- (void)showOrHideIntegrationFailedControls:(BOOL)arg1;
- (void)loadView;

@end

