/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GPUDebuggerFoundation/GPUTraceProgramItem.h>

@class GPUTraceGroupItem;

@interface GPUTraceProgramGroup : GPUTraceProgramItem
{
    GPUTraceGroupItem *_relatedDrawsGroupItem;
}

@property(readonly, nonatomic) GPUTraceGroupItem *relatedDrawsGroupItem; // @synthesize relatedDrawsGroupItem=_relatedDrawsGroupItem;
- (void).cxx_destruct;
- (unsigned int)functionIndex;
- (id)stateMirror;
- (id)associatedDrawItem;
- (id)associatedTraceItem;
- (void)primitiveInvalidate;
- (void)addNewDrawItem:(id)arg1;
- (id)relatedDrawItems;
- (id)initWithController:(id)arg1 parent:(id)arg2 programID:(unsigned int)arg3 unrealizedResourceObject:(const void *)arg4 context:(unsigned long long)arg5 label:(id)arg6;

@end
