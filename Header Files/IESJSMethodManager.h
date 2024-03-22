//
//     Generated by private class-dump
//

@protocol IESBridgeExecutor;

@interface IESJSMethodManager : NSObject {
    id<IESBridgeExecutor> _executor;
}

@property (weak, nonatomic) id<IESBridgeExecutor> executor;

+ (id)managerWithBridgeExecutor:(id)arg0;
+ (id)injectionScriptWithJSMethod:(id)arg0 messageHandler:(id)arg1;
+ (id)injectionScriptWithJSMethods:(id)arg0 messageHandler:(id)arg1;

- (id)allHandlerNames;
- (id)allJSMethodsForKey:(id)arg0;
- (void)deleteAllPipers;
- (void)enumerateAllMethodsForKey:(id)arg0 withHandler:(id /* block */)arg1;
- (void)queryPreferredJSMethodForKey:(id)arg0 withHandler:(id /* block */)arg1;
- (void)checkAllJSMethodsDefinedForKey:(id)arg0 withHandler:(id /* block */)arg1;
- (void).cxx_destruct;
- (id)executor;
- (void)setExecutor:(id)arg0;

@end