/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSWindowController.h"

@class NSButton, NSComboBox, NSTextField;

@interface PBXAddVariantPanel : NSWindowController
{
    NSTextField *_titleTextField;
    NSComboBox *_comboBox;
    NSButton *_addButton;
    NSButton *_cancelButton;
}

- (void)dismissPanel:(id)arg1;
- (void)setVariants:(id)arg1;
- (void)setVariant:(id)arg1;
- (id)variant;
- (void)setTitle:(id)arg1;
- (id)title;
- (id)initWithWindowNibName:(id)arg1;

@end
