//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface IESECFeedSameGoodsTopView : UIView {
    BOOL _showFullScreenStyle;
    id /* block */ _close;
    UIImageView *_arrowImageView;
    UILabel *_titleLabel;
    UIButton *_closeButton;
}

@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) BOOL showFullScreenStyle;
@property (copy, nonatomic) id /* block */ close;

- (void)closeButtonClick:(id)arg0;
- (void)setClose:(id /* block */)arg0;
- (void)arrowTapped;
- (void)setShowFullScreenStyle:(BOOL)arg0;
- (BOOL)showFullScreenStyle;
- (void).cxx_destruct;
- (id /* block */)close;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)closeButton;
- (void)setCloseButton:(id)arg0;
- (id)arrowImageView;
- (void)setArrowImageView:(id)arg0;

@end
