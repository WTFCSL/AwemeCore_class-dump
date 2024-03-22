//
//     Generated by private class-dump
//

@class NSString;
@protocol IESECMallLynxRenderMonitorDelegate;

@interface IESECMallLynxRenderMonitor : NSObject {
    BOOL _didFirstScreen;
    NSString *_scene;
    id<IESECMallLynxRenderMonitorDelegate> _delegate;
    unsigned long long _totleCountInFirstScreen;
    unsigned long long _hitPreloadCountInFirstScreen;
}

@property (nonatomic) unsigned long long totleCountInFirstScreen;
@property (nonatomic) unsigned long long hitPreloadCountInFirstScreen;
@property (nonatomic) BOOL didFirstScreen;
@property (copy, nonatomic) NSString *scene;
@property (weak, nonatomic) id<IESECMallLynxRenderMonitorDelegate> delegate;

- (BOOL)didFirstScreen;
- (void)lynxCard:(id)arg0 didLoadFail:(id)arg1 resource:(id)arg2 itemModel:(id)arg3;
- (void)lynxCard:(id)arg0 didFirstScreen:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4;
- (void)setDidFirstScreen:(BOOL)arg0;
- (void)lynxCard:(id)arg0 didUpdateDataWithLynxViewFromType:(unsigned long long)arg1 resource:(id)arg2 itemModel:(id)arg3 perfDict:(id)arg4;
- (unsigned long long)totleCountInFirstScreen;
- (void)setTotleCountInFirstScreen:(unsigned long long)arg0;
- (unsigned long long)hitPreloadCountInFirstScreen;
- (void)setHitPreloadCountInFirstScreen:(unsigned long long)arg0;
- (void)handleLynxRender:(id)arg0 resource:(id)arg1;
- (void)trackerLynxRenderLog:(id)arg0;
- (id)resourceFrom:(long long)arg0;
- (void)trackerLynxUpdateLog:(id)arg0;
- (void)realLynxCard:(id)arg0 didLoadFail:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 scene:(id)arg4;
- (void)realLynxCard:(id)arg0 didFirstScreen:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4 isPreDecode:(BOOL)arg5 scene:(id)arg6;
- (void)lynxCard:(id)arg0 didFirstScreen:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4 isPreDecode:(BOOL)arg5;
- (void)realLynxCard:(id)arg0 didUpdateDataWithLynxViewFromType:(unsigned long long)arg1 resource:(id)arg2 itemModel:(id)arg3 perfDict:(id)arg4 isFirstScreen:(long long)arg5;
- (void)lynxCard:(id)arg0 onSetup:(id)arg1 resource:(id)arg2 itemModel:(id)arg3 isPreloader:(BOOL)arg4 isPreDecode:(BOOL)arg5;
- (id)init;
- (void)setScene:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)scene;

@end
