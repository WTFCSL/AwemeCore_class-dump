//
//     Generated by private class-dump
//

@class _TtC8TempoiOS23TempoEngineStaticConfig;

@interface TempoiOS.TempoEngine : NSObject <NSObject> {
    void /* unknown type, empty encoding */ config;
    void /* unknown type, empty encoding */ globalProps;
    void /* unknown type, empty encoding */ cacher;
    void /* unknown type, empty encoding */ widgetMap;
    void /* unknown type, empty encoding */ env;
    void /* unknown type, empty encoding */ appMethodModule;
    void /* unknown type, empty encoding */ methodManager;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sizeQueue;
    void /* unknown type, empty encoding */ attributeImplProxyList;
}

@property (class, nonatomic, retain) _TtC8TempoiOS23TempoEngineStaticConfig *staticConfig;

+ (id)SDKVersion;
+ (BOOL)registerTemplateProviderWithTemplateProvider:(id)arg0;
+ (BOOL)registerResourceProviderWithResourceProvider:(id)arg0;
+ (void)publishEventWithName:(id)arg0 params:(id)arg1;
+ (void)addObserver:(id)arg0 selector:(SEL)arg1 name:(id)arg2;
+ (void)removeObserver:(id)arg0 name:(id)arg1;
+ (void)removeObserver:(id)arg0;
+ (BOOL)isTemplateDataLocalWithTemplate:(id)arg0;
+ (void)preloadTemplateListWithTemplateList:(id)arg0 complete:(id /* block */)arg1;
+ (void)asyncPreloadTemplateListWithTemplateList:(id)arg0 complete:(id /* block */)arg1;
+ (id)staticConfig;
+ (void)setStaticConfig:(id)arg0;

- (void)registerLogRecipientWithRecipient:(id)arg0;
- (BOOL)registerAPPMethodWithName:(id)arg0 impl:(id /* block */)arg1 options:(long long)arg2;
- (BOOL)registerMethodWithModuleName:(id)arg0 name:(id)arg1 impl:(id /* block */)arg2 options:(long long)arg3;
- (BOOL)registerOCWidgetWithEntity:(id)arg0 name:(id)arg1;
- (id)sizeWithConstrainedSize:(struct CGSize { double x0; double x1; })arg0 template:(id)arg1 uniqueID:(id)arg2 data:(id)arg3;
- (void)asyncSizeWithConstrainedSize:(struct CGSize { double x0; double x1; })arg0 template:(id)arg1 uniqueID:(id)arg2 data:(id)arg3 complete:(id /* block */)arg4;
- (void)preloadTemplateListWithTemplateList:(id)arg0 complete:(id /* block */)arg1;
- (void)asyncPreloadTemplateListWithTemplateList:(id)arg0 complete:(id /* block */)arg1;
- (void)preloadWithUrl:(id)arg0 data:(id)arg1;
- (id)rootViewWithTemplate:(id)arg0 uniqueID:(id)arg1 data:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3 preRootView:(id)arg4;
- (id)rootViewWithTemplate:(id)arg0 uniqueID:(id)arg1 data:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3 delegate:(id)arg4 preRootView:(id)arg5;
- (void)rootViewWillShow:(id)arg0;
- (void)rootViewCompleteShow:(id)arg0;
- (void)rootViewEndShow:(id)arg0;
- (void)offloadWithUniqueID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithConfig:(id)arg0;
- (void)dealloc;

@end
