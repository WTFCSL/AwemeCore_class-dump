//
//     Generated by private class-dump
//

@class UILabel, UIViewController, AFDCloseFriendsMomentContext, UIButton, UIView, AFDCloseFriendsMomentFeedCellTapHandler, NSString, AFDCloseFriendsExchangeBlurMaskView, AFDCloseFriendsMomentModel, UIStackView, AFDCloseFriendsBlurMaskView, AWEGradientView, UIImageView;
@protocol AWEIMConsecutiveChatStateViewProtocol;

@interface AFDCloseFriendsMomentFeedBaseCell : UITableViewCell <AFDCloseFriendsBlurMaskViewDelegate, AWEUserMessage, AWEIMConsecutiveChatDaysListenerProtocol, AFDCloseFriendsExchangeBlurMaskViewDelegate, AFDCloseFriendsMomentFeedCellProtocol, AFDCloseFriendsMomentFeedCardCellProtocol> {
    AFDCloseFriendsBlurMaskView *_blurMaskView;
    AFDCloseFriendsExchangeBlurMaskView *_exchangeBlurMaskView;
    UIView *_momentMediaView;
    AFDCloseFriendsMomentContext *_context;
    AFDCloseFriendsMomentModel *_currentMomentModel;
    UIViewController *_parentViewController;
    UILabel *_titleLabel;
    UIStackView *_authorView;
    UIImageView *_avatarView;
    UILabel *_authorLabel;
    UILabel *_detailLabel;
    UIButton *_moreBtn;
    AFDCloseFriendsMomentFeedCellTapHandler *_tapHandler;
    AWEGradientView *_indentAuthorMaskLayer;
    UIStackView *_topContainerView;
    UIStackView *_nameStackerView;
    UIView<AWEIMConsecutiveChatStateViewProtocol> *_consecutiveChatStateView;
}

@property (retain, nonatomic) AWEGradientView *indentAuthorMaskLayer;
@property (retain, nonatomic) AFDCloseFriendsBlurMaskView *blurMaskView;
@property (retain, nonatomic) AFDCloseFriendsExchangeBlurMaskView *exchangeBlurMaskView;
@property (retain, nonatomic) UIStackView *topContainerView;
@property (retain, nonatomic) UIStackView *nameStackerView;
@property (retain, nonatomic) UIView<AWEIMConsecutiveChatStateViewProtocol> *consecutiveChatStateView;
@property (retain, nonatomic) UIView *momentMediaView;
@property (weak, nonatomic) AFDCloseFriendsMomentContext *context;
@property (retain, nonatomic) AFDCloseFriendsMomentModel *currentMomentModel;
@property (weak, nonatomic) UIViewController *parentViewController;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIStackView *authorView;
@property (retain, nonatomic) UIImageView *avatarView;
@property (retain, nonatomic) UILabel *authorLabel;
@property (retain, nonatomic) UILabel *detailLabel;
@property (retain, nonatomic) UIButton *moreBtn;
@property (readonly, nonatomic) double mediaCornerRadius;
@property (readonly, nonatomic) UIImageView *snapShootView;
@property (retain, nonatomic) AFDCloseFriendsMomentFeedCellTapHandler *tapHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)reuseIdentifier;

- (void)didFinishCloseFriendsWithUser:(id)arg0 status:(long long)arg1;
- (id)momentMediaView;
- (id)currentMomentModel;
- (id)blurMaskView;
- (void)updateCellWithMomentModel:(id)arg0 context:(id)arg1;
- (double)mediaCornerRadius;
- (void)loadMaskViewIfNeededWithMaskURLs:(id)arg0 image:(id)arg1 loadCompletion:(id /* block */)arg2;
- (id)consecutiveChatStateView;
- (void)setAuthorLabel:(id)arg0;
- (id)authorLabel;
- (void)setMoreBtn:(id)arg0;
- (id)moreBtn;
- (void)setupGesture;
- (void)setupObserver;
- (id)authorView;
- (void)setAuthorView:(id)arg0;
- (id)topContainerView;
- (void)setTopContainerView:(id)arg0;
- (void)setCurrentMomentModel:(id)arg0;
- (BOOL)isReachCloseFriendsCountLimit;
- (void)didTapReceiveButton;
- (void)didTapIgnoreButton;
- (void)didTapShootButton;
- (id)indentAuthorMaskLayer;
- (id)exchangeBlurMaskView;
- (id)nameStackerView;
- (void)updateForRatio11;
- (void)updateForRatio43;
- (void)updateAuthorViewWithShadow;
- (void)updateAuthorView;
- (void)updateRatio43ViewForNewMomentAndNewBottom;
- (void)setContext:(id)arg0 momentModel:(id)arg1;
- (void)updateRatio;
- (void)updateBlurMaskViewIfNeeded:(BOOL)arg0;
- (id)detailTextForMomentModel:(id)arg0;
- (void)updateConsecutiveChatState:(BOOL)arg0;
- (BOOL)isShowingConsecutiveState;
- (void)showConsecutiveChatStateTipsIfNeeded:(id)arg0;
- (id)p_appendCustomString:(id)arg0 ToDetailText:(id)arg1;
- (void)tapMoreButton:(id)arg0;
- (void)consecutiveChatDaysInfoDidUpdateWithModel:(id)arg0;
- (void)updateCurrentCornerRadius:(double)arg0;
- (void)setMomentMediaView:(id)arg0;
- (id)snapShootView;
- (void)updateRatio43ViewForNewMoment;
- (void)updateBlurMaskViewBackgroundColorIfNeeded;
- (void)setBlurMaskView:(id)arg0;
- (void)setExchangeBlurMaskView:(id)arg0;
- (void)setIndentAuthorMaskLayer:(id)arg0;
- (void)setNameStackerView:(id)arg0;
- (void)setConsecutiveChatStateView:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void)setAvatarView:(id)arg0;
- (id)avatarView;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)titleLabel;
- (id)context;
- (void)layoutSubviews;
- (void)dealloc;
- (void)play;
- (void)setTitleLabel:(id)arg0;
- (id)parentViewController;
- (void)setParentViewController:(id)arg0;
- (void)setupUI;
- (id)detailLabel;
- (id)tapHandler;
- (void)setTapHandler:(id)arg0;
- (void)setDetailLabel:(id)arg0;
- (void)resetPlayer;
- (void)updateHeaderView;

@end