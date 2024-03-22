//
//     Generated by private class-dump
//

@class BDPTimingEvent, BDPUniqueID, BDPPerformancePanelView;

@interface BDPPerformancePanelManager : NSObject {
    BOOL _isShowing;
    BDPUniqueID *_observerUniqueID;
    BDPPerformancePanelView *_panelView;
    BDPTimingEvent *_launchEvent;
    BDPTimingEvent *_pageRenderEvent;
    BDPTimingEvent *_pageSwitchEvent;
}

@property (nonatomic) BOOL isShowing;
@property (retain, nonatomic) BDPUniqueID *observerUniqueID;

+ (void)closePanel;
+ (id)performancePanelManager;
+ (id)sharedManager;

- (void)setIsShowing:(BOOL)arg0;
- (void)showPanel;
- (id)observerUniqueID;
- (void)setCPUUsage:(double)arg0 MemoryUsage:(double)arg1 FPS:(double)arg2;
- (void)setDownloadTime:(double)arg0;
- (void)setFirstRenderTime:(double)arg0;
- (void)setReRenderTime:(double)arg0;
- (void)startEventWithType:(long long)arg0;
- (void)stopEventWithType:(long long)arg0;
- (void)setObserverUniqueID:(id)arg0;
- (void)requestPerformanceInfo;
- (void).cxx_destruct;
- (id)_init;
- (BOOL)isShowing;

@end