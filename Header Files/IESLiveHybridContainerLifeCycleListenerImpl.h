//
//     Generated by private class-dump
//

@class NSString, NSHashTable;

@interface IESLiveHybridContainerLifeCycleListenerImpl : NSObject <IESLiveHybridContainerLifeCycleListener> {
    NSHashTable *_subListeners;
}

@property (retain, nonatomic) NSHashTable *subListeners;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)kitView:(id)arg0 willCreatedWithContext:(id)arg1;
- (void)kitViewWillDealloc:(id)arg0;
- (id)subListeners;
- (void)registerNewListener:(id)arg0;
- (void)setSubListeners:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end
