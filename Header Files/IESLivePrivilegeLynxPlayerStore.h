//
//     Generated by private class-dump
//

@class PuzzleHybridContainer, HTSEventContext, NSString, IESLiveGCDTimer, IESLiveComponentContext, UIView;
@protocol IESLiveRoomService, IESLiveWebImageService, IESLivePrivilegeLynxPlayerViewProtocol;

@interface IESLivePrivilegeLynxPlayerStore : NSObject <IESHYHybridViewLifecycleProtocol> {
    BOOL _lynxViewCreatedSuccess;
    id<IESLiveRoomService> _room;
    HTSEventContext *_trackContext;
    IESLiveComponentContext *_componentContext;
    PuzzleHybridContainer *_lynxPlayerView;
    UIView<IESLivePrivilegeLynxPlayerViewProtocol> *_containerView;
    IESLiveGCDTimer *_timer;
    id<IESLiveWebImageService> _webImageService;
}

@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) IESLiveComponentContext *componentContext;
@property (retain, nonatomic) PuzzleHybridContainer *lynxPlayerView;
@property (weak, nonatomic) UIView<IESLivePrivilegeLynxPlayerViewProtocol> *containerView;
@property (nonatomic) BOOL lynxViewCreatedSuccess;
@property (retain, nonatomic) IESLiveGCDTimer *timer;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (id)componentContext;
- (void)setComponentContext:(id)arg0;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)viewDidLoadFailedWithUrl:(id)arg0 error:(id)arg1;
- (id)webImageService;
- (void)setWebImageService:(id)arg0;
- (id)initWithRoom:(id)arg0 componentContext:(id)arg1 trackContext:(id)arg2;
- (id)createLynxPlayerView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 inView:(id)arg1 initData:(id)arg2;
- (void)destroyLynxPlayerView;
- (void)clearCurrentContainerView;
- (id)lynxPlayerView;
- (BOOL)lynxViewCreatedSuccess;
- (void)setLynxPlayerView:(id)arg0;
- (void)setLynxViewCreatedSuccess:(BOOL)arg0;
- (id)timer;
- (void)invalidateTimer;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (void)setTimer:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (id)room;
- (void)setRoom:(id)arg0;

@end