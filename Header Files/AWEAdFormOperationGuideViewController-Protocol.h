//
//     Generated by private class-dump
//

@protocol AWEAdFormOperationGuideViewController <AWECrotocol, AWECommerceComponentsMonitorProtocol>

@property (nonatomic) BOOL loadSuccess;
@property (nonatomic) BOOL formSubmitSuccess;
@property (nonatomic) BOOL shouldCloseFormOperation;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (void)setLoadSuccess:(BOOL)arg0;
- (void)setFormSubmitSuccess:(BOOL)arg0;
- (void)setShouldCloseFormOperation:(BOOL)arg0;
- (void)preLoadCSS;
- (void)showFromView:(id)arg0 model:(id)arg1;
- (BOOL)formSubmitSuccess;
- (BOOL)shouldCloseFormOperation;
- (BOOL)loadSuccess;
- (id /* block */)dismissBlock;
- (void)setDismissBlock:(id /* block */)arg0;

@end
