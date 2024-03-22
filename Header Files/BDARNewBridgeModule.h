//
//     Generated by private class-dump
//

@class NSArray, NSMutableDictionary, NSString;

@interface BDARNewBridgeModule : BDARVLynxBridgeModule <BDLynxBridgeExecutor> {
    NSMutableDictionary *_methodsForReward;
    NSArray *_baseBridgeMethods;
}

@property (retain, nonatomic) NSMutableDictionary *methodsForReward;
@property (copy, nonatomic) NSArray *baseBridgeMethods;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)methodLookup;
+ (id)name;

- (id)initWithParam:(id)arg0;
- (void)setBaseBridgeMethods:(id)arg0;
- (void)call:(id)arg0 param:(id)arg1 callback:(id /* block */)arg2;
- (id)methodsForReward;
- (BOOL)hasParamModel:(id)arg0 withParams:(id)arg1;
- (BOOL)executeMethodWithMessage:(id)arg0 onBridge:(id)arg1 callback:(id /* block */)arg2;
- (void)setMethodsForReward:(id)arg0;
- (id)baseBridgeMethods;
- (void).cxx_destruct;
- (long long)priority;

@end
