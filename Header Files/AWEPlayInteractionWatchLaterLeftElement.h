//
//     Generated by private class-dump
//

@class DUXButton;

@interface AWEPlayInteractionWatchLaterLeftElement : AWEPlayInteractionLeftElement {
    id /* block */ _showHandler;
    DUXButton *_watchLaterGuideButton;
}

@property (copy, nonatomic) id /* block */ showHandler;
@property (retain, nonatomic) DUXButton *watchLaterGuideButton;

+ (BOOL)shouldShowWithModel:(id)arg0 referString:(id)arg1;
+ (void)recordShown:(id)arg0;
+ (void)invalidateRecordsIfNeeded;
+ (id)todayShownRecords;
+ (void)recordNotClick:(id)arg0;

- (void)initializeElement;
- (void)clickAction;
- (BOOL)isNeedDelayAppear;
- (void)showButtonIfNeeded;
- (id)activateInfoWithData:(id)arg0;
- (void)viewController_viewDidAppear;
- (void)layoutElementView;
- (void)viewController_viewWillDisappear;
- (id /* block */)showHandler;
- (void)setShowHandler:(id /* block */)arg0;
- (id)watchLaterGuideButton;
- (void)setWatchLaterGuideButton:(id)arg0;
- (void).cxx_destruct;
- (void)autoDismiss;
- (void)reset;
- (void)viewDidLoad;
- (void)hideButton;

@end
