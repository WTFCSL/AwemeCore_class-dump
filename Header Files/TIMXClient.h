//
//     Generated by private class-dump
//

@class NSString, TIMXSDKInstance, NSObject;
@protocol OS_dispatch_queue;

@interface TIMXClient : NSObject <TIMXInstanceScopeSingleton> {
    TIMXSDKInstance *_r;
    NSObject<OS_dispatch_queue> *_mappingQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *mappingQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)nameForRequestMethod:(unsigned long long)arg0;

- (void)setMappingQueue:(id)arg0;
- (id)mappingQueue;
- (void)enqueue:(id)arg0 withClientImp:(id)arg1;
- (void).cxx_destruct;
- (void)enqueue:(id)arg0;
- (id)initWithRootObject:(id)arg0;

@end