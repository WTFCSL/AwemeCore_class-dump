//
//     Generated by private class-dump
//

@class NSDictionary, AWEFloatOnTopContainerView, NSString;

@interface AWEMediaFloatOnTopManager : NSObject <AWEFloatOnTopContainerViewDelegate, AWELiveBaseComponentMessage, AWELiveSettingMessage, AWEPlayVideoMessage, AWEVideoRecorderMessage> {
    BOOL _autoDismissWhenRecord;
    BOOL _autoDismissWhenLive;
    BOOL _autoDismissWhenPlayVideo;
    AWEFloatOnTopContainerView *_container;
    NSDictionary *_trackCloseData;
    id _pleaseCloseObserver;
    id _rnCloseObserver;
    id /* block */ _askBlock;
    id /* block */ _customAction;
}

@property (weak, nonatomic) AWEFloatOnTopContainerView *container;
@property (retain, nonatomic) id pleaseCloseObserver;
@property (retain, nonatomic) id rnCloseObserver;
@property (copy, nonatomic) id /* block */ askBlock;
@property (copy, nonatomic) id /* block */ customAction;
@property (nonatomic) BOOL autoDismissWhenRecord;
@property (nonatomic) BOOL autoDismissWhenLive;
@property (nonatomic) BOOL autoDismissWhenPlayVideo;
@property (copy, nonatomic) NSDictionary *trackCloseData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleClose:(id)arg0;

- (void)player:(id)arg0 didChangePlaybackStateWithAction:(long long)arg1;
- (void)videoRecorderWouldAppear;
- (void)setAutoDismissWhenRecord:(BOOL)arg0;
- (void)setAutoDismissWhenPlayVideo:(BOOL)arg0;
- (void)showWithInitialFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 onViewController:(id)arg1;
- (void)dismissWithParams:(id)arg0;
- (void)setCloseAskBlock:(id /* block */)arg0;
- (void)userDidTapFloatOnTopContainer:(id)arg0;
- (void)userWantToCloseFloatOnTopContainer:(id)arg0;
- (void)setTrackCloseData:(id)arg0;
- (void)updateCommercialLiveFloatingViewLayout;
- (void)roomWillAppear:(BOOL)arg0;
- (void)hasCreatedLiveRoomDidChange:(BOOL)arg0;
- (id)pleaseCloseObserver;
- (id)rnCloseObserver;
- (id /* block */)customAction;
- (id)trackCloseData;
- (id /* block */)askBlock;
- (BOOL)autoDismissWhenLive;
- (BOOL)autoDismissWhenPlayVideo;
- (BOOL)autoDismissWhenRecord;
- (void)setCustomTapBlock:(id /* block */)arg0;
- (void)setAutoDismissWhenLive:(BOOL)arg0;
- (void)setPleaseCloseObserver:(id)arg0;
- (void)setRnCloseObserver:(id)arg0;
- (void)setAskBlock:(id /* block */)arg0;
- (id)container;
- (id)init;
- (void)dismiss;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (void)dealloc;
- (void)setCustomAction:(id /* block */)arg0;
- (void)handleTap;

@end
