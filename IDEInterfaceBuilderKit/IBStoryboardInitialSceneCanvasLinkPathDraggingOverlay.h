/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <IDEInterfaceBuilderKit/IBCanvasOverlay.h>

@class IBStoryboardInitialSceneCanvasLinkPath;

@interface IBStoryboardInitialSceneCanvasLinkPathDraggingOverlay : IBCanvasOverlay
{
    IBStoryboardInitialSceneCanvasLinkPath *_linkPath;
    CDStruct_f6143a38 _canvasLinkPathLine;
}

@property(nonatomic) CDStruct_f6143a38 canvasLinkPathLine; // @synthesize canvasLinkPathLine=_canvasLinkPathLine;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)layoutTopDown;

@end
