//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSObject, BDPClientAIDetecionConfig;
@protocol OS_dispatch_queue;

@interface BDPSecurityClientStrategyManager : NSObject <BDPClientAIDetectionMessage, BDPSecurityClientStrategyMessage> {
    BDPClientAIDetecionConfig *_detectionConfig;
    NSObject<OS_dispatch_queue> *_executeQueue;
    NSDictionary *_allRulesDict;
    NSString *_deviceInfoString;
    NSString *_currentEventId;
    NSString *_currentSceneId;
    NSString *_currentWorkflowId;
}

@property (retain, nonatomic) BDPClientAIDetecionConfig *detectionConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initService;
- (void)setDetectionConfig:(id)arg0;
- (id)detectionConfig;
- (void)bdpDetection_updateDetectionInfo:(id)arg0;
- (void)bdpDetection_onAppRouteChangePageWillLeaveWithPageID:(long long)arg0 pageURL:(id)arg1 uniqueID:(id)arg2 needCheck:(BOOL)arg3;
- (void)checkWithParams:(id)arg0 PageURL:(id)arg1 uniqueID:(id)arg2 completion:(id /* block */)arg3;
- (void)updateStrategy:(id)arg0 deviceInfo:(id)arg1;
- (void).cxx_destruct;

@end