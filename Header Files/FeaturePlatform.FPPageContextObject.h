//
//     Generated by private class-dump
//

@protocol IESServiceProvider;

@interface FeaturePlatform.FPPageContextObject : NSObject <ACCFPPageContextProtocol> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_combinedServiceProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContext;
    void /* unknown type, empty encoding */ page;
    void /* unknown type, empty encoding */ scopeContext;
}

@property (nonatomic, retain) id<IESServiceProvider> combinedServiceProvider;

- (void)handleViewDidAppear;
- (void)applicationDidChangeStatusBarOrientation;
- (id)combinedServiceProvider;
- (void)setCombinedServiceProvider:(id)arg0;
- (void)bindViewControllerWith:(id)arg0;
- (void)handleViewDidLoad:(id)arg0;
- (void)handleViewWillDisappear;
- (id)init;
- (void).cxx_destruct;
- (void)handleViewWillAppear;
- (void)handleViewDidDisappear;

@end