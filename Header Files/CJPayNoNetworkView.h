//
//     Generated by private class-dump
//

@class UIImageView, UILabel, CJPayButton;

@interface CJPayNoNetworkView : UIView {
    UIImageView *_imageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
    CJPayButton *_refreshButton;
    id /* block */ _refreshBlock;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) CJPayButton *refreshButton;
@property (copy, nonatomic) id /* block */ refreshBlock;

- (void)p_setupUI;
- (void)p_refreshButtonTapped;
- (void).cxx_destruct;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (void)didMoveToWindow;
- (void)setTitleLabel:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;
- (id)refreshButton;
- (void)setRefreshButton:(id)arg0;
- (void)setRefreshBlock:(id /* block */)arg0;
- (id /* block */)refreshBlock;

@end
