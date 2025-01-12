//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface AWEECTypeTracker : NSObject <AWEECTrackerProtocol> {
    NSMutableSet *_reportSet;
}

@property (retain, nonatomic) NSMutableSet *reportSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)appendEntranceInfoWithModel:(id)arg0 btmTrackerModel:(id)arg1 scene:(id)arg2;
- (id)bcmBiz;
- (void)setReportSet:(id)arg0;
- (id)getGroupTypeInfoRawChain:(id)arg0;
- (void)reportAlogIfNeededForParams:(id)arg0;
- (id)getGroupTypeInfoRawChain:(id)arg0 index:(long long)arg1 visitProductDetail:(BOOL)arg2;
- (BOOL)isLiveInterruptPage:(id)arg0;
- (BOOL)isVideoInterruptPage:(id)arg0;
- (BOOL)isLiveOrVideoInterruptPage:(id)arg0;
- (BOOL)isSupportBackTrackingPage:(id)arg0;
- (BOOL)isOrderSubmitPage:(id)arg0;
- (BOOL)isProductDetailPage:(id)arg0;
- (BOOL)isSKUPage:(id)arg0;
- (BOOL)isProductExplainRecordPage:(id)arg0;
- (BOOL)isSchemaJumpPage:(id)arg0;
- (BOOL)isOtherEnableBackPage:(id)arg0;
- (id)reportSet;
- (void)reportAlogStartAt:(double)arg0;
- (id)init;
- (void).cxx_destruct;

@end
