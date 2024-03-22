//
//     Generated by private class-dump
//

@class AWEPOIRepeatBackgroundView, UIImageView, UILabel, UIView, AWEPOIUGCRateFoldedLoadMoreComponentViewModel;

@interface AWEPOIUGCRateFoldedLoadMoreComponentView : DitoComponentView {
    UIView *_containerView;
    UILabel *_textLabel;
    UIImageView *_arrowIcon;
    UIView *_line;
    AWEPOIUGCRateFoldedLoadMoreComponentViewModel *_viewModel;
    AWEPOIRepeatBackgroundView *_textureBackgroundView;
}

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowIcon;
@property (retain, nonatomic) UIView *line;
@property (weak, nonatomic) AWEPOIUGCRateFoldedLoadMoreComponentViewModel *viewModel;
@property (retain, nonatomic) AWEPOIRepeatBackgroundView *textureBackgroundView;

- (void)updateViewModel:(id)arg0;
- (id)arrowIcon;
- (void)setArrowIcon:(id)arg0;
- (id)textureBackgroundView;
- (void)setTextureBackgroundView:(id)arg0;
- (void)didTapFooter;
- (id)textLabel;
- (void).cxx_destruct;
- (void)setContainerView:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setViewModel:(id)arg0;
- (id)containerView;
- (id)viewModel;
- (id)line;
- (void)setTextLabel:(id)arg0;
- (void)setLine:(id)arg0;
- (void)setupUI;

@end
