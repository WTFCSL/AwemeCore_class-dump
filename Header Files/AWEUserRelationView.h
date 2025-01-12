//
//     Generated by private class-dump
//

@class NSString, DUXPopover, UIVisualEffectView, AWEAnimatedButton;
@protocol AWEUserRelationViewDelegate;

@interface AWEUserRelationView : UIView <AWEUserRelationView> {
    BOOL _isPermittedProfile;
    BOOL _isVSProfile;
    BOOL _shouldChangeVSProfileUI;
    BOOL _hasRecommendBtnOnRight;
    BOOL _isFromFeedFamiliar;
    BOOL _isShowingLightInteractionBtn;
    BOOL _isShowGuideLunaBtn;
    BOOL _shouldTrackShowMsgBtn;
    AWEAnimatedButton *_sendMsgBtn;
    AWEAnimatedButton *_relationTitleBtn;
    AWEAnimatedButton *_guideLunaMusicianBtn;
    AWEAnimatedButton *_sendGreetBtn;
    long long _followStatus;
    long long _followerStatus;
    id /* block */ _trackMsgBtnShowBlock;
    id<AWEUserRelationViewDelegate> _delegate;
    DUXPopover *_popover;
    UIVisualEffectView *_relationEffectView;
    UIVisualEffectView *_sendMsgEffectView;
    NSString *_msgBtnText;
    NSString *_userID;
    long long _specialFollowStatus;
}

@property (nonatomic) BOOL isPermittedProfile;
@property (nonatomic) BOOL isShowGuideLunaBtn;
@property (nonatomic) BOOL shouldTrackShowMsgBtn;
@property (retain, nonatomic) DUXPopover *popover;
@property (retain, nonatomic) UIVisualEffectView *relationEffectView;
@property (retain, nonatomic) UIVisualEffectView *sendMsgEffectView;
@property (copy, nonatomic) NSString *msgBtnText;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long specialFollowStatus;
@property (retain, nonatomic) AWEAnimatedButton *sendMsgBtn;
@property (retain, nonatomic) AWEAnimatedButton *relationTitleBtn;
@property (retain, nonatomic) AWEAnimatedButton *guideLunaMusicianBtn;
@property (retain, nonatomic) AWEAnimatedButton *sendGreetBtn;
@property (readonly, nonatomic) long long followStatus;
@property (readonly, nonatomic) long long followerStatus;
@property (nonatomic) BOOL isVSProfile;
@property (nonatomic) BOOL shouldChangeVSProfileUI;
@property (nonatomic) BOOL hasRecommendBtnOnRight;
@property (copy, nonatomic) id /* block */ trackMsgBtnShowBlock;
@property (weak, nonatomic) id<AWEUserRelationViewDelegate> delegate;
@property (nonatomic) BOOL isFromFeedFamiliar;
@property (nonatomic) BOOL isShowingLightInteractionBtn;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEUserProfileGreetCommonAdapterClass;
+ (Class)aAWEUserRelationViewDOUYINLiteAdapterClass;

