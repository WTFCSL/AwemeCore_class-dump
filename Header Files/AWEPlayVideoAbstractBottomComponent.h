//
//     Generated by private class-dump
//

@class UILabel, UIImageView, UIView;
@protocol AWEPlayVideoAbstractBottomComponentDelegate;

@interface AWEPlayVideoAbstractBottomComponent : UICollectionReusableView {
    id<AWEPlayVideoAbstractBottomComponentDelegate> _delegate;
    UILabel *_label;
    UIView *_leftLine;
    UIView *_rightLine;
    UIImageView *_hintIconImv;
}

@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *leftLine;
@property (retain, nonatomic) UIView *rightLine;
@property (retain, nonatomic) UIImageView *hintIconImv;
@property (weak, nonatomic) id<AWEPlayVideoAbstractBottomComponentDelegate> delegate;

- (id)leftLine;
- (void)setLeftLine:(id)arg0;
- (id)rightLine;
- (void)setRightLine:(id)arg0;
- (void)hintIconImgaeViewTouched;
- (id)hintIconImv;
- (void)setHintIconImv:(id)arg0;
- (void)setBottomText:(id)arg0 interactionEnabled:(BOOL)arg1;
- (void).cxx_destruct;
- (void)setLabel:(id)arg0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)delegate;
- (id)label;
- (void)setDelegate:(id)arg0;

@end