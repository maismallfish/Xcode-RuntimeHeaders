/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "JSExport-Protocol.h"

@protocol SCNSphereJSExport <JSExport>
+ (id)sphereWithRadius:(double)arg1;
@property(nonatomic, getter=isHemispheric) BOOL hemispheric;
@property(nonatomic) long long segmentCount;
@property(nonatomic, getter=isGeodesic) BOOL geodesic;
@property(nonatomic) double radius;
@end
