/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "IDEDebugNavigableModel-Protocol.h"

@class DBGProcess, IDELaunchSession, NSData, NSString, NSURL;

@interface DBGMemoryData : NSObject <IDEDebugNavigableModel>
{
    NSString *_expression;
    unsigned long long _startingAddress;
    unsigned long long _numberOfBytes;
    NSData *_rawMemoryData;
    BOOL _shouldAutoUpdate;
    DBGProcess *_parentProcess;
    NSString *_uuid;
    NSURL *_url;
}

@property(readonly) NSURL *url; // @synthesize url=_url;
@property(readonly) NSString *uuid; // @synthesize uuid=_uuid;
@property(retain) DBGProcess *parentProcess; // @synthesize parentProcess=_parentProcess;
@property BOOL shouldAutoUpdate; // @synthesize shouldAutoUpdate=_shouldAutoUpdate;
@property(copy) NSData *rawMemoryData; // @synthesize rawMemoryData=_rawMemoryData;
@property unsigned long long numberOfBytes; // @synthesize numberOfBytes=_numberOfBytes;
@property unsigned long long startingAddress; // @synthesize startingAddress=_startingAddress;
@property(copy) NSString *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (void)_updateUsingExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2;
- (void)updateNumberOfBytes:(unsigned long long)arg1;
- (void)updateUsingExpression:(id)arg1;
- (void)update;
- (void)autoUpdate;
@property(readonly) IDELaunchSession *launchSession;
@property(readonly) NSString *associatedProcessUUID;
- (id)initWithExpression:(id)arg1 numberOfBytes:(unsigned long long)arg2 process:(id)arg3;

@end
