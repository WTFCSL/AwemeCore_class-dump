//
//     Generated by private class-dump
//

@class UIImageView, UILabel;

@interface AWEUserDetailIconView : UIControl {
    BOOL _isFromFamiliar;
    UIImageView *_imageView;
    UIImageView *_addImageView;
    UILabel *_textLabel;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *addImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL isFromFamiliar;

- (id)addImageView;
- (void)setAddImageView:(id)arg0;
- (BOOL)isFromFamiliar;
- (void)setIsFromFamiliar:(BOOL)arg0;
- (void)relayoutTextLabel;
- (void)updateFCoinFollow:(BOOL)arg0;
- (void)switchToFollow:(long long)arg0;
- (void)switchToSendMsg;
- (id)textLabel;
- (void).cxx_destruct;
- (id)imageView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (BOOL)isDarkTheme;
- (void)setHighlighted:(BOOL)arg0;
- (void)setTextLabel:(id)arg0;

@end
