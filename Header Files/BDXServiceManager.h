//
//     Generated by private class-dump
//

@class AnnieXServiceHolder;

@interface BDXServiceManager : NSObject {
    AnnieXServiceHolder *_serviceHolder;
    AnnieXServiceHolder *_hostServiceHolder;
}

@property (retain, nonatomic) AnnieXServiceHolder *serviceHolder;
@property (retain, nonatomic) AnnieXServiceHolder *hostServiceHolder;

+ (id)getObjectWithProtocol:(id)arg0;
+ (id)getObjectWithProtocol:(id)arg0 bizID:(id)arg1;
+ (Class)getClassWithProtocol:(id)arg0;
+ (void)bindClass:(Class)arg0 toProtocol:(id)arg1;
+ (Class)getClassWithProtocol:(id)arg0 bizID:(id)arg1;
+ (void)registerDefaultSercice:(Class)arg0;
+ (id)__bdxservice_auto_register_serivce__AWEAnnieXDataProvider360;
+ (id)__bdxservice_auto_register_serivce__AWEBDARifleViewPopupOpener350;
+ (id)__bdxservice_auto_register_serivce__AWEECShoppingGuideLynxDataProvider120;
+ (id)__bdxservice_auto_register_serivce__AnnieXCardViewService390;
+ (id)__bdxservice_auto_register_serivce__AnnieXDataProviderManager410;
+ (id)getDefaultHostObjectWithProtocol:(id)arg0;
+ (id)__bdxservice_auto_register_serivce__BDXPopupContainerService290;
+ (id)__bdxservice_auto_register_serivce__BDXPopupContentService130;
+ (id)__bdxservice_auto_register_serivce__BDXRouter350;
+ (id)__bdxservice_auto_register_serivce__BDXSchema430;
+ (id)__bdxservice_auto_register_serivce__BDXPageContainerService540;
+ (id)__bdxservice_auto_register_serivce__BDXLynxKit440;
+ (id)__bdxservice_auto_register_serivce__BDXPreloadImpl560;
+ (id)__bdxservice_auto_register_serivce__BDXMonitor150;
+ (id)__bdxservice_auto_register_serivce__BDXResourceLoader160;
+ (void)_autoCollectBDXService;
+ (id)bdxservice_autoRegisteredService;
+ (id)ProtocolTypeMapTable;
+ (id)hostDefaultHolder;
+ (id)serviceHodler;
+ (void)registerHostDefaultService:(Class)arg0;
+ (void)bindDefaultHostClass:(Class)arg0 toProtocol:(id)arg1;
+ (Class)getDefaultHostClassWithProtocol:(id)arg0;
+ (id)__bdxservice_auto_register_serivce__BDXWebKit470;
+ (id)__bdxservice_auto_register_serivce__CJPayAnnieDataProvider110;
+ (id)__bdxservice_auto_register_serivce__IESLiveShortTouchDateAnnieXProvider180;
+ (id)__bdxservice_auto_register_serivce__IESLiveRankListDataAnnieXProvider170;
+ (id)sharedInstance;

- (void)__autoRegisterBDXServiceClass:(Class)arg0;
- (void)bdx_autoRegisterService;
- (id)serviceHolder;
- (id)hostServiceHolder;
- (void)setServiceHolder:(id)arg0;
- (void)setHostServiceHolder:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end