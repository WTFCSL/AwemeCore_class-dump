//
//     Generated by private class-dump
//

@class NSString, UIImageView, UILabel, UITapGestureRecognizer;

@interface IESSegmentedItemCell : UICollectionViewCell <IESSegmentedControlItemViewProtocol> {
    BOOL _isSelected;
    UILabel *_titleLabel;
    UIImageView *_imageView;
    id /* block */ _accessibilityElementDidBecomeFocusedBlock;
    id /* block */ _imageClickBlock;
    UITapGestureRecognizer *_tapGesture;
}

@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) BOOL isSelected;
@property (copy, nonatomic) id /* block */ accessibilityElementDidBecomeFocusedBlock;
@property (copy, nonatomic) id /* block */ imageClickBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id /* block */)imageClickBlock;
- (void)setImageClickBlock:(id /* block */)arg0;
- (void)setAccessibilityElementDidBecomeFocusedBlock:(id /* block */)arg0;
- (void)imageClick;
- (id /* block */)accessibilityElementDidBecomeFocusedBlock;
- (id)accessibilityLabel;
- (id)accessibilityHint;
- (void)setIsSelected:(BOOL)arg0;
- (void).cxx_destruct;
- (unsigned long long)accessibilityTraits;
- (void)setAlpha:(double)arg0;
- (id)imageView;
- (id)titleLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)tapGesture;
- (void)setImageView:(id)arg0;
- (void)setTitleLabel:(id)arg0;
- (BOOL)isAccessibilityElement;
- (BOOL)isSelected;
- (void)accessibilityElementDidBecomeFocused;
- (void)setTapGesture:(id)arg0;

@end
