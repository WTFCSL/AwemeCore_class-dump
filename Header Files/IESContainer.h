//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSHashTable, NSString;
@protocol IESServiceRegister, IESServiceProvider;

@interface IESContainer : NSObject <SwiftIdentifierSupport, IESServiceRegister, IESServiceProvider> {
    id<IESServiceRegister> _parent;
    IESContainer *_friendContainer;
    NSMutableDictionary *_services;
    NSMutableDictionary *_blocksNeedServicesResponse;
    id<IESServiceProvider> _parentContainer;
    NSHashTable *_childContainers;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _serviceDataLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _blockDataLock;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _childDataLock;
}

@property (retain, nonatomic) NSMutableDictionary *services;
@property (retain, nonatomic) NSMutableDictionary *blocksNeedServicesResponse;
@property (retain, nonatomic) id<IESServiceProvider> parentContainer;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } serviceDataLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } blockDataLock;
@property (nonatomic) struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } childDataLock;
@property (retain, nonatomic) NSHashTable *childContainers;
@property (weak) IESContainer *friendContainer;
@property (readonly, nonatomic) id<IESServiceRegister> parent;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)resolveObject:(id)arg0;
- (id)provideBlockNeedServiceResponse:(id /* block */)arg0 forProtocol:(id)arg1;
- (id)tryResolveObject:(id)arg0;
- (void)registIdentifiers:(id)arg0 scope:(long long)arg1 instance:(id)arg2;
- (void)registIdentifiers:(id)arg0 scope:(long long)arg1 provider:(id /* block */)arg2;
- (id)initWithParentContainer:(id)arg0;
- (id)identifierFor:(id)arg0;
- (void)setFriendContainer:(id)arg0;
- (id)childContainers;
- (id)identifierFromClassOrProtocol:(id)arg0;
- (void)responseToBlockWithServiceInstance:(id)arg0 serviceKey:(id)arg1;
- (id)blocksNeedServicesResponse;
- (id)resolveObjectInThisChain:(id)arg0;
- (id)friendContainer;
- (id)resolveCurrentContainerObject:(id)arg0;
- (id)resolveParentContainerObject:(id)arg0;
- (id)tryResolveObjectInThisChain:(id)arg0;
- (void)removeBlockNeedServiceResponse:(id)arg0 withRelatedServiceKey:(id)arg1;
- (void)registerProvider:(id /* block */)arg0 forProtocol:(id)arg1 scope:(long long)arg2;
- (void)setBlocksNeedServicesResponse:(id)arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })serviceDataLock;
- (void)setServiceDataLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })blockDataLock;
- (void)setBlockDataLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })childDataLock;
- (void)setChildDataLock:(struct _opaque_pthread_mutex_t { long long x0; char x1[56]; })arg0;
- (void)setChildContainers:(id)arg0;
- (void)setServices:(id)arg0;
- (id)init;
- (id)services;
- (void).cxx_destruct;
- (id)parent;
- (void)addChild:(id)arg0;
- (void)dealloc;
- (id)parentContainer;
- (void)setParentContainer:(id)arg0;

@end