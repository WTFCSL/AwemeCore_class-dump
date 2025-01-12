//
//     Generated by private class-dump
//

@class NSString, UIViewController, AWEPerfLoadViewInfo;

@interface AWEPerfLoadVideo : AWEPerfLoadObject <AWEPerfLoadViewInfoObserver> {
    UIViewController *containerVC;
    AWEPerfLoadViewInfo *viewInfo;
    struct atomic_flag { _Atomic BOOL _Value; } finishOnce;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)notifyFirstFrameWithStatus:(unsigned long long)arg0;
+ (void)initialize;
+ (BOOL)isRunning;

- (void)viewInfoDidUpdate:(id)arg0;
- (void)finishRunning;
- (void)perf_isa_videoEngineReadyToPlay:(id)arg0;
- (void)perf_isa_videoEngineDidFinish:(id)arg0 error:(id)arg1;
- (void)perf_isa_videoEngineDidFinish:(id)arg0 videoStatusException:(long long)arg1;
- (void)perf_isa_videoEngine:(id)arg0 playbackStateDidChanged:(long long)arg1;
- (void)perf_isa_readyForDisplayForURL:(id)arg0 metaFormat:(id)arg1;
- (void)perf_isa_playbackDidFailForURL:(id)arg0 error:(id)arg1;
- (void)perf_isa_playbackDidFailWithErrorDict:(id)arg0;
- (void).cxx_destruct;
- (void)dealloc;

@end
