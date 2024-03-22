//
//     Generated by private class-dump
//

@interface AWEPOILoadingDisplayControl : NSObject {
    BOOL _isEnded;
    BOOL _isDisplaying;
    id /* block */ _displayBlock;
    id /* block */ _dismissBlock;
}

@property (copy, nonatomic) id /* block */ displayBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (nonatomic) BOOL isEnded;
@property (nonatomic) BOOL isDisplaying;

- (void)setIsDisplaying:(BOOL)arg0;
- (void)setDisplayBlock:(id /* block */)arg0;
- (id /* block */)displayBlock;
- (id)initWithDisplayBlock:(id /* block */)arg0 dismissBlock:(id /* block */)arg1;
- (void)showAfterDelay:(double)arg0;
- (void)p_showImp;
- (BOOL)isEnded;
- (void)setIsEnded:(BOOL)arg0;
- (void).cxx_destruct;
- (void)show;
- (BOOL)isDisplaying;
- (void)finishLoading;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end