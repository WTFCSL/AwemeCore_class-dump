//
//     Generated by private class-dump
//

@class CAShapeLayer, AWEShareSaveAlertButtonModel, UIView;

@interface AWEShareSaveAlertButton : UIButton {
    UIView *_loadingView;
    CAShapeLayer *_loadingLayer;
    AWEShareSaveAlertButtonModel *_buttonModel;
}

@property (retain, nonatomic) UIView *loadingView;
@property (retain, nonatomic) CAShapeLayer *loadingLayer;
@property (retain, nonatomic) AWEShareSaveAlertButtonModel *buttonModel;

+ (id)buttonWithModel:(id)arg0;

- (id)buttonModel;
- (void)setButtonModel:(id)arg0;
- (void)setupBinding;
- (id)loadingLayer;
- (void)setLoadingLayer:(id)arg0;
- (void)updateBackgroundColor;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
