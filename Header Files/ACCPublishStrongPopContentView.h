//
//     Generated by private class-dump
//

@class UIButton, ACCAnimatedButton, UIView;

@interface ACCPublishStrongPopContentView : UIView {
    UIView *_backgroundView;
    UIButton *_closeButton;
    ACCAnimatedButton *_sureButton;
}

@property (readonly, nonatomic) UIView *backgroundView;
@property (readonly, nonatomic) UIButton *closeButton;
@property (readonly, nonatomic) ACCAnimatedButton *sureButton;

- (id)sureButton;
- (id)backgroundView;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (id)closeButton;
- (void)p_init;

@end