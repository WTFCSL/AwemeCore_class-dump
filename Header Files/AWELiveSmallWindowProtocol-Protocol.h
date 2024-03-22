//
//     Generated by private class-dump
//

@protocol AWELiveSmallWindowProtocol <NSObject>

@property (nonatomic) BOOL selfManage;
@property (nonatomic) BOOL useTapActionOnly;

- (BOOL)isInteractLinkingMicSmallWindowShowingWithErrorToast:(id)arg0;
- (void)showSmallLiveWindowFrom:(id)arg0;
- (void)hideSmallLiveWindow;
- (void)registerAllowListVCClass:(Class)arg0 withTag:(id)arg1;
- (void)unregisterAllowListVCClass:(Class)arg0;
- (void)setSmallWindowHiddenCompletion:(id /* block */)arg0;
- (void)setTapSmallWindowAction:(id /* block */)arg0;
- (void)setTapSmallWindowAction:(id /* block */)arg0 liveResponse:(BOOL)arg1;
- (void)setSmallWindowMuteStateDidChangedAction:(id /* block */)arg0;
- (BOOL)hasWindowView;
- (void)resumeSmallWindowStream;
- (void)setSelfManage:(BOOL)arg0;
- (void)startVideoRendering;
- (void)pauseSmallWindowStream;
- (void)setUseTapActionOnly:(BOOL)arg0;
- (void)showSmallLiveWindowFrom:(id)arg0 withRoomID:(id)arg1 metaParams:(id)arg2 preferOptions:(id)arg3 callTrace:(id)arg4 completion:(id /* block */)arg5;
- (void)showSmallLiveWindowFrom:(id)arg0 withRoomID:(id)arg1 metaParams:(id)arg2;
- (void)transferSmallLiveToView:(id)arg0;
- (void)returnSmallLiveToService;
- (void)setSmallWindowMute:(BOOL)arg0;
- (void)clearSmallwindowActionBlock;
- (void)resumeMiniWindow;
- (void)stopVideoRendering;
- (void)setSmallLiveWindowTop:(double)arg0;
- (BOOL)isLivePipShow;
- (void)showSmallLiveWindowFrom:(id)arg0 extraParam:(id)arg1;
- (void)showSmallLiveWindowFrom:(id)arg0 extraParam:(id)arg1 callTrace:(id)arg2 completion:(id /* block */)arg3;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getSmallWindowViewRect;
- (BOOL)selfManage;
- (BOOL)useTapActionOnly;
- (void)pauseMiniWindow;
- (BOOL)didHideWindow;
- (void)closeInteractWindow;

@end
