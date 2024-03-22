//
//     Generated by private class-dump
//

@class UILabel, UIImageView;

@interface AFDPreviewProgressIndicatorView : UIView {
    UILabel *_leftLabel;
    UIImageView *_separatorImageView;
    UILabel *_rightLabel;
}

@property (retain, nonatomic) UILabel *leftLabel;
@property (retain, nonatomic) UIImageView *separatorImageView;
@property (retain, nonatomic) UILabel *rightLabel;

+ (double)greatHeight;
+ (double)height;

- (void)p_setupViews;
- (void)updateWithCurrentCount:(long long)arg0 totalCount:(long long)arg1;
- (id)separatorImageView;
- (void)updateWithLeftAttributedString:(id)arg0 rightAttributedString:(id)arg1;
- (void)updateThickStyle;
- (void)updatePureTextStyle;
- (void)setSeparatorImageView:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)leftLabel;
- (id)rightLabel;
- (void)setLeftLabel:(id)arg0;
- (void)setRightLabel:(id)arg0;

@end
