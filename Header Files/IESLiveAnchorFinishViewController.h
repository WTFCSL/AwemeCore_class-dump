//
//     Generated by private class-dump
//

@class PuzzleHybridContainer, NSString, UIImageView, IESLiveFinishWebViewConfig, IESLiveAnchorPerfTrackImpl, NSNumber, UIButton;
@protocol IESLiveHybridContainerFactory, IESLiveOrientationConfig, IESLiveAudienceRoomAwareness, IESLivePerfSampler, IESLiveRoomService, IESLiveURLSchemaHandler;

@interface IESLiveAnchorFinishViewController : UIViewController <IESLiveHybridContainerDelegate, IESHYHybridViewLifecycleProtocol> {
    BOOL _statusBarOriginalHidden;
    IESLiveAnchorPerfTrackImpl *_anchorPerfTrack;
    id<IESLiveRoomService> _roomModel;
    id<IESLiveAudienceRoomAwareness> _awareness;
    id<IESLiveURLSchemaHandler> _urlSchemaHandler;
    id<IESLiveHybridContainerFactory> _webviewFactory;
    UIImageView *_backgroundView;
    UIButton *_closeButton;
    PuzzleHybridContainer *_hybridContainer;
    NSString *_finishUrl;
    NSString *_finishSchema;
    double _enterTime;
    id<IESLiveAudienceRoomAwareness> _roomAwarenessw;
    IESLiveFinishWebViewConfig *_webViewConfig;
    NSNumber *_closeBtnStyle;
    id<IESLiveOrientationConfig> _orientationConfig;
    id<IESLivePerfSampler> _perfSampler;
}

@property (retain, nonatomic) id<IESLiveRoomService> roomModel;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> awareness;
@property (retain, nonatomic) id<IESLiveURLSchemaHandler> urlSchemaHandler;
@property (retain, nonatomic) id<IESLiveHybridContainerFactory> webviewFactory;
@property (retain, nonatomic) UIImageView *backgroundView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) PuzzleHybridContainer *hybridContainer;
@property (copy, nonatomic) NSString *finishUrl;
@property (copy, nonatomic) NSString *finishSchema;
@property (nonatomic) double enterTime;
@property (nonatomic) BOOL statusBarOriginalHidden;
@property (retain, nonatomic) id<IESLiveAudienceRoomAwareness> roomAwarenessw;
@property (retain, nonatomic) IESLiveFinishWebViewConfig *webViewConfig;
@property (retain, nonatomic) NSNumber *closeBtnStyle;
@property (retain, nonatomic) id<IESLiveOrientationConfig> orientationConfig;
@property (retain, nonatomic) id<IESLivePerfSampler> perfSampler;
@property (retain, nonatomic) IESLiveAnchorPerfTrackImpl *anchorPerfTrack;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)roomModel;
- (id)finishUrl;
- (id)hybridContainer;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (double)enterTime;
- (void)setEnterTime:(double)arg0;
- (void)setHybridContainer:(id)arg0;
- (void)viewDidFinishLoadWithURL:(id)arg0;
- (void)setRoomModel:(id)arg0;
- (id)closeBtnStyle;
- (void)setCloseBtnStyle:(id)arg0;
- (id)awareness;
- (void)setAwareness:(id)arg0;
- (id)perfSampler;
- (void)setPerfSampler:(id)arg0;
- (id)initWithRoomModel:(id)arg0;
- (id)webviewFactory;
- (void)setWebviewFactory:(id)arg0;
- (id)orientationConfig;
- (void)setOrientationConfig:(id)arg0;
- (id)webViewConfig;
- (void)closeVC;
- (id)finishSchema;
- (void)setFinishSchema:(id)arg0;
- (void)setWebViewConfig:(id)arg0;
- (id)urlSchemaHandler;
- (void)setUrlSchemaHandler:(id)arg0;
- (void)setAnchorPerfTrack:(id)arg0;
- (id)anchorPerfTrack;
- (void)setupWebFinishViews;
- (void)setupPerSampler;
- (void)trackEnterFinishRoom;
- (id)roomAwarenessw;
- (void)setStatusBarOriginalHidden:(BOOL)arg0;
- (BOOL)statusBarOriginalHidden;
- (void)parseWebViewConfig;
- (void)changeCloseBtnStyle:(id)arg0;
- (void)setFinishUrl:(id)arg0;
- (void)setRoomAwarenessw:(id)arg0;
- (BOOL)shouldAutorotate;
- (id)backgroundView;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillDisappear:(BOOL)arg0;
- (long long)preferredStatusBarStyle;
- (void)viewDidDisappear:(BOOL)arg0;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)setBackgroundView:(id)arg0;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;

@end
