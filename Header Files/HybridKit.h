//
//     Generated by private class-dump
//

@class NSDictionary;

@interface HybridKit : NSObject {
    NSDictionary *_defaultGlobalProps;
}

@property (retain, nonatomic) NSDictionary *defaultGlobalProps;

+ (id)sharedInstance;

- (id)defaultGlobalProps;
- (void)setDefaultGlobalProps:(id)arg0;
- (void)setupWebKit;
- (id)kitViewWithUrl:(id)arg0 context:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (void)unregisterResourceLoaderWithBid:(id)arg0;
- (void)setupCrashReportInfoWithParam:(id)arg0;
- (void)handleOptimizedView:(id)arg0 context:(id)arg1;
- (id)createWebViewWithParam:(id)arg0 context:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)createLynxViewWithParam:(id)arg0 context:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)kitViewWithParam:(id)arg0 context:(id)arg1 frame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2;
- (id)resolvedURLFromParam:(id)arg0;
- (void)configGlobalPropsInParams:(id)arg0;
- (BOOL)enableLynxDevtool:(id)arg0 withOptions:(id)arg1;
- (void)setupLynxKit;
- (void)registerResourceLoader:(id)arg0 forBid:(id)arg1;
- (void)configDefaultGlobalProps:(id)arg0;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(void *)arg3;

@end
