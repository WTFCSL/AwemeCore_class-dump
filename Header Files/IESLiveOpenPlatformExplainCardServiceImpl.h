//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSString, RACDisposable, IESLiveOpenPlatformExplainCardContainerView, UIView, NSMutableArray, IESLiveRightBottomMutuallyExclusiveItem;
@protocol IESLiveWebPPlayer;

@interface IESLiveOpenPlatformExplainCardServiceImpl : NSObject <IESLiveOpenPlatformExplainCardActions, IESLiveAutoRotateAction, IESLiveOpenPlatformExplainCardService> {
    BOOL _isAnimating;
    BOOL _isDismissing;
    BOOL _isCardDisplaying;
    NSString *_displayingCardAppId;
    IESLiveOpenPlatformExplainCardContainerView *_containerView;
    UIView *_entranceView;
    NSMutableArray *_entrys;
    RACDisposable *_disposable;
    UIView<IESLiveWebPPlayer> *_webpPlayer;
    IESLiveRightBottomMutuallyExclusiveItem *_timorItem;
    long long _currentOrientation;
    NSMutableDictionary *_closeCardRecord;
}

@property (nonatomic) BOOL isAnimating;
@property (nonatomic) BOOL isDismissing;
@property (nonatomic) BOOL isCardDisplaying;
@property (copy, nonatomic) NSString *displayingCardAppId;
@property (retain, nonatomic) IESLiveOpenPlatformExplainCardContainerView *containerView;
@property (weak, nonatomic) UIView *entranceView;
@property (retain, nonatomic) NSMutableArray *entrys;
@property (retain, nonatomic) RACDisposable *disposable;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *webpPlayer;
@property (retain, nonatomic) IESLiveRightBottomMutuallyExclusiveItem *timorItem;
@property (nonatomic) long long currentOrientation;
@property (retain, nonatomic) NSMutableDictionary *closeCardRecord;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupObserver;
- (void)didSetAttachingDIContext;
- (void)setDisposable:(id)arg0;
- (id)disposable;
- (id)entranceView;
- (void)setEntranceView:(id)arg0;
- (void)setIsCardDisplaying:(BOOL)arg0;
- (BOOL)isCardDisplaying;
- (void)handleOrientationChanged:(long long)arg0;
- (void)willAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (void)setWebpPlayer:(id)arg0;
- (id)webpPlayer;
- (void)closeExplainCardWithAppId:(id)arg0;
- (void)updateEntranceView:(id)arg0;
- (void)scheduleCardWithEntry:(id)arg0;
- (id)displayingCardAppId;
- (void)_hideExplainCard;
- (id)timorItem;
- (void)setTimorItem:(id)arg0;
- (void)_logIWithEvent:(id)arg0 params:(id)arg1;
- (id)closeCardRecord;
- (void)_scheduleReplaceCardWithEntry:(id)arg0;
- (void)_scheduleShowCardWithEntry:(id)arg0;
- (void)_scheduleHideCardWithEntry:(id)arg0;
- (BOOL)_checkStartAnimatingIfNeeded;
- (void)_startNativeAppItemAnimationWithWebPName:(id)arg0 completion:(id /* block */)arg1;
- (void)setDisplayingCardAppId:(id)arg0;
- (void)removeFlexInteractBanner;
- (void)setCloseCardRecord:(id)arg0;
- (id)_pop;
- (BOOL)isAnimating;
- (id)init;
- (void).cxx_destruct;
- (long long)currentOrientation;
- (void)_push:(id)arg0;
- (BOOL)isDismissing;
- (void)setContainerView:(id)arg0;
- (id)containerView;
- (void)dealloc;
- (void)setIsAnimating:(BOOL)arg0;
- (id)entrys;
- (void)setEntrys:(id)arg0;
- (void)setIsDismissing:(BOOL)arg0;
- (unsigned long long)_entryCount;
- (void)setCurrentOrientation:(long long)arg0;

@end