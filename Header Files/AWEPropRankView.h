//
//     Generated by private class-dump
//

@class UIImageView, UILabel, AWEAwemeModel;

@interface AWEPropRankView : UIView {
    AWEAwemeModel *_aweme;
    UIImageView *_iconImageView;
    UILabel *_textLabel;
    UIImageView *_arrowImageView;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) AWEAwemeModel *aweme;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)setupSubViews;
- (id)textLabel;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)iconImageView;
- (void)setTextLabel:(id)arg0;
- (void)setIconImageView:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
