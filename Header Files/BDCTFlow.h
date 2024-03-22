//
//     Generated by private class-dump
//

@class BDCTEventTracker, BDCTFlowContext, BDCTAPIService, UINavigationController, UIViewController, BDCTFlowPerformance;

@interface BDCTFlow : NSObject {
    BOOL _forcePresent;
    BOOL _disableInteractivePopGesture;
    BDCTFlow *_superFlow;
    BDCTFlowContext *_context;
    BDCTFlowPerformance *_performance;
    UIViewController *_fromViewController;
    BDCTAPIService *_apiService;
    BDCTEventTracker *_eventTracker;
    UINavigationController *_rootNavigationController;
}

@property (retain, nonatomic) BDCTFlowContext *context;
@property (retain, nonatomic) BDCTAPIService *apiService;
@property (retain, nonatomic) BDCTEventTracker *eventTracker;
@property (retain, nonatomic) BDCTFlowPerformance *performance;
@property (weak, nonatomic) UINavigationController *rootNavigationController;
@property (weak, nonatomic) BDCTFlow *superFlow;
@property (nonatomic) BOOL forcePresent;
@property (nonatomic) BOOL disableInteractivePopGesture;
@property (weak, nonatomic) UIViewController *fromViewController;

+ (id)flowWithContext:(id)arg0;

- (void)dismissLoading;
- (void)setFromViewController:(id)arg0;
- (id)apiService;
- (void)setDisableInteractivePopGesture:(BOOL)arg0;
- (id)superFlow;
- (void)setForcePresent:(BOOL)arg0;
- (void)setSuperFlow:(id)arg0;
- (id)rootNavigationController;
- (void)setRootNavigationController:(id)arg0;
- (BOOL)forcePresent;
- (BOOL)disableInteractivePopGesture;
- (void)setApiService:(id)arg0;
- (id)facelivenessDetectResultWithParams:(id)arg0 error:(id)arg1;
- (id)initWithContext:(id)arg0;
- (void)showViewController:(id)arg0;
- (void).cxx_destruct;
- (id)fromViewController;
- (void)setContext:(id)arg0;
- (id)eventTracker;
- (id)context;
- (void)setEventTracker:(id)arg0;
- (void)showLoading;
- (void)setPerformance:(id)arg0;
- (id)performance;

@end