- (long long)followStatus;
- (void)awe_themeDidChange:(long long)arg0;
- (long long)followerStatus;
- (long long)specialFollowStatus;
- (void)setSpecialFollowStatus:(long long)arg0;
- (id)p_colorWithLightColor:(id)arg0 darkColor:(id)arg1;
- (void)p_updateColorWithTheme:(long long)arg0;
- (id)relationTitleBtn;
- (void)setRelationTitleBtn:(id)arg0;
- (id)p_imageWithLightImage:(id)arg0 darkImage:(id)arg1;
- (void)updateRelationWithFollowStatus:(long long)arg0 followerStatus:(long long)arg1 specialFollowStatus:(long long)arg2 showLightInteraction:(BOOL)arg3 updateIfStatusNoChange:(BOOL)arg4 animated:(BOOL)arg5;
- (void)setHasRecommendBtnOnRight:(BOOL)arg0;
- (id)aAWEUserRelationViewDOUYINLiteAdapter;
- (void)setIsVSProfile:(BOOL)arg0;
- (void)showFollowGuideBubble;
- (void)updateFollowBtnTitle:(id)arg0;
- (id)sendMsgBtn;
- (void)removeFollowGuideBubble;
- (BOOL)shouldShowGreetingBtn;
- (void)showGreetGuideBubble;
- (void)updateRelationWithFollowStatus:(long long)arg0 followerStatus:(long long)arg1 specialFollowStatus:(long long)arg2 animated:(BOOL)arg3;
- (BOOL)isShowingLightInteractionBtn;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isPermittedProfile:(BOOL)arg1 shouldTrackShowMsgBtn:(BOOL)arg2 msgBtnText:(id)arg3 isShowGuideLunaBtn:(BOOL)arg4 delegate:(id)arg5;
- (void)setIsFromFeedFamiliar:(BOOL)arg0;
- (void)setTrackMsgBtnShowBlock:(id /* block */)arg0;
- (id)guideLunaMusicianBtn;
- (id)sendGreetBtn;
- (id)aAWEUserProfileGreetCommonAdapter;
- (unsigned long long)p_guideLunaButtonStyle;
- (double)p_buttonFontSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isPermittedProfile:(BOOL)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 isPermittedProfile:(BOOL)arg1 shouldTrackShowMsgBtn:(BOOL)arg2 msgBtnText:(id)arg3;
- (void)p_setupDefaultUI;
- (void)setRelationEffectView:(id)arg0;
- (void)setSendMsgEffectView:(id)arg0;
- (id)relationEffectView;
- (id)sendMsgEffectView;
- (void)p_updateDTDefaultRelationViewWithStatus:(long long)arg0 specialFollowStatus:(long long)arg1 showLightInteraction:(BOOL)arg2 setupUserID:(BOOL)arg3 animation:(BOOL)arg4;
- (id)p_sendMsgButtonTitle;
- (long long)strengthenStrangerStyle;
- (BOOL)isShowGuideLunaBtn;
- (BOOL)isPermittedProfile;
- (BOOL)p_shouldOptimizeUserProfileSendMsgButton;
- (BOOL)isVSProfile;
- (BOOL)shouldChangeVSProfileUI;
- (BOOL)p_shouldStrengthenMsgBtn;
- (BOOL)shouldTrackShowMsgBtn;
- (id /* block */)trackMsgBtnShowBlock;
- (void)setShouldTrackShowMsgBtn:(BOOL)arg0;
- (BOOL)isFromFeedFamiliar;
- (void)p_layoutBtnsWithAnimation:(BOOL)arg0 showMsgButton:(BOOL)arg1 showLightInteraction:(BOOL)arg2;
- (void)p_handleGuideCaseWithAnimation:(BOOL)arg0 showMsgButton:(BOOL)arg1;
- (void)p_handleLayoutBtnsWithAnimation:(BOOL)arg0 showMsgButton:(BOOL)arg1 showLightInteraction:(BOOL)arg2;
- (void)setIsShowingLightInteractionBtn:(BOOL)arg0;
- (void)p_showLightInteraction;
- (void)p_resetSendMsgButton;
- (void)p_updateMsgButtonIfNeeded;
- (void)p_updateStrengthenMsgButtonIfNeeded;
- (void)p_showSendMsgIconForFriends;
- (BOOL)p_shouldShowSendMsgSmallBtn;
- (id)msgBtnText;
- (BOOL)p_shouldDisplayTextInSendMsgBtn;
- (BOOL)p_shouldShowSendMsgIcon;
- (void)addEffectView;
- (void)updateBtnBackGroundColor;
- (void)updateSendMsgButtonWithShouldRevert:(BOOL)arg0 isLeaveMsg:(BOOL)arg1;
- (BOOL)p_isCompanySendMsgTextStyle;
- (void)setSendMsgBtn:(id)arg0;
- (void)setGuideLunaMusicianBtn:(id)arg0;
- (void)setSendGreetBtn:(id)arg0;
- (void)setIsPermittedProfile:(BOOL)arg0;
- (void)setShouldChangeVSProfileUI:(BOOL)arg0;
- (BOOL)hasRecommendBtnOnRight;
- (void)setIsShowGuideLunaBtn:(BOOL)arg0;
- (void)setMsgBtnText:(id)arg0;
- (id)userID;
- (void).cxx_destruct;
- (id)popover;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setUserID:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (void)setPopover:(id)arg0;
- (void)setDelegate:(id)arg0;

@end
