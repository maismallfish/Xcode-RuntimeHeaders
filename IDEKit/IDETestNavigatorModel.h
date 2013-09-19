/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "DVTInvalidation-Protocol.h"
#import "IDETestsInTestableObserver-Protocol.h"

@class DVTObservingToken, DVTStackBacktrace, IDEWorkspace, NSMutableArray;

@interface IDETestNavigatorModel : NSObject <IDETestsInTestableObserver, DVTInvalidation>
{
    id _viewUpdater;
    DVTObservingToken *_testableOriginObservingToken;
    DVTObservingToken *_activeRunContextObservingToken;
    BOOL _filteringByScheme;
    BOOL _loadingComplete;
    IDEWorkspace *_workspace;
    NSMutableArray *_orderedTestables;
}

+ (id)keyPathsForValuesAffectingModelItems;
+ (void)initialize;
@property(nonatomic) BOOL loadingComplete; // @synthesize loadingComplete=_loadingComplete;
@property(nonatomic) BOOL filteringByScheme; // @synthesize filteringByScheme=_filteringByScheme;
@property(retain) NSMutableArray *orderedTestables; // @synthesize orderedTestables=_orderedTestables;
@property(readonly) IDEWorkspace *workspace; // @synthesize workspace=_workspace;
- (void).cxx_destruct;
- (void)workspaceReferencedTestablesChanged;
- (void)testablesChanged:(id)arg1;
- (void)testsChanged:(id)arg1;
- (void)_stopMonitoringTests;
- (void)_startMonitoringTests:(id)arg1;
- (void)_updateObservedTestables;
- (id)modelItems;
- (id)ideModelObjectTypeIdentifier;
- (void)primitiveInvalidate;
- (id)initWithWorkspace:(id)arg1;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
