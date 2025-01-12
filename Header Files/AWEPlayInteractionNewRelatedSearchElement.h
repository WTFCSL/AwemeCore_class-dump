//
//     Generated by private class-dump
//

@class UIView;
@protocol AWEFeedCommerceBottomTipProtocol;

@interface AWEPlayInteractionNewRelatedSearchElement : AWEPlayInteractionNewBottomElement {
    BOOL _showedBefore;
    BOOL _hasReset;
    UIView<AWEFeedCommerceBottomTipProtocol> *_relatedSearchTipView;
}

@property (retain, nonatomic) UIView<AWEFeedCommerceBottomTipProtocol> *relatedSearchTipView;
@property (nonatomic) BOOL showedBefore;
@property (nonatomic) BOOL hasReset;

- (void)initializeElement;
- (void)viewDidDisposed;
- (unsigned long long)elementVisibleType;
- (BOOL)hasReset;
- (void)setHasReset:(BOOL)arg0;
- (id)activateInfoWithData:(id)arg0;
- (void)setShowedBefore:(BOOL)arg0;
- (BOOL)showedBefore;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (BOOL)shouldAppearWithData:(id)arg0;
- (void)trackOnDisplay:(BOOL)arg0;
- (void)p_showAntiAddictedNoticeBarViewWithCompletion:(id /* block */)arg0;
- (void)hideMutexTempElement:(id /* block */)arg0;
- (void)showTipsNotification:(id)arg0;
- (id)relatedSearchTipView;
- (void)setRelatedSearchTipView:(id)arg0;
- (BOOL)disableHasResetTag;
- (id)getBottomBarSearchWord:(id)arg0;
- (void)updateRelatedSearchTipView;
- (void).cxx_destruct;
- (id)identifier;
- (void)reset;
- (void)viewDidLoad;

@end
