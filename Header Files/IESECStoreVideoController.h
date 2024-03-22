//
//     Generated by private class-dump
//

@class NSString, IESECServiceProxy, IESECRelationExtensionAreaTipView, IESECStoreVideoView;
@protocol IESECShopDataService, IESECShopThemeService;

@interface IESECStoreVideoController : IESECRelationController <IESECVideoDetailTransitionContextProvider, IESECStoreVideoControllerProtocol, IESECShopExtensionAreaProtocol> {
    BOOL _isViewAppear;
    BOOL _play;
    IESECStoreVideoView *_videoView;
    IESECServiceProxy<IESECShopThemeService> *_themeService;
    IESECRelationExtensionAreaTipView *_videoTipView;
    IESECServiceProxy<IESECShopDataService> *_dataService;
}

@property (retain, nonatomic) IESECStoreVideoView *videoView;
@property (retain, nonatomic) IESECServiceProxy<IESECShopThemeService> *themeService;
@property (retain, nonatomic) IESECRelationExtensionAreaTipView *videoTipView;
@property (nonatomic) BOOL play;
@property (retain, nonatomic) IESECServiceProxy<IESECShopDataService> *dataService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)controllerShouldLoadWithPageContextV2:(id)arg0;

- (void)modernTransitionUpdateOffset:(long long)arg0 isScrolled:(BOOL)arg1;
- (id)modernTransitionContext;
- (void)modernTransitionDidCompleteWithOffset:(long long)arg0;
- (long long)preferScaleMode;
- (void)setPlay:(BOOL)arg0;
- (void)setupBinding;
- (void)transitionEffect:(id /* block */)arg0;
- (id)videoTipView;
- (void)setVideoTipView:(id)arg0;
- (void)trackVideoShow;
- (id)dataService;
- (void)setDataService:(id)arg0;
- (id)themeService;
- (void)setThemeService:(id)arg0;
- (void)pagerView:(id)arg0 mainScrollViewDidScroll:(id)arg1;
- (void)headerTypeDidChange:(unsigned long long)arg0;
- (void)switchTheme:(unsigned long long)arg0;
- (void)controllerDidLoad;
- (void)iesecshop_viewControllerIsNotTop;
- (double)extensionAreaHeight;
- (id)extensionAreaView;
- (double)extensionAreaViewHeight;
- (void)updateVideoInfos:(id)arg0;
- (void)setupBindingV2;
- (void)slideVideo;
- (void)transitToAwemeDetailView;
- (void)clickVideo;
- (void)expandVideoPlayerArea;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)setVideoView:(id)arg0;
- (void)dealloc;
- (BOOL)play;
- (void)viewDidLoad;
- (id)videoView;
- (void)playVideo;
- (void)pauseVideo;

@end
