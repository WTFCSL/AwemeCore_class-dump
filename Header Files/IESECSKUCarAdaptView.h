//
//     Generated by private class-dump
//

@class UIImageView, UIView, IESECSKUCarAdaptViewModel, UILabel;

@interface IESECSKUCarAdaptView : UIStackView {
    IESECSKUCarAdaptViewModel *_viewModel;
    UIView *_separator;
    UIImageView *_icon;
    UILabel *_discptionLabel;
    UILabel *_carNameLabel;
    UILabel *_changeCarLabel;
    UIImageView *_arrowImage;
}

@property (retain, nonatomic) IESECSKUCarAdaptViewModel *viewModel;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UILabel *discptionLabel;
@property (retain, nonatomic) UILabel *carNameLabel;
@property (retain, nonatomic) UILabel *changeCarLabel;
@property (retain, nonatomic) UIImageView *arrowImage;

- (id)discptionLabel;
- (id)changeCarLabel;
- (id)carNameLabel;
- (void)setDiscptionLabel:(id)arg0;
- (void)setCarNameLabel:(id)arg0;
- (void)setChangeCarLabel:(id)arg0;
- (id)icon;
- (void).cxx_destruct;
- (id)separator;
- (void)setSeparator:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)setIcon:(id)arg0;
- (void)setupUI;
- (id)arrowImage;
- (void)setArrowImage:(id)arg0;

@end