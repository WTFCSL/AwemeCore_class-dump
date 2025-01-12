//
//     Generated by private class-dump
//

@class NSString, NSMapTable;

@interface BDLLynxModuleImpl : NSObject <BDPLynxBridgeLynxModuleObserverDelegate, BDLLynxModuleProtocol> {
    NSMapTable *_contextModuleMap;
    NSMapTable *_contextConfigMap;
}

@property (retain) NSMapTable *contextModuleMap;
@property (retain) NSMapTable *contextConfigMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;
+ (id)sharedInstance;

- (Class)lynxModule;
- (void)updateModuleData:(id)arg0 context:(id)arg1;
- (void)loadBdpModule:(id)arg0 withContext:(id)arg1;
- (void)unloadBdpModule:(id)arg0 withContext:(id)arg1;
- (void)bdlynxUpdateTemplateConfig:(id)arg0 context:(id)arg1;
- (void)bdlynxUpdateStorage:(id)arg0 context:(id)arg1;
- (id)contextModuleMap;
- (void)setContextModuleMap:(id)arg0;
- (id)contextConfigMap;
- (void)setContextConfigMap:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)versionString;
- (id)scriptPath;

@end
