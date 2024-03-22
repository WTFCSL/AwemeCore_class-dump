//
//     Generated by private class-dump
//

@class NSArray, NSString, IESLiveMediaTitleStore, UIView, IESLiveMediaTitleView;
@protocol IESLiveBubbleGuide, IESLiveMediaRoomActions, IESLiveFeedDrawerProvider;

@interface IESLiveMediaRoomTitleFragment : IESLiveRoomComponent <IESLiveMediaRoomProfileProvider, IESLiveMessageInteractionModuleCommentAction, IESLiveMediaRoomTitleInterface> {
    long long _orientation;
    IESLiveMediaTitleView *_titleView;
    IESLiveMediaTitleStore *_store;
    NSArray *_didHideViews;
    UIView *_introduceBgView;
    UIView *_introduceBottomBgView;
    UIView *_introduceView;
    id<IESLiveFeedDrawerProvider> _feedDrawProvider;
    id<IESLiveMediaRoomActions> _actionCreator;
    UIView<IESLiveBubbleGuide> *_tipsView;
}

@property (nonatomic) long long orientation;
@property (retain, nonatomic) IESLiveMediaTitleView *titleView;
@property (retain, nonatomic) IESLiveMediaTitleStore *store;
@property (retain, nonatomic) NSArray *didHideViews;
@property (retain, nonatomic) UIView *introduceBgView;
@property (retain, nonatomic) UIView *introduceBottomBgView;
@property (retain, nonatomic) UIView *introduceView;
@property (weak, nonatomic) id<IESLiveFeedDrawerProvider> feedDrawProvider;
@property (retain, nonatomic) id<IESLiveMediaRoomActions> actionCreator;
@property (retain, nonatomic) UIView<IESLiveBubbleGuide> *tipsView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isShowIntroduce;

- (id)tipsView;
- (void)setTipsView:(id)arg0;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)hideComponent;
- (void)showComponent;
- (void)componentOrientationTransitioning:(long long)arg0;
- (void)componentOrientationTransitionBegin:(long long)arg0;
- (void)willAutoRotateToOrientation:(long long)arg0 size:(struct CGSize { double x0; double x1; })arg1;
- (id)actionCreator;
- (void)setActionCreator:(id)arg0;
- (BOOL)isShowIntroduce;
- (void)liveAccessibility;
- (void)hideIntroduce;
- (void)bringIntroduceToFront;
- (void)updateRoomProfile:(long long)arg0;
- (void)hideIntroductionView;
- (void)showIntroduce;
- (id)feedDrawProvider;
- (void)trackTitleDidShow;
- (void)changeTipsToastWithOrientation:(long long)arg0;
- (id)introduceView;
- (void)showBubbleTipsToast;
- (void)hideExtraViewWhileIntroduce:(BOOL)arg0;
- (void)trackTitleDidClick;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })introduceContentFrame;
- (void)setIntroduceView:(id)arg0;
- (id)introduceBgView;
- (id)introduceBottomBgView;
- (void)trackIntroduceDidShow;
- (void)setIntroduceBgView:(id)arg0;
- (void)setIntroduceBottomBgView:(id)arg0;
- (id)pickUpNeedHideViews:(id)arg0;
- (void)setDidHideViews:(id)arg0;
- (id)didHideViews;
- (BOOL)p_enableShowTipsBubble;
- (void)p_hasShowTipsBubble;
- (void)setFeedDrawProvider:(id)arg0;
- (void).cxx_destruct;
- (id)store;
- (void)keyboardWillShow:(id)arg0;
- (long long)orientation;
- (void)keyboardWillHide:(id)arg0;
- (void)setStore:(id)arg0;
- (void)setTitleView:(id)arg0;
- (void)keyboardWillHide;
- (void)setOrientation:(long long)arg0;
- (void)keyboardWillShow;
- (id)titleView;

@end