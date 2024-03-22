//
//     Generated by private class-dump
//

@class AWEAwemeModel, UIView, NSString, AWERVAnchorItemContainerView, AWEUserModel, UIImageView, UIButton, AWERVCoCreatorHeadView, AWERelatedVideoDescriptionLabel, NSDictionary, AWERVDetailPageContext, UILabel;
@protocol AWERVDescriptionViewDelegate, AWEFeedLiveMarkViewProtocol;

@interface AWERVDescriptionView : UIView {
    BOOL _shouldShowPublishTime;
    NSString *_enterFrom;
    NSString *_enterMethod;
    NSString *_referString;
    NSDictionary *_logExtraDict;
    id<AWERVDescriptionViewDelegate> _delegate;
    AWERVDetailPageContext *_context;
    AWERVAnchorItemContainerView *_anchorContainerView;
    AWEAwemeModel *_model;
    AWEUserModel *_user;
    UIView *_authorContainerView;
    UIImageView *_avatarImageView;
    UILabel *_nicknameLabel;
    UIButton *_followButton;
    UIImageView *_xiguaIcon;
    UILabel *_titleLabel;
    AWERelatedVideoDescriptionLabel *_descriptionLabel;
    UIView *_expandHandleView;
    UIImageView *_expandImageView;
    UIView<AWEFeedLiveMarkViewProtocol> *_liveMarkView;
    UILabel *_publishTimeLabel;
    NSString *_currentTrackMixID;
    AWERVCoCreatorHeadView *_coCreatorHeadView;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) UIView *authorContainerView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nicknameLabel;
@property (retain, nonatomic) UIButton *followButton;
@property (retain, nonatomic) UIImageView *xiguaIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWERelatedVideoDescriptionLabel *descriptionLabel;
@property (retain, nonatomic) UIView *expandHandleView;
@property (retain, nonatomic) UIImageView *expandImageView;
@property (retain, nonatomic) AWERVAnchorItemContainerView *anchorContainerView;
@property (retain, nonatomic) UIView<AWEFeedLiveMarkViewProtocol> *liveMarkView;
@property (retain, nonatomic) UILabel *publishTimeLabel;
@property (copy, nonatomic) NSString *currentTrackMixID;
@property (retain, nonatomic) AWERVCoCreatorHeadView *coCreatorHeadView;
@property (nonatomic) BOOL shouldShowPublishTime;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (weak, nonatomic) id<AWERVDescriptionViewDelegate> delegate;
@property (weak, nonatomic) AWERVDetailPageContext *context;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setEnterMethod:(id)arg0;
- (id)enterMethod;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (void)awe_themeReload;
- (id)anchorContainerView;
- (id)xiguaIcon;
- (void)setXiguaIcon:(id)arg0;
- (id)followButton;
- (void)setFollowButton:(id)arg0;
- (id)liveMarkView;
- (void)setLiveMarkView:(id)arg0;
- (void)liveMaskViewShowIfNeeded:(BOOL)arg0 onView:(id)arg1;
- (double)titleLabelHeight;
- (void)announceAccessibilityMsg:(id)arg0;
- (id)expandImageView;
- (void)setExpandImageView:(id)arg0;
- (long long)descriptionLabelNumberOfLines;
- (id)__getRelationContext;
- (void)setAnchorContainerView:(id)arg0;
- (void)updateDescriptionLabel;
- (id)publishTimeLabel;
- (void)onFollowButtonTapped;
- (void)setPublishTimeLabel:(id)arg0;
- (id)currentTrackMixID;
- (void)setCurrentTrackMixID:(id)arg0;
- (id /* block */)descriptionLabelTextActionWithAttributedString:(id)arg0;
- (void)__updateFollowBtn:(BOOL)arg0;
- (double)__descriptionLabelRightOffset;
- (struct CGSize { double x0; double x1; })__descriptionLabelSize;
- (void)setShouldShowPublishTime:(BOOL)arg0;
- (BOOL)shouldShowPublishTime;
- (id)expandHandleView;
- (BOOL)shouldShowCoCreatorHeadView;
- (id)coCreatorHeadView;
- (void)__reset;
- (void)__handleXiguaVideo;
- (double)__topBufferHeight;
- (double)coCreatorHeadViewHeight;
- (double)authorContainerHeight;
- (double)__bottomBufferHeight;
- (id)authorContainerView;
- (id)__currentExpandImage;
- (void)__expandDidClick;
- (void)__executeUnfollow;
- (void)__executeFollow;
- (void)trackFollowAuthor:(BOOL)arg0;
- (void)onUserTapped:(id)arg0;
- (void)liveMarkViewAction;
- (void)updateDescriptionViewWithModel:(id)arg0;
- (void)descriptionViewWillBeHidden;
- (double)descriptionViewHeight;
- (void)mixVideoTapped;
- (void)setAuthorContainerView:(id)arg0;
- (void)setExpandHandleView:(id)arg0;
- (void)setCoCreatorHeadView:(id)arg0;
- (void)setUser:(id)arg0;
- (void)setModel:(id)arg0;
- (id)user;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)descriptionLabel;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (BOOL)shouldShowTitle;
- (id)nicknameLabel;
- (void)setNicknameLabel:(id)arg0;

@end
