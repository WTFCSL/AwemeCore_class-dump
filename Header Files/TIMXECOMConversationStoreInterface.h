//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance;

@interface TIMXECOMConversationStoreInterface : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    id _realTarget;
}

@property (retain, nonatomic) id realTarget;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)resolveClassMethod:(SEL)arg0;

- (id)realTarget;
- (void)notImplFunc;
- (void)setRealTarget:(id)arg0;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg0;
- (id)methodSignatureForSelector:(SEL)arg0;
- (id)forwardingTargetForSelector:(SEL)arg0;
- (id)initWithRootObject:(id)arg0;

@end
