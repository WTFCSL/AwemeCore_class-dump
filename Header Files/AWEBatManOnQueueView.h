//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView, UIButton;

@interface AWEBatManOnQueueView : UIView {
    id /* block */ _playBlock;
    UIImageView *_avatarImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UIButton *_playButton;
    UIView *_bottomBar;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIButton *playButton;
@property (retain, nonatomic) UIView *bottomBar;
@property (copy, nonatomic) id /* block */ playBlock;

- (id /* block */)playBlock;
- (void)setPlayBlock:(id /* block */)arg0;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setBottomBar:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)bottomBar;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (void)playAction;
- (id)playButton;
- (void)updateWithModel:(id)arg0;
- (void)setPlayButton:(id)arg0;

@end
