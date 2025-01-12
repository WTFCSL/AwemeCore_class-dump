//
//     Generated by private class-dump
//

@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface BDHMXOverviewDataCollector : NSObject <BDHMInnerEventListenerProtocol> {
    NSObject<OS_dispatch_queue> *_operationQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *operationQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)shared;

- (void)onEventUploaded:(id)arg0;
- (void)onEventCreated:(id)arg0;
- (void)onEventTerminated:(id)arg0;
- (void)onEventUnSampled:(id)arg0;
- (void)reportToTea:(id)arg0 stage:(id)arg1;
- (id)getFirstCharacters:(long long)arg0 string:(id)arg1;
- (id)getFormatURL:(id)arg0;
- (id)getBidInfo:(id)arg0 key:(id)arg1;
- (void)setOperationQueue:(id)arg0;
- (void).cxx_destruct;
- (id)operationQueue;

@end
