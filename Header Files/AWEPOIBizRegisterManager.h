//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface AWEPOIBizRegisterManager : NSObject {
    NSMutableArray *_providers;
}

@property (retain, nonatomic) NSMutableArray *providers;

+ (id)sharedManager;

- (void)registerExtensionWithBiz:(id)arg0 extensionManager:(id)arg1 pageContext:(id)arg2;
- (void)setupCommonExtensionsWithManager:(id)arg0;
- (void)updateBizCode:(id)arg0 extensionManager:(id)arg1 pageContext:(id)arg2;
- (id)performanceProviderForBiz:(id)arg0;
- (id)uiProviderForBiz:(id)arg0;
- (void)setProviders:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)providers;
- (void)registerProvider:(id)arg0;

@end
