//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIStackView;

@interface IESECSKUTitleView : UIView {
    UIStackView *_mainStackView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    UILabel *_trailTitleLabel;
    UIImageView *_arrowImage;
}

@property (retain, nonatomic) UIStackView *mainStackView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UILabel *trailTitleLabel;
@property (retain, nonatomic) UIImageView *arrowImage;

- (void)configWithTitle:(id)arg0 subTtitle:(id)arg1 trailTitle:(id)arg2 hasArrow:(BOOL)arg3;
- (id)trailTitleLabel;
- (void)setTrailTitleLabel:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)clear;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)arrowImage;
- (void)setArrowImage:(id)arg0;
- (id)mainStackView;
- (void)setMainStackView:(id)arg0;

@end
