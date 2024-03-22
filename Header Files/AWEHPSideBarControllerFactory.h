//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWEHPSideBarControllerFactory : NSObject <AWEHPListKitControllerFactoryProtocol> {
    NSMutableDictionary *_itemControllerConfig;
    NSMutableDictionary *_moduleControllerConfig;
}

@property (retain, nonatomic) NSMutableDictionary *itemControllerConfig;
@property (retain, nonatomic) NSMutableDictionary *moduleControllerConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)setModuleControllerConfig:(id)arg0;
- (void)setItemControllerConfig:(id)arg0;
- (void)registerModuleController;
- (void)registerItemController;
- (id)moduleControllerConfig;
- (id)itemControllerConfig;
- (void)registerModuleControllerWithConfig:(id)arg0;
- (void)registerItemControllerWithConfig:(id)arg0;
- (id)createModuleControllerWithModel:(id)arg0 withItemControllers:(id)arg1 withManager:(id)arg2 withContext:(id)arg3;
- (BOOL)hasSupportModuleType:(id)arg0;
- (id)createItemControllerWithBusinessType:(id)arg0 withContext:(id)arg1 extraData:(id)arg2;
- (BOOL)hasSupportItemType:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;

@end