/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayoutView_ML.h"

@class DVTStackView_ML, IBConnectionInterfaceStyle, IBImageButton, NSArray;

@interface IBConnectionPredecessorView : DVTLayoutView_ML
{
    IBConnectionInterfaceStyle *connectionInterfaceStyle;
    IBImageButton *disconnectButton;
    DVTStackView_ML *displayValueStack;
    BOOL enabled;
    id representedObject;
    id <IBConnectionPredecessorViewDelegate> _delegate;
}

+ (id)defaultTitleFieldWithInterfaceStyle:(id)arg1;
@property __weak id <IBConnectionPredecessorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled;
@property(retain) id representedObject; // @synthesize representedObject;
- (void).cxx_destruct;
- (void)disconnect:(id)arg1;
- (void)layoutBottomUp;
- (void)layoutTopDown;
- (struct CGRect)disconnectButtonForBounds:(struct CGRect)arg1;
- (double)displayValueRightInset;
- (double)displayValueLeftInset;
- (double)displayValueLineHeight;
- (BOOL)isFlipped;
- (void)refreshTitleFieldTextColor;
@property(copy) NSArray *displayValues;
- (id)titleFields;
- (id)connectionInterfaceStyle;
- (id)initWithFrame:(struct CGRect)arg1 andInterfaceStyle:(id)arg2;

@end

