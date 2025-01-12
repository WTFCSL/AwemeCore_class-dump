//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol AWECommerceModuleService, AWEOHRServiceManager;

@interface AWEAiPortraitProducerImpl : IESMutablePortraitProducer {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
    id<AWEOHRServiceManager> _ohrService;
    id<AWECommerceModuleService> _commerceModuleService;
    NSDictionary *_valueGetterDict;
    long long _harRctRange;
}

@property (weak, nonatomic) id<AWEOHRServiceManager> ohrService;
@property (weak, nonatomic) id<AWECommerceModuleService> commerceModuleService;
@property (retain, nonatomic) NSDictionary *valueGetterDict;
@property (nonatomic) long long harRctRange;

+ (id)sharedInstance;

- (id)getPortrait:(id)arg0;
- (id)getPortraits;
- (void)doSetup;
- (void)configKeys;
- (long long)harRctRange;
- (id)commerceModuleService;
- (id)ohrService;
- (id)portraitValueFromOHRHand:(long long)arg0;
- (void)setValueGetterDict:(id)arg0;
- (id)portraitConfigForKey:(id)arg0;
- (id)valueGetterDict;
- (void)setOhrService:(id)arg0;
- (void)setCommerceModuleService:(id)arg0;
- (void)setHarRctRange:(long long)arg0;
- (BOOL)containsKey:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
