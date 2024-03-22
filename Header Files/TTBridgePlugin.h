//
//     Generated by private class-dump
//

@protocol TTBridgeEngine;

@interface TTBridgePlugin : NSObject {
    id<TTBridgeEngine> _engine;
}

@property (weak, nonatomic) id<TTBridgeEngine> engine;

+ (id)sharedPlugin;
+ (id /* block */)handlerWithMethod:(id)arg0 ofEngine:(id)arg1;
+ (void)registerHandlerBlock:(id /* block */)arg0 forEngine:(id)arg1 selector:(SEL)arg2;
+ (unsigned long long)authType;
+ (unsigned long long)instanceType;

- (BOOL)hasExternalHandleForMethod:(id)arg0 params:(id)arg1 callback:(id /* block */)arg2;
- (void).cxx_destruct;
- (id)engine;
- (void)setEngine:(id)arg0;

@end
