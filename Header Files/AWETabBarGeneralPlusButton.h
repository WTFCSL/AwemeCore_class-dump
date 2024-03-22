//
//     Generated by private class-dump
//

@class UIView;
@protocol AWETabbarInnerView;

@interface AWETabBarGeneralPlusButton : AWETabBarPlusButton {
    BOOL _alreadyHighlighted;
    UIView<AWETabbarInnerView> *_innerView;
}

@property (retain, nonatomic) UIView<AWETabbarInnerView> *innerView;
@property (nonatomic) BOOL alreadyHighlighted;

+ (id)button;

- (void)setInnerView:(id)arg0;
- (BOOL)alreadyHighlighted;
- (void)setAlreadyHighlighted:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setHighlighted:(BOOL)arg0;
- (void)setupUI;
- (id)innerView;

@end
