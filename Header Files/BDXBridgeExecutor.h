//
//     Generated by private class-dump
//

@class NSCache, NSString;
@protocol BDXBridgeContainerProtocol;

@interface BDXBridgeExecutor : NSObject <BDXBridgeExecutorProtocol> {
    id<BDXBridgeContainerProtocol> _container;
    NSCache *_handleMethodNameCache;
}

@property (class, weak, nonatomic) Class lazyRegister;

@property (retain, nonatomic) NSCache *handleMethodNameCache;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)lazyRegister;
+ (void)setLazyRegister:(Class)arg0;

- (BOOL)canHandleMessage:(id)arg0;
- (void)handleMessage:(id)arg0 resultHandler:(id /* block */)arg1;
- (id /* block */)callHandlerWithMessage:(id)arg0;
- (BOOL)useMainThreadHandleMessage:(id)arg0;
- (void)updateMessageNamespace:(id)arg0;
- (id)handleMethodNameCache;
- (void)setHandleMethodNameCache:(id)arg0;
- (id)container;
- (void).cxx_destruct;
- (void)setContainer:(id)arg0;
- (id)initWithContainer:(id)arg0;

@end
