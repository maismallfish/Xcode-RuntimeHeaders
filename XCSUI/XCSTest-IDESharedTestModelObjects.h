/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "XCSTest.h"

#import "IDESharedTests_TestRun-Protocol.h"

@class IDESchemeActionRunDestinationRecord, IDESchemeActionsInvocationRecord, NSArray, NSImage, NSString;

@interface XCSTest (IDESharedTestModelObjects) <IDESharedTests_TestRun>
- (void)ide_sharedTests_schemeActionsInvocationRecord:(id)arg1;
@property(readonly, nonatomic) BOOL ide_sharedTests_fetchesSchemeActionsInvocationRecordAsync;
@property(readonly, nonatomic) id <IDESharedTests_Device> ide_sharedTests_testedDevice;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_perfMetrics;
@property(readonly, copy, nonatomic) NSArray *ide_sharedTests_failureSummaries;
- (void)setTestClassName:(id)arg1;
- (id)testClassName;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testClassName;
- (void)setTestName:(id)arg1;
- (id)testName;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_testName;
@property(readonly, nonatomic) NSImage *ide_sharedTests_statusImage;
@property(readonly, copy, nonatomic) NSString *ide_sharedTests_UUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) IDESchemeActionRunDestinationRecord *ide_sharedTests_schemeActionRunDestinationRecord;
@property(readonly, nonatomic) IDESchemeActionsInvocationRecord *ide_sharedTests_schemeActionsInvocationRecord;
@property(readonly) Class superclass;
@end
