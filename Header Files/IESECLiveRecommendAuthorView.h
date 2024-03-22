//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface IESECLiveRecommendAuthorView : UIView {
    UIImageView *_avatarImageView;
    UILabel *_nickNameLabel;
    UIImageView *_hotIconImageView;
    UILabel *_hotLabel;
    UIImageView *_adTagImageView;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UIImageView *hotIconImageView;
@property (retain, nonatomic) UILabel *hotLabel;
@property (retain, nonatomic) UIImageView *adTagImageView;

- (void)setHotLabel:(id)arg0;
- (id)hotLabel;
- (id)nickNameLabel;
- (void)setNickNameLabel:(id)arg0;
- (id)hotIconImageView;
- (void)setHotIconImageView:(id)arg0;
- (id)adTagImageView;
- (void)setAdTagImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)updateWithModel:(id)arg0;

@end
