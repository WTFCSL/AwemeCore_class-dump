//
//     Generated by private class-dump
//

@class RACDisposable, UIImageView, IESGCPESecondReplyCellModel, UILabel, NSString, UIButton;

@interface IESGCPESecondReplyTableViewCell : UITableViewCell <IESGCPEDetailCell> {
    IESGCPESecondReplyCellModel *_cellModel;
    id /* block */ _likeHandler;
    id /* block */ _iconTapHandler;
    id /* block */ _moreHandler;
    UIImageView *_avatarImageView;
    UILabel *_formNicknameLabel;
    UILabel *_toNicknameLabel;
    UILabel *_contentLabel;
    UILabel *_dateLabel;
    UIButton *_likeButton;
    UIImageView *_likeImageView;
    UILabel *_likeLabel;
    UIImageView *_triangleImageView;
    UIButton *_moreButton;
    UIImageView *_moreImageView;
    RACDisposable *_likeDisposable;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *formNicknameLabel;
@property (retain, nonatomic) UILabel *toNicknameLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UILabel *dateLabel;
@property (retain, nonatomic) UIButton *likeButton;
@property (retain, nonatomic) UIImageView *likeImageView;
@property (retain, nonatomic) UILabel *likeLabel;
@property (retain, nonatomic) UIImageView *triangleImageView;
@property (retain, nonatomic) UIButton *moreButton;
@property (retain, nonatomic) UIImageView *moreImageView;
@property (retain, nonatomic) RACDisposable *likeDisposable;
@property (retain, nonatomic) IESGCPESecondReplyCellModel *cellModel;
@property (copy, nonatomic) id /* block */ likeHandler;
@property (copy, nonatomic) id /* block */ iconTapHandler;
@property (copy, nonatomic) id /* block */ moreHandler;
@property (copy, nonatomic) id /* block */ needsUpdateViewConstraints;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCellModel:(id)arg0;
- (void)configWithCellModel:(id)arg0;
- (void)setMoreImageView:(id)arg0;
- (id)moreImageView;
- (id)likeImageView;
- (void)setLikeImageView:(id)arg0;
- (void)moreButtonDidClicked;
- (void)likeButtonDidClicked;
- (id)likeLabel;
- (void)setLikeLabel:(id)arg0;
- (void)trackMoreButtonClick;
- (void)initUserInterface;
- (void)setIconTapHandler:(id /* block */)arg0;
- (void)setLikeHandler:(id /* block */)arg0;
- (id /* block */)likeHandler;
- (id /* block */)moreHandler;
- (void)setMoreHandler:(id /* block */)arg0;
- (id /* block */)iconTapHandler;
- (id)likeDisposable;
- (void)setLikeDisposable:(id)arg0;
- (void)shouldShowMoreButton:(BOOL)arg0;
- (void)trackLikeButtonClickEvent;
- (void)trackUserAvatarClick;
- (void)avatarTap:(id)arg0;
- (id)triangleImageView;
- (void)setTriangleImageView:(id)arg0;
- (id)formNicknameLabel;
- (id)toNicknameLabel;
- (void)setFormNicknameLabel:(id)arg0;
- (void)setToNicknameLabel:(id)arg0;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)moreButton;
- (void)setMoreButton:(id)arg0;
- (void)setSelected:(BOOL)arg0 animated:(BOOL)arg1;
- (void)awakeFromNib;
- (id)dateLabel;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setDateLabel:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)cellModel;
- (id)likeButton;
- (void)setLikeButton:(id)arg0;

@end