//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEECOMIMSubCardCommentUserInfoView : UIView {
    UIImageView *_avaterView;
    UILabel *_nickLabel;
}

@property (retain, nonatomic) UIImageView *avaterView;
@property (retain, nonatomic) UILabel *nickLabel;

+ (double)designHeight;
+ (double)avatarHeight;

- (id)avaterView;
- (id)nickLabel;
- (void)bindAvatarString:(id)arg0 nickName:(id)arg1;
- (void)setAvaterView:(id)arg0;
- (void)setNickLabel:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;

@end