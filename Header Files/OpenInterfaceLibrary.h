//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface OpenInterfaceLibrary : NSObject {
    NSMutableDictionary *_interfaceCache;
    NSMutableDictionary *_pluginCache;
    NSString *_authCode;
    void *_router;
}

@property (retain, nonatomic) NSMutableDictionary *interfaceCache;
@property (retain, nonatomic) NSMutableDictionary *pluginCache;
@property (retain, nonatomic) NSString *authCode;
@property void *router;

+ (id)getInstance:(id)arg0;
+ (id)getInstance;

- (void)setAuthCode:(id)arg0;
- (id)authCode;
- (id)getInterface:(id)arg0 error:(id *)arg1;
- (id)translateProtocolName:(id)arg0;
- (id)translateProtocolNameToPluginName:(id)arg0;
- (BOOL)loadPlugin:(Class)arg0 loadDependency:(BOOL)arg1 erroInfo:(id *)arg2;
- (BOOL)checkDependency:(Class)arg0 loadDependencyOption:(long long)arg1 errorInfo:(id *)arg2;
- (id)getInterfaceRaw:(id)arg0 errorInfo:(id *)arg1;
- (Class)getMetaClassFromPluginName:(id)arg0;
- (Class)getMetaClassFromInterface:(id)arg0;
- (id)interfaceCache;
- (void)setInterfaceCache:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void *)router;
- (void)setRouter:(void *)arg0;
- (id)pluginCache;
- (id)getInterface:(id)arg0;
- (void)setPluginCache:(id)arg0;

@end
