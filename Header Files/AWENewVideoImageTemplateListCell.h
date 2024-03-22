//
//     Generated by private class-dump
//

@class UIImageView, UIView;

@interface AWENewVideoImageTemplateListCell : UICollectionViewCell {
    BOOL _isSelect;
    UIView *_selectedIndicatorView;
    UIView *_coverView;
    UIImageView *_previewImageView;
}

@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIImageView *previewImageView;
@property (nonatomic) BOOL isSelect;

- (id)selectedIndicatorView;
- (void)setSelectedIndicatorView:(id)arg0;
- (void)setIsSelect:(BOOL)arg0;
- (BOOL)isSelect;
- (void)setCoverImageCornerRadius;
- (void)configCoverWith:(id)arg0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setupUI;
- (id)previewImageView;
- (void)setPreviewImageView:(id)arg0;
- (id)coverView;
- (void)setCoverView:(id)arg0;

@end
