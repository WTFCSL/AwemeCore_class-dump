//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSMutableDictionary, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_semaphore;

@interface TIMXImplManager : NSObject <TIMXStartUpTaskProtocol, TIMXInstanceScopeSingleton> {
    NSObject<OS_dispatch_semaphore> *p_proToInstanceAccessSemphore;
    NSMutableDictionary *p_proToInstanceDictLineLocks;
    BOOL _canLog;
    TIMXSDKInstance *_r;
    NSDictionary *_protocolClassPairs;
    NSDictionary *_protocolClassPairsForSingleton;
}

@property (copy, nonatomic) NSDictionary *protocolClassPairs;
@property (copy, nonatomic) NSDictionary *protocolClassPairsForSingleton;
@property (readonly, nonatomic) BOOL canLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)startUpOrder;
+ (void)startUpWithRootObject:(id)arg0;

- (Class)getClass:(id)arg0;
- (id)getImpl:(id)arg0;
- (id)protocolClassPairs;
- (void)setProtocolClassPairs:(id)arg0;
- (void)p_initImplInfos;
- (id)p_getImplOfSingleton:(id)arg0;
- (id)protocolClassPairsForSingleton;
- (BOOL)canLog;
- (void)p_lockProToInstanceDictLine:(id)arg0;
- (void)p_unlockProToInstanceDictLine:(id)arg0;
- (id)p_protocolClassInfoFromMachOWithKey:(id)arg0;
- (void)setProtocolClassPairsForSingleton:(id)arg0;
- (void).cxx_destruct;
- (id)initWithRootObject:(id)arg0;

@end
