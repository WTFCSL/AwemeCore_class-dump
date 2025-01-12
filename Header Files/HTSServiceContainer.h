//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSRecursiveLock;

@interface HTSServiceContainer : NSObject {
    NSRecursiveLock *_lock;
    NSMutableDictionary *_hashProtocolScope;
    NSMutableDictionary *_hashProtocolInstance;
    NSMutableDictionary *_hashProtocolService;
    HTSServiceContainer *_parentContainer;
}

- (id)initWithParentContainer:(id)arg0;
- (void)bindBlock:(id /* block */)arg0 toProtocol:(id)arg1 withScope:(int)arg2;
- (id)getProtocolService:(id)arg0;
- (id)__getMultipleInstanceProtocolName:(id)arg0;
- (id)__firstFoundCacheWithProtocolName:(id)arg0;
- (id)__getProtocolServiceWithProtocolName:(id)arg0;
- (int)__getScopeTypeWithProtocolName:(id)arg0;
- (id)__secondGetAndcheckCacheWithProtocolName:(id)arg0;
- (id)__getShareInstanceProtocolName:(id)arg0;
- (id)__getWeakShareInstanceProtocolName:(id)arg0;
- (void)bindClass:(Class)arg0 toProtocol:(id)arg1 withScope:(int)arg2;
- (id)init;
- (void).cxx_destruct;

@end
