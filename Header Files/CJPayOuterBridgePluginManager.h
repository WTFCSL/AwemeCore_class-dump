//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface CJPayOuterBridgePluginManager : NSObject {
    NSMutableDictionary *_bridgeRegistry;
}

@property (retain, nonatomic) NSMutableDictionary *bridgeRegistry;

+ (void)registerOuterBridge:(id)arg0 forMethod:(id)arg1;
+ (id)bridgeForMethod:(id)arg0;
+ (id)shared;

- (id)bridgeRegistry;
- (void)setBridgeRegistry:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
