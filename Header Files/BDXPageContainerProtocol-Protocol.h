//
//     Generated by private class-dump
//

@protocol BDXPageDelegate;

@protocol BDXPageContainerProtocol <BDXContainerProtocol>

@property (nonatomic) BOOL popupIsPresenting;
@property (nonatomic) BOOL popupIsDismissing;
@property (weak, nonatomic) id<BDXPageDelegate> pageDelegate;

- (BOOL)close:(id)arg0 completion:(id /* block */)arg1;
- (BOOL)popupIsPresenting;
- (void)setPopupIsPresenting:(BOOL)arg0;
- (BOOL)popupIsDismissing;
- (void)setPopupIsDismissing:(BOOL)arg0;
- (BOOL)close:(id)arg0;
- (id)pageDelegate;
- (void)setPageDelegate:(id)arg0;

@optional

- (BOOL)shouldPageInternalBack;
- (void)updateStatusBarStatus:(long long)arg0;
- (void)setStatusBarBackgroundColor:(id)arg0;
- (void)disableSwipInteractivePopeGesture:(BOOL)arg0;
- (void)reload;
- (void)goBack;

@end
