//
//     Generated by private class-dump
//

@class UIView;

@interface AWEPOIDetailHeaderImageComponentBaseView : DitoComponentView {
    BOOL _canPreview;
    UIView *_backgroundColorView;
}

@property (retain, nonatomic) UIView *backgroundColorView;
@property (readonly, nonatomic) BOOL canPreview;

- (void)pageDidScroll:(struct CGPoint { double x0; double x1; })arg0;
- (void)bindActionAndState;
- (void)updateComponentViewAlpha:(double)arg0;
- (void)updateBackgroundViewTop:(double)arg0;
- (BOOL)canPreview;
- (id)init;
- (void).cxx_destruct;
- (double)screenWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)screenHeight;
- (void)setupUI;
- (id)backgroundColorView;
- (void)setBackgroundColorView:(id)arg0;

@end
