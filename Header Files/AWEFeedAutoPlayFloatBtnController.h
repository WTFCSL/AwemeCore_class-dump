//
//     Generated by private class-dump
//

@class DUXPopover, NSString, UIView, NSIndexPath;
@protocol AWEFeedAutoPlayFloatingButtonProtocol, AWEFeedAutoPlayManagerProtocol;

@interface AWEFeedAutoPlayFloatBtnController : AWEBaseController <AWEFeedControllerProtocol, AWEAntiAddictNoticeMessage> {
    BOOL _isManualScroll;
    BOOL _timerTipBubbleShowed;
    id<AWEFeedAutoPlayManagerProtocol> _autoPlayManager;
    UIView<AWEFeedAutoPlayFloatingButtonProtocol> *_autoPlayFloatingBtn;
    DUXPopover *_timerPopover;
    long long _playTimeConfig;
    NSIndexPath *_didEndDisplayingIndexPath;
    NSIndexPath *_willDisplayIndexPath;
}

@property (retain, nonatomic) id<AWEFeedAutoPlayManagerProtocol> autoPlayManager;
@property (retain, nonatomic) UIView<AWEFeedAutoPlayFloatingButtonProtocol> *autoPlayFloatingBtn;
@property (retain, nonatomic) DUXPopover *timerPopover;
@property (nonatomic) BOOL isManualScroll;
@property (nonatomic) BOOL timerTipBubbleShowed;
@property (nonatomic) long long playTimeConfig;
@property (retain, nonatomic) NSIndexPath *didEndDisplayingIndexPath;
@property (retain, nonatomic) NSIndexPath *willDisplayIndexPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPadModuleAdapterClass;

- (id)aAWEPadModuleAdapter;
- (void)dailyAlertDidShow;
- (void)dailyAlertDidDismiss;
- (void)videoPlayer:(id)arg0 updatePlayTime:(double)arg1 totalTime:(double)arg2;
- (void)viewDidLoadAfterTableviewSetup;
- (void)scrollViewDidScrollEndWithActive;
- (void)onPlayInteractionPureModeChangeNotification:(id)arg0;
- (id)autoPlayManager;
- (void)setAutoPlayManager:(id)arg0;
- (void)setDidEndDisplayingIndexPath:(id)arg0;
- (void)setWillDisplayIndexPath:(id)arg0;
- (id)didEndDisplayingIndexPath;
- (id)willDisplayIndexPath;
- (void)setTimerTipBubbleShowed:(BOOL)arg0;
- (void)setPlayTimeConfig:(long long)arg0;
- (void)storyVideoPlayTimeUpdate:(id)arg0;
- (void)onLiveCellPlayTimeUpdate:(id)arg0;
- (id)autoPlayFloatingBtn;
- (void)setAutoPlayFloatingBtn:(id)arg0;
- (id)timerPopover;
- (void)updateBtnAlphaWithAweme:(id)arg0;
- (void)setIsManualScroll:(BOOL)arg0;
- (BOOL)isManualScroll;
- (void)tryShowPlayTimeTipWithUpdatePlayTime:(double)arg0 totalTime:(double)arg1 model:(id)arg2;
- (long long)playTimeConfig;
- (BOOL)timerTipBubbleShowed;
- (void)showTimerTipBubble;
- (void)setTimerPopover:(id)arg0;
- (id)init;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)scrollViewWillBeginDragging:(id)arg0;
- (void)dealloc;
- (void)viewDidLoad;

@end
