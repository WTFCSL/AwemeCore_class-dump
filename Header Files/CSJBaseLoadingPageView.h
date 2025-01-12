//
//     Generated by private class-dump
//

@class UIButton, NSString;

@interface CSJBaseLoadingPageView : UIView <CSJLoadingPageProtocol> {
    BOOL _isPortrait;
    UIButton *_adButton;
    id /* block */ _clickBlock;
}

@property (retain, nonatomic) UIButton *adButton;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (nonatomic) BOOL isPortrait;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setClickBlock:(id /* block */)arg0;
- (void)p_adBtnClick;
- (id)adButton;
- (void)setAdButton:(id)arg0;
- (id /* block */)clickBlock;
- (id /* block */)adButtonClickBlock;
- (void)setAdButtonClickBlock:(id /* block */)arg0;
- (BOOL)isPortrait;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)layoutSubviews;
- (void)setIsPortrait:(BOOL)arg0;

@end
