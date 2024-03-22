//
//     Generated by private class-dump
//

@class UIImageView, UILabel, UIView;

@interface AWETeenHotSpotCollectionViewCell : UICollectionViewCell {
    BOOL _isSelected;
    UIImageView *_coverView;
    UILabel *_titleLabel;
    UILabel *_pageviewLabel;
    UIView *_emptyTitleLabel;
    UIView *_emptyPageviewLabel;
}

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *pageviewLabel;
@property (nonatomic) BOOL isSelected;
@property (retain, nonatomic) UIView *emptyTitleLabel;
@property (retain, nonatomic) UIView *emptyPageviewLabel;

- (void)configWithHotSpotModel:(id)arg0;
- (id)pageviewLabel;
- (id)emptyTitleLabel;
- (id)emptyPageviewLabel;
- (void)setPageviewLabel:(id)arg0;
- (void)setEmptyTitleLabel:(id)arg0;
- (void)setEmptyPageviewLabel:(id)arg0;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setSelected:(BOOL)arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isSelected;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end