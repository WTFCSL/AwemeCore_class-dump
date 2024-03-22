//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIButton;

@interface IESECSameGoodsEmptyViewCell : UICollectionViewCell {
    id /* block */ _retryButtonClick;
    long long _emptyStyle;
    UIImageView *_emptyImageView;
    UILabel *_titleLabel;
    UILabel *_contentLabel;
    UIButton *_retryButton;
}

@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIButton *retryButton;
@property (copy, nonatomic) id /* block */ retryButtonClick;
@property (nonatomic) long long emptyStyle;

- (long long)emptyStyle;
- (void)setEmptyStyle:(long long)arg0;
- (void)retryButtonClicked;
- (id)emptyImageView;
- (void)setEmptyImageView:(id)arg0;
- (id /* block */)retryButtonClick;
- (void)setRetryButtonClick:(id /* block */)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTitleLabel:(id)arg0;
- (void)setupUI;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)retryButton;
- (void)setRetryButton:(id)arg0;

@end