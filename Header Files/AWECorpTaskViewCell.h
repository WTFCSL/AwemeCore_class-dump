//
//     Generated by private class-dump
//

@class UIImageView, YYLabel;

@interface AWECorpTaskViewCell : UICollectionViewCell {
    UIImageView *_avatorImageView;
    YYLabel *_titleLabel;
    YYLabel *_descriptionLabel;
}

@property (retain, nonatomic) UIImageView *avatorImageView;
@property (retain, nonatomic) YYLabel *titleLabel;
@property (retain, nonatomic) YYLabel *descriptionLabel;

+ (id)identifier;

- (void)makeConstraints;
- (void)configWithTask:(id)arg0;
- (id)avatorImageView;
- (void)updateAvatarImageView:(id)arg0;
- (void)updateTitleText:(id)arg0;
- (void)updateDescriptionText:(id)arg0;
- (void)updateTaskConstraints;
- (void)setAvatorImageView:(id)arg0;
- (void).cxx_destruct;
- (void)setDescriptionLabel:(id)arg0;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)descriptionLabel;
- (void)setTitleLabel:(id)arg0;
- (void)_setupUI;

@end