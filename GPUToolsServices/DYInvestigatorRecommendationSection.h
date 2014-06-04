/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSAttributedString, NSMutableArray;

@interface DYInvestigatorRecommendationSection : NSObject <NSCopying, NSCoding>
{
    BOOL _ordered;
    NSAttributedString *_preamble;
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
@property(nonatomic) BOOL ordered; // @synthesize ordered=_ordered;
@property(retain, nonatomic) NSAttributedString *preamble; // @synthesize preamble=_preamble;
- (void).cxx_destruct;
- (void)printFormatted;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)description;

@end
