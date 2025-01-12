//
//     Generated by private class-dump
//

@class UIView, NSString, AWEFeedEntranceView, BFTaskCompletionSource, BDImageView, AWEHPChannelBubbleTask, AWELeftSideBarIMEntranceViewModel, MASConstraint, NSPointerArray, UILabel, DUXBadge;
@protocol AWELeftSideBarEntranceBussinessViewProtocol, AWELeftSideBarIMEntranceViewDelegate;

@interface AWELeftSideBarIMEntranceView : UIView <AWEFeedThemeManagerProtocol, AWELeftSideBarIMEntranceProtocol> {
    BOOL _isShowingBubble;
    BOOL _hasPreTrackerForeignizationShow;
    id<AWELeftSideBarIMEntranceViewDelegate> delegate;
    AWEFeedEntranceView *_leftSideBarIMEntranceView;
    UIView<AWELeftSideBarEntranceBussinessViewProtocol> *_businessEntranceView;
    DUXBadge *_numberRedDot;
    long long _currentThemeType;
    long long _operateIndex;
    NSPointerArray *_observerArray;
    AWELeftSideBarIMEntranceViewModel *_viewModel;
    AWEHPChannelBubbleTask *_currentBubbleTask;
    AWEHPChannelBubbleTask *_lastShowEntranceBubbleTask;
    BDImageView *_intimacyChatAvatarView;
    BFTaskCompletionSource *_isShowingAlertTaskSource;
    BFTaskCompletionSource *_layoutTaskSource;
    MASConstraint *_dotLeftConstraint;
    MASConstraint *_dotRightConstraint;
    UILabel *_unreadMsgLabel;
}

@property (retain, nonatomic) AWEFeedEntranceView *leftSideBarIMEntranceView;
@property (retain, nonatomic) UIView<AWELeftSideBarEntranceBussinessViewProtocol> *businessEntranceView;
@property (retain, nonatomic) DUXBadge *numberRedDot;
@property (nonatomic) long long currentThemeType;
@property (nonatomic) long long operateIndex;
@property (nonatomic) BOOL isShowingBubble;
@property (retain, nonatomic) NSPointerArray *observerArray;
@property (retain, nonatomic) AWELeftSideBarIMEntranceViewModel *viewModel;
@property (retain, nonatomic) AWEHPChannelBubbleTask *currentBubbleTask;
@property (retain, nonatomic) AWEHPChannelBubbleTask *lastShowEntranceBubbleTask;
@property (retain, nonatomic) BDImageView *intimacyChatAvatarView;
@property (retain, nonatomic) BFTaskCompletionSource *isShowingAlertTaskSource;
@property (retain, nonatomic) BFTaskCompletionSource *layoutTaskSource;
@property (retain, nonatomic) MASConstraint *dotLeftConstraint;
@property (retain, nonatomic) MASConstraint *dotRightConstraint;
@property (nonatomic) BOOL hasPreTrackerForeignizationShow;
@property (retain, nonatomic) UILabel *unreadMsgLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWELeftSideBarIMEntranceViewDelegate> delegate;

- (void)configAlpha:(double)arg0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg1;
- (id)observerArray;
- (void)setObserverArray:(id)arg0;
- (id)currentBubbleTask;
- (void)setCurrentBubbleTask:(id)arg0;
- (void)themeDidChange:(long long)arg0;
- (BOOL)isShowingBubble;
- (void)setIsShowingBubble:(BOOL)arg0;
- (long long)currentThemeType;
- (void)setCurrentThemeType:(long long)arg0;
- (void)addLeftSideBarEntranceView;
- (void)leftSideBarEntranceViewTapped:(id)arg0;
- (id)businessEntranceView;
- (void)setBusinessEntranceView:(id)arg0;
- (long long)operateIndex;
- (void)setOperateIndex:(long long)arg0;
- (long long)leftSideBarBusinessEntranceRedDotStyle;
- (long long)currentLeftSideBarBussinessEntranceRedDotCount;
- (void)setLastShowEntranceBubbleTask:(id)arg0;
- (id)lastShowEntranceBubbleTask;
- (void)tryShowUnradMsgText;
- (void)setLayoutTaskSource:(id)arg0;
- (void)setIsShowingAlertTaskSource:(id)arg0;
- (id)isShowingAlertTaskSource;
- (void)longPressIMEntranceView;
- (void)activeWhenLayouted;
- (id)layoutTaskSource;
- (void)hideLeftSideBarImEntranceOtherView;
- (void)refreshLeftSideBarImEntranceView;
- (void)observerViewModel;
- (void)showIMBubbleViewWithText:(id)arg0 completion:(id /* block */)arg1 clickBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (id)tryShowAvatarWithURL:(id)arg0;
- (void)trackHomepageForeignizationShow;
- (void)setHasPreTrackerForeignizationShow:(BOOL)arg0;
- (void)trackHomePageomePageDotShow;
- (id)showLeftSideBarIMEntranceRedDotWithCount:(long long)arg0;
- (void)hideLeftSideBarIMEntranceCountRedDot;
- (id)leftSideBarIMEntranceView;
- (id)planeIcon;
- (id)numberRedDot;
- (id)intimacyChatAvatarView;
- (void)setNumberRedDot:(id)arg0;
- (void)setDotLeftConstraint:(id)arg0;
- (void)setDotRightConstraint:(id)arg0;
- (void)setIntimacyChatAvatarView:(id)arg0;
- (id)entranceIconName;
- (id)unreadMsgLabel;
- (void)tryRemoveTextLabel;
- (void)setUnreadMsgLabel:(id)arg0;
- (void)showNotShowBubbleTost:(id)arg0;
- (BOOL)currentInFeedHomePageHot;
- (void)beginShowIMBubbleViewWithText:(id)arg0 completion:(id /* block */)arg1 clickBlock:(id /* block */)arg2 dismissBlock:(id /* block */)arg3;
- (void)configImage:(id)arg0 Label:(id)arg1;
- (void)themeChangeColor:(id)arg0;
- (void)setLeftSideBarIMEntranceView:(id)arg0;
- (id)dotLeftConstraint;
- (id)dotRightConstraint;
- (BOOL)hasPreTrackerForeignizationShow;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)arg0;
- (void)setViewModel:(id)arg0;
- (id)delegate;
- (id)viewModel;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)addObserver;

@end
