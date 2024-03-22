//
//     Generated by private class-dump
//

@class UIImageView, UIImage, UILabel, UIView;

@interface ACCRichTextSocialToolbarMentionItemCell : ACCRichTextSocialToolbarBaseItemCell {
    UIImageView *_avatarImageView;
    UILabel *_userNameLabel;
    UIView *_loadingLabelFakeView;
    UIView *_loadingImageFakeView;
    UIImage *_placeholderImage;
}

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *loadingLabelFakeView;
@property (retain, nonatomic) UIView *loadingImageFakeView;
@property (retain, nonatomic) UIImage *placeholderImage;

+ (struct CGSize { double x0; double x1; })maxContentDisplaySize;
+ (struct CGSize { double x0; double x1; })sizeWithUser:(id)arg0;

- (id)userNameLabel;
- (void)setUserNameLabel:(id)arg0;
- (id)loadingLabelFakeView;
- (void)setLoadingLabelFakeView:(id)arg0;
- (void)configWithUser:(id)arg0 isSelected:(BOOL)arg1 style:(long long)arg2;
- (id)loadingImageFakeView;
- (void)updateCellColorStyle:(long long)arg0;
- (void)setLoadingImageFakeView:(id)arg0;
- (id)placeholderImage;
- (id)accessibilityLabel;
- (void).cxx_destruct;
- (void)setup;
- (void)setPlaceholderImage:(id)arg0;
- (BOOL)isAccessibilityElement;
- (id)avatarImageView;
- (void)setAvatarImageView:(id)arg0;

@end
