//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWEPlayInteractionDislikePanelCell : UITableViewCell {
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UIView *_seperateLineView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *seperateLineView;

- (id)seperateLineView;
- (void)setSeperateLineView:(id)arg0;
- (void)configWithDislikeModel:(id)arg0;
- (void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1;
- (id)initWithStyle:(long long)arg0 reuseIdentifier:(id)arg1;
- (void).cxx_destruct;
- (id)titleLabel;
- (void)setTitleLabel:(id)arg0;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setupUI;

@end