//
//     Generated by private class-dump
//

@class BDXLifeCycleImpl, NSString;

@interface AnnieBulletBusinessImpl : NSObject <BDXBusinessProtocol, BDXServiceProtocol> {
    BDXLifeCycleImpl *_containerLifeCycle;
}

@property (retain, nonatomic) BDXLifeCycleImpl *containerLifeCycle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (unsigned long long)serviceScope;
+ (id)serviceBizID;
+ (id)createService;
+ (unsigned long long)serviceType;

- (id)_handleConfig:(id)arg0 context:(id)arg1;
- (void)_configBridgeWithContext:(id)arg0;
- (id)willResolveScheme:(id)arg0 context:(id)arg1;
- (void)didResolveScheme:(id)arg0 schemaModel:(id)arg1 schemaClazz:(Class)arg2 context:(id)arg3;
- (id)containerLifeCycle;
- (void)setContainerLifeCycle:(id)arg0;
- (void).cxx_destruct;

@end