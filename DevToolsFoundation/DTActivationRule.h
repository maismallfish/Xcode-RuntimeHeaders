/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DTPlugInXMLConfiguration-Protocol.h"

@class NSPredicate, NSString;

@interface DTActivationRule : NSObject <DTPlugInXMLConfiguration>
{
    NSString *_kind;
    NSString *_identifier;
    NSString *_versionString;
    NSPredicate *_query;
}

+ (long long)integerValueForVersionString:(id)arg1;
+ (id)keyPathsForKeysAffectingPredicate;
@property(copy) NSPredicate *query; // @synthesize query=_query;
@property(copy) NSString *versionString; // @synthesize versionString=_versionString;
@property(copy) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy) NSString *kind; // @synthesize kind=_kind;
- (void)finishConfigurationWithElement:(id)arg1;
- (void)configureWithElement:(id)arg1;
- (void)setElement:(id)arg1;
- (id)element;
@property(readonly) NSPredicate *predicate;
- (void)dealloc;
- (id)_predicateWithIdentifier:(id)arg1 versionString:(id)arg2 query:(id)arg3;

@end

