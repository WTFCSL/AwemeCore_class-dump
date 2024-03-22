//
//     Generated by private class-dump
//

@class AWEPostPageLifeCycleDispatcher, NSMutableDictionary, NSString, NSMutableArray;
@protocol IESServiceProvider;

@interface AWEPostPageElementCenter : NSObject <AWEPostPageElementCenter> {
    NSMutableDictionary *_elementDict;
    id<IESServiceProvider> _serviceProvider;
    AWEPostPageLifeCycleDispatcher *_lifeCycleDispatcher;
    NSMutableArray *_subscribers;
}

@property (retain, nonatomic) NSMutableDictionary *elementDict;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) AWEPostPageLifeCycleDispatcher *lifeCycleDispatcher;
@property (retain, nonatomic) NSMutableArray *subscribers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)arg0;
- (id)addElementClass:(Class)arg0;
- (id)elementForType:(id)arg0;
- (void)registerElements;
- (void)reloadElementType:(id)arg0;
- (void)setLifeCycleDispatcher:(id)arg0;
- (id)lifeCycleDispatcher;
- (id)elementDict;
- (void)broadcastUpdateEvent;
- (void)setElementDict:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (id)subscribers;
- (id)allElements;
- (id)serviceProvider;
- (void)addSubscriber:(id)arg0;
- (void)registerServices;
- (void)setSubscribers:(id)arg0;

@end
