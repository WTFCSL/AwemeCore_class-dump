//
//     Generated by private class-dump
//

@class UIImageView, NSString, CAShapeLayer;
@protocol AWEScreenCastFloatingViewDelegate;

@interface AWEScreenCastFloatingView : UIView <AWEScreenCastFloatingViewProtocol> {
    BOOL _isShowing;
    BOOL _iconGrey;
    BOOL _isMoving;
    id<AWEScreenCastFloatingViewDelegate> _delegate;
    CAShapeLayer *_borderLayer;
    CAShapeLayer *_maskLayer;
    UIImageView *_imageView;
    long long _position;
}

@property (retain, nonatomic) CAShapeLayer *borderLayer;
@property (retain, nonatomic) CAShapeLayer *maskLayer;
@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) long long position;
@property (nonatomic) BOOL isMoving;
@property (nonatomic) BOOL isShowing;
@property (weak, nonatomic) id<AWEScreenCastFloatingViewDelegate> delegate;
@property (nonatomic) BOOL iconGrey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setIsShowing:(BOOL)arg0;
- (void)hideWithAnimated:(BOOL)arg0;
- (void)showWithAnimated:(BOOL)arg0 completion:(id /* block */)arg1;
- (BOOL)isRightSide;
- (void)rebuildConstrains;
- (void)handleButtonPan:(id)arg0;
- (void)changeMoveState:(BOOL)arg0;
- (void)ugPendantViewMoved:(id)arg0;
- (void)configBorderLayers;
- (struct CGPoint { double x0; double x1; })calculateCenter;
- (void)showCastTip;
- (void)setIconGrey:(BOOL)arg0;
- (BOOL)iconGrey;
- (BOOL)isMoving;
- (void)setIsMoving:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)position;
- (id)imageView;
- (void)setPosition:(long long)arg0;
- (BOOL)isShowing;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setImageView:(id)arg0;
- (id)delegate;
- (void)layoutSublayersOfLayer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)dealloc;
- (id)maskLayer;
- (void)setMaskLayer:(id)arg0;
- (id)borderLayer;
- (void)setBorderLayer:(id)arg0;

@end
