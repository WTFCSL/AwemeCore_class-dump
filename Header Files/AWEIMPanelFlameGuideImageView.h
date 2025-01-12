//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEIMPanelFlameGuideImageView : AWEIMPanelView {
    UIImageView *_bgImageView;
    UIImageView *_avatarImageView;
    UIImageView *_flameIcon;
    UILabel *_nameLabel;
    UILabel *_chatDaysLabel;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UIImageView *bgImageView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *flameIcon;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *chatDaysLabel;
@property (retain, nonatomic) UILabel *textLabel;

- (void)renderWithViewModel:(id)arg0;
- (void)p_setupUI;
- (double)p_calculateChatDaysLabelFontSizeWithText:(id)arg0;
- (id)flameIcon;
- (void)setFlameIcon:(id)arg0;
- (id)chatDaysLabel;
- (void)setChatDaysLabel:(id)arg0;
- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)nameLabel;
- (void)setTextLabel:(id)arg0;
- (void)setNameLabel:(id)arg0;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;
- (void)setBgImageView:(id)arg0;
- (id)bgImageView;

@end
