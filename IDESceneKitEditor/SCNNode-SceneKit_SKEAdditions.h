/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "SCNNode.h"

@class NSString;

@interface SCNNode (SceneKit_SKEAdditions)
+ (id)ide_attributeInfoNames;
+ (id)keyPathsForValuesAffectingIde_displayName;
- (BOOL)ide_canBenefitFromFlattening;
- (BOOL)ide_hasNodeAttributes;
- (BOOL)hasPotentialPointOfView;
- (BOOL)isPotentialPointOfView;
- (id)ide_attributeInfo3;
- (id)ide_attributeInfo2;
- (id)ide_attributeInfo1;
- (id)ide_attributeInfo0;
- (id)ide_attributeInfos;
- (unsigned long long)ide_attributesInfo;
@property(readonly) BOOL ide_shouldAppearInSceneGraph;
@property(readonly) BOOL ide_shouldBeRemovedFromSceneGraphUponSave;
@property BOOL ide_showBoundingBox;
@property double ide_rotationAngle;
@property CDStruct_39925896 ide_rotationAxis;
- (id)ide_icon;
- (id)ide_attributes;
- (long long)polygonCount;
@property(readonly) NSString *ide_displayName;
- (id)ske_displayNameForUndoKVOKeypath:(id)arg1;
- (id)ske_undoKVOKeypaths;
- (long long)ide_renderingOrder;
- (void)setIde_renderingOrder:(long long)arg1;
@end

