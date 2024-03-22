//
//     Generated by private class-dump
//

@class NSMutableDictionary;

@interface BUJSBForwarding : NSObject {
    NSMutableDictionary *_aliasDic;
}

@property (retain, nonatomic) NSMutableDictionary *aliasDic;

+ (id)sharedInstance;

- (id)amendAliasWith:(id)arg0;
- (id)_generatePluginWithCommand:(id)arg0 engine:(id)arg1;
- (id)aliasDic;
- (void)setAliasDic:(id)arg0;
- (BOOL)forwardStaticPluginWithCommand:(id)arg0 engine:(id)arg1 completion:(id /* block */)arg2;
- (BOOL)forwardDynamicPluginWithCommand:(id)arg0 engine:(id)arg1 completion:(id /* block */)arg2;
- (id)aliasJSBForOrig:(id)arg0;
- (void)forwardJSBWithCommand:(id)arg0 engine:(id)arg1 completion:(id /* block */)arg2;
- (void)registeJSBAlias:(id)arg0 for:(id)arg1;
- (id)init;
- (void).cxx_destruct;

@end