//
//     Generated by private class-dump
//

@class NSString, UIView, AWEECOMIMIndicatorView, BDImageView;

@interface AWEECOMIMEmoticonPackagePopView : UIView {
    BDImageView *_popEmoticonView;
    AWEECOMIMIndicatorView *_loadingView;
    UIView *_targetView;
    UIView *_showView;
    NSString *_emoticonUrl;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _rectInTargetView;
}

@property (retain, nonatomic) BDImageView *popEmoticonView;
@property (retain, nonatomic) AWEECOMIMIndicatorView *loadingView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rectInTargetView;
@property (weak, nonatomic) UIView *targetView;
@property (weak, nonatomic) UIView *showView;
@property (copy, nonatomic) NSString *emoticonUrl;

+ (id)shareInstance;

- (id)showView;
- (void)setShowView:(id)arg0;
- (id)popEmoticonView;
- (void)setEmoticonUrl:(id)arg0;
- (void)setRectInTargetView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)adjustPopViewFram;
- (id)emoticonUrl;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })rectInTargetView;
- (void)showWithURL:(id)arg0 targetView:(id)arg1 rectInTargetView:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 showView:(id)arg3;
- (void)dismissPopView;
- (void)setPopEmoticonView:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)targetView;
- (void)setTargetView:(id)arg0;
- (void)setupUI;
- (id)loadingView;
- (void)setLoadingView:(id)arg0;

@end
