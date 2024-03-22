//
//     Generated by private class-dump
//

@class UIView, AWEAccessibilityLabel, AWEAvatarImageView, AWEUserModel, UIImageView, YYLabel, AWENewHotSpotAuthorInfoFrame, UILabel, AWEAliasEditLabel;

@interface AWENewHotSpotAuthorInfoView : UIView {
    AWEAvatarImageView *_avatarImageView;
    UIImageView *_commentUserImageView;
    AWEAccessibilityLabel *_timeLabel;
    YYLabel *_authenticationInfoLabel;
    UIImageView *_avatarTagView;
    UIView *_authorBackgroundView;
    id /* block */ _avatarImageTappedBlock;
    id /* block */ _authorNameTappedBlock;
    id /* block */ _sourceTappedBlock;
    AWEUserModel *_author;
    AWEAliasEditLabel *_authorNameLabel;
    AWENewHotSpotAuthorInfoFrame *_frameModel;
    UIView *_sourceContainerView;
    UILabel *_sourceLabel;
    UIImageView *_sourceArrow;
}

@property (weak, nonatomic) AWEUserModel *author;
@property (retain, nonatomic) AWEAliasEditLabel *authorNameLabel;
@property (weak, nonatomic) AWENewHotSpotAuthorInfoFrame *frameModel;
@property (retain, nonatomic) UIView *sourceContainerView;
@property (retain, nonatomic) UILabel *sourceLabel;
@property (retain, nonatomic) UIImageView *sourceArrow;
@property (retain, nonatomic) AWEAvatarImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *commentUserImageView;
@property (retain, nonatomic) AWEAccessibilityLabel *timeLabel;
@property (retain, nonatomic) YYLabel *authenticationInfoLabel;
@property (retain, nonatomic) UIImageView *avatarTagView;
@property (retain, nonatomic) UIView *authorBackgroundView;
@property (copy, nonatomic) id /* block */ avatarImageTappedBlock;
@property (copy, nonatomic) id /* block */ authorNameTappedBlock;
@property (copy, nonatomic) id /* block */ sourceTappedBlock;

- (void)setSourceLabel:(id)arg0;
- (void)setAuthorNameLabel:(id)arg0;
- (id)authorNameLabel;
- (id)frameModel;
- (void)setFrameModel:(id)arg0;
- (void)createEditAliasView;
- (id)commentUserImageView;
- (void)setCommentUserImageView:(id)arg0;
- (void)configWithFrame:(id)arg0;
- (void)updateLayoutWithFrame:(id)arg0;
- (BOOL)isCommentCard:(id)arg0;
- (id)authorBackgroundView;
- (id)avatarTagView;
- (id)authenticationInfoLabel;
- (id)sourceArrow;
- (void)addGestureRecognizerForEnterFullScreen;
- (id)modifiedUserModelFromLiveRawDataWithAweme:(id)arg0;
- (void)authorNameTapped:(id)arg0;
- (void)avatarImageTapped:(id)arg0;
- (void)didBecomeAccessibilityFocused;
- (void)sourceTapped:(id)arg0;
- (id /* block */)avatarImageTappedBlock;
- (id /* block */)authorNameTappedBlock;
- (id /* block */)sourceTappedBlock;
- (void)setAuthenticationInfoLabel:(id)arg0;
- (void)setAvatarTagView:(id)arg0;
- (void)setAuthorBackgroundView:(id)arg0;
- (void)setAvatarImageTappedBlock:(id /* block */)arg0;
- (void)setAuthorNameTappedBlock:(id /* block */)arg0;
- (void)setSourceTappedBlock:(id /* block */)arg0;
- (void)setSourceArrow:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimeLabel:(id)arg0;
- (id)author;
- (void)setAuthor:(id)arg0;
- (id)timeLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)sourceLabel;
- (id)sourceContainerView;
- (void)setSourceContainerView:(id)arg0;

@end
