//
//     Generated by private class-dump
//

@class NSString, AWEGeneralSearchVideoCardModel, AWEAwemeModel, UIView, AWEModernFeedActionPanelView;

@interface AWESearchVideoCardInteractorComponent : AWESearchComponent <AWESearchVideoCardInteractorComponentProtocol> {
    BOOL _currentModelFromSetupModelOnly;
    UIView *_contentView;
    AWEModernFeedActionPanelView *_actionPanelView;
    AWEGeneralSearchVideoCardModel *_bindedModel;
    AWEAwemeModel *_model;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) AWEModernFeedActionPanelView *actionPanelView;
@property (retain, nonatomic) AWEGeneralSearchVideoCardModel *bindedModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (nonatomic) BOOL currentModelFromSetupModelOnly;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct CGSize { double x0; double x1; })componentSizeForModel:(id)arg0 width:(double)arg1;
+ (struct CGSize { double x0; double x1; })reCalculateSizeForModel:(id)arg0 width:(double)arg1;
+ (struct CGSize { double x0; double x1; })p_calculateComponentSize:(double)arg0 withModel:(id)arg1;
+ (id)realAwemeWithAweme:(id)arg0;

- (void)showSharePanel;
- (void)updateDiggCount;
- (void)onAwemeDiggNotification:(id)arg0;
- (id)actionPanelView;
- (void)setActionPanelView:(id)arg0;
- (void)updateFavoriteCount;
- (void)playLikeAnimation;
- (void)playDislikeAnimation;
- (void)playFavoriteAnimation;
- (void)playUnFavoriteAnimation;
- (void)onAwemeFamiliarRecommendStatusChangedNotification:(id)arg0;
- (void)onAwemeFavoriteNotification:(id)arg0;
- (id /* block */)shareConfigurationHandler;
- (void)doSafeDigg:(BOOL)arg0 enterMethod:(id)arg1;
- (void)likeVideoClickAction;
- (void)favoriteButtonClickActionWithButton:(id)arg0;
- (void)shareVideoClickAction;
- (void)doSafeFavoriteWithButton:(id)arg0;
- (void)doSafeDigg:(BOOL)arg0 enterMethod:(id)arg1 ignoreUnlogin:(BOOL)arg2 animationBlock:(id /* block */)arg3;
- (void)p_loadView;
- (BOOL)shouldAddSearchParamsInShareVideoTrack;
- (void)showNewPressPanelForScene:(id)arg0;
- (void)setBindedModel:(id)arg0;
- (void)setModelOnly:(id)arg0;
- (id)bindedModel;
- (void)updateWithChunkModel:(id)arg0;
- (id)playerProvider;
- (void)updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (id)provideProtocol;
- (id)broadcastProtocolList;
- (id)receiveProtocolList;
- (id)accessibilityElementsArr;
- (void)updateAwemeModel:(id)arg0;
- (void)updateDiggInfoIfDigg:(BOOL)arg0;
- (void)repostButtonClickAction;
- (void)p_updateWithModel:(id)arg0 forceUpdate:(BOOL)arg1;
- (void)setCurrentModelFromSetupModelOnly:(BOOL)arg0;
- (BOOL)currentModelFromSetupModelOnly;
- (id)descProvider;
- (void)p_createComponent;
- (void)p_layoutContents;
- (id)commentProvider;
- (id)p_containerContext;
- (id)p_getInteractElementBtmDcmInfo:(long long)arg0;
- (void)setModel:(id)arg0;
- (id)interactor;
- (id)init;
- (void).cxx_destruct;
- (id)model;
- (id)contentView;
- (void)setContentView:(id)arg0;
- (id)componentView;
- (id)router;
- (void)addObservers;

@end