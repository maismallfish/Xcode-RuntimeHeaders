/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "DVTLayerHostingView.h"

@class NSArray, NSMapTable, NSMutableArray;

// Not exported
@interface GPURenderBufferCanvas : DVTLayerHostingView
{
    NSMutableArray *_displayedRenderBuffers;
    NSMapTable *_renderBufferObsTokens;
    NSArray *_renderBufferViewConstraints;
    BOOL _landscape;
}

+ (BOOL)requiresConstraintBasedLayout;
+ (id)separatorColor;
@property(nonatomic) BOOL landscape; // @synthesize landscape=_landscape;
- (void).cxx_destruct;
- (struct CGSize)fauxUIElementSize:(id)arg1;
- (struct CGPoint)fauxUIElementPosition:(id)arg1;
- (void)fauxUIElement:(id)arg1 setFocus:(id)arg2;
- (BOOL)isFauxUIElementFocusable:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;
@property(retain, nonatomic) NSArray *renderBuffers; // @dynamic renderBuffers;
- (void)refreshLayout;
- (void)updateConstraints;
- (void)updateRenderBufferViewConstraints;
- (id)constraintsForRenderBufferViews:(id)arg1;
- (void)setRenderBufferViewConstraints:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawSeperatorLines:(struct CGRect)arg1;
- (BOOL)canBecomeKeyView;
- (BOOL)acceptsFirstResponder;
- (void)setup;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

