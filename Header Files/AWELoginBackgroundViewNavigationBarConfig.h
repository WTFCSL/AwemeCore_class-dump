//
//     Generated by private class-dump
//

@class UIColor, UIImage, AWENavigationBar, UIButton;

@interface AWELoginBackgroundViewNavigationBarConfig : NSObject {
    BOOL _hideBottomline;
    AWENavigationBar *_navigationBar;
    UIButton *_leftButton;
    UIButton *_rightButton;
    UIColor *_bgColor;
    UIImage *_leftImage;
    UIColor *_rightColor;
    UIColor *_rightBgColor;
}

@property (retain, nonatomic) UIColor *bgColor;
@property (retain, nonatomic) UIImage *leftImage;
@property (retain, nonatomic) UIColor *rightColor;
@property (retain, nonatomic) UIColor *rightBgColor;
@property (weak, nonatomic) AWENavigationBar *navigationBar;
@property (weak, nonatomic) UIButton *leftButton;
@property (weak, nonatomic) UIButton *rightButton;
@property (nonatomic) BOOL hideBottomline;

- (void)setRightColor:(id)arg0;
- (id)rightColor;
- (void)setHideBottomline:(BOOL)arg0;
- (BOOL)hideBottomline;
- (id)rightBgColor;
- (void)setRightBgColor:(id)arg0;
- (void)setLeftButton:(id)arg0;
- (id)leftButton;
- (id)rightButton;
- (void).cxx_destruct;
- (void)setRightButton:(id)arg0;
- (id)navigationBar;
- (void)setNavigationBar:(id)arg0;
- (id)leftImage;
- (void)setLeftImage:(id)arg0;
- (id)bgColor;
- (void)setBgColor:(id)arg0;

@end
