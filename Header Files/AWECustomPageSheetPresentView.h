//
//     Generated by private class-dump
//

@class UIViewController;
@protocol AWECustomPageSheetPresentViewDelegate, AWECustomPageSheetViewControllerProtocol;

@interface AWECustomPageSheetPresentView : UIView {
    id<AWECustomPageSheetPresentViewDelegate> _delegate;
    double _cornerRadius;
    UIViewController<AWECustomPageSheetViewControllerProtocol> *_presentedViewController;
    struct CGSize { double width; double height; } _maskLayerSize;
}

@property (nonatomic) struct CGSize { double width; double height; } maskLayerSize;
@property (weak, nonatomic) UIViewController<AWECustomPageSheetViewControllerProtocol> *presentedViewController;
@property (weak, nonatomic) id<AWECustomPageSheetPresentViewDelegate> delegate;
@property (nonatomic) double cornerRadius;

- (BOOL)__presentedVCUserAutoLayout;
- (void)setMaskLayerSize:(struct CGSize { double x0; double x1; })arg0;
- (struct CGSize { double x0; double x1; })maskLayerSize;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)addSubview:(id)arg0;
- (id)delegate;
- (void)layoutSubviews;
- (void)setDelegate:(id)arg0;
- (void)setCornerRadius:(double)arg0;
- (id)initWithPresentedViewController:(id)arg0;
- (id)presentedViewController;
- (void)setPresentedViewController:(id)arg0;

@end