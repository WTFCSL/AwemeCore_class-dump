//
//     Generated by private class-dump
//

@class UIImageView, UITapGestureRecognizer, UIView;

@interface AWELiveDuetPostureCollectionViewCell : AWEStudioBaseCollectionViewCell {
    BOOL _isCellSelected;
    UIImageView *_iconImageView;
    UIView *_selectedIndicatorView;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIView *selectedIndicatorView;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) BOOL isCellSelected;

- (void)addSubviews;
- (id)selectedIndicatorView;
- (BOOL)isCellSelected;
- (void)setIsCellSelected:(BOOL)arg0;
- (void)setSelectedIndicatorView:(id)arg0;
- (void)updateSelectedStatus:(BOOL)arg0;
- (void)updateIconImage:(id)arg0;
- (void)indicatorAppear;
- (void)indicatorDisappear;
- (void)tapAnimation;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (id)iconImageView;
- (void)setIconImageView:(id)arg0;
- (void)setTapGesture:(id)arg0;

@end
