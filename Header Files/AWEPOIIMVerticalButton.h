//
//     Generated by private class-dump
//

@class UIImageView, UIImage, UILabel, NSAttributedString;
@protocol AWEPOIIMVerticalButtonDelegate;

@interface AWEPOIIMVerticalButton : UIView {
    BOOL _changedAfterTapping;
    BOOL _switchOn;
    BOOL _isCenterX;
    id<AWEPOIIMVerticalButtonDelegate> _delegate;
    UIImageView *_imageView;
    UILabel *_label;
    NSAttributedString *_defaultAttrText;
    NSAttributedString *_switchOnAttrText;
    UIImage *_defaultImage;
    UIImage *_switchOnImage;
    id /* block */ _tappedHandleBlock;
    struct CGSize { double width; double height; } _imageSize;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _imageEdgeInsets;
    struct UIEdgeInsets { double top; double left; double bottom; double right; } _labelEdgeInsets;
}

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *label;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } labelEdgeInsets;
@property (nonatomic) BOOL isCenterX;
@property (weak, nonatomic) id<AWEPOIIMVerticalButtonDelegate> delegate;
@property (copy, nonatomic) NSAttributedString *defaultAttrText;
@property (copy, nonatomic) NSAttributedString *switchOnAttrText;
@property (retain, nonatomic) UIImage *defaultImage;
@property (retain, nonatomic) UIImage *switchOnImage;
@property (nonatomic) BOOL changedAfterTapping;
@property (nonatomic) BOOL switchOn;
@property (copy, nonatomic) id /* block */ tappedHandleBlock;

- (void)buttonDidTapped:(id)arg0;
- (void)p_setupView;
- (id)switchOnImage;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0 imageSize:(struct CGSize { double x0; double x1; })arg1 imageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg2 labelEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg3 isCenterX:(BOOL)arg4;
- (void)setChangedAfterTapping:(BOOL)arg0;
- (void)setDefaultAttrText:(id)arg0;
- (void)setSwitchOnAttrText:(id)arg0;
- (void)setSwitchOnImage:(id)arg0;
- (void)setTappedHandleBlock:(id /* block */)arg0;
- (BOOL)isCenterX;
- (id /* block */)tappedHandleBlock;
- (BOOL)changedAfterTapping;
- (id)defaultAttrText;
- (id)switchOnAttrText;
- (void)setIsCenterX:(BOOL)arg0;
- (struct CGSize { double x0; double x1; })imageSize;
- (void).cxx_destruct;
- (id)imageView;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })imageEdgeInsets;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (id)label;
- (void)setDelegate:(id)arg0;
- (void)setImageEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (void)setImageSize:(struct CGSize { double x0; double x1; })arg0;
- (id)defaultImage;
- (void)setLabelEdgeInsets:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })arg0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })labelEdgeInsets;
- (void)setDefaultImage:(id)arg0;
- (void)setSwitchOn:(BOOL)arg0;
- (BOOL)switchOn;

@end
