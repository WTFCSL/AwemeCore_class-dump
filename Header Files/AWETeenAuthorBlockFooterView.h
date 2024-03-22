//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWETeenAuthorBlockFooterView : UICollectionReusableView {
    UIView *_contentView;
    UIImageView *_blockImageView;
    UILabel *_titleLabel;
    UILabel *_subTitleLabel;
}

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *blockImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subTitleLabel;

- (void)p_setupUI;
- (id)blockImageView;
- (void)showContent:(BOOL)arg0;
- (void)setBlockImageView:(id)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)contentView;
- (void)setTitleLabel:(id)arg0;
- (void)setContentView:(id)arg0;
- (id)subTitleLabel;
- (void)setSubTitleLabel:(id)arg0;

@end
