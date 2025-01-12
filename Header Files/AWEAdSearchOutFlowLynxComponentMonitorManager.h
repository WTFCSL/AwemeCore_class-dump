//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface AWEAdSearchOutFlowLynxComponentMonitorManager : HTSService <AWEAdSearchOutFlowLynxComponentMonitorManager> {
    NSMutableSet *_cache;
}

@property (retain, nonatomic) NSMutableSet *cache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)allocWithZone:(struct _NSZone { } *)arg0;
+ (id)sharedInstance;

- (void)generalSearchDataReceivedWithReponseModel:(id)arg0;
- (void)lynxComponentMonitorPostEventWithContext:(id)arg0 eventKey:(long long)arg1;
- (void)resetMonitorCache;
- (void)searchWholeLynxCardDataReceiveWithSearchModel:(id)arg0;
- (void)searchDynamicCardDataReceiveWithSearchModel:(id)arg0;
- (void)searchOutFlowLynxComponentDataReceiveWithSearchModel:(id)arg0;
- (void)searchOutFlowStructureButtonDataReceiveWithSearchModel:(id)arg0;
- (void)searchOutFlowCouponButtonDataReceiveWithSearchModel:(id)arg0;
- (void)searchCinemaTicketCardDataReceiveWithSearchModel:(id)arg0;
- (void)searchOutFlowMerchandiseVideoButtonDataReceiveWithSearchModel:(id)arg0;
- (void)searchOutFlowSandwichTopCardDataReceiveWithSearchModel:(id)arg0;
- (void)searchOutFlowSandwichBottomCardVideoButtonDataReceiveWithSearchModel:(id)arg0;
- (BOOL)isMonitorPost:(id)arg0 label:(long long)arg1 creativeID:(id)arg2 adID:(id)arg3 adStyleType:(long long)arg4 lynxType:(unsigned long long)arg5 lynxRawDataMd5:(id)arg6;
- (void)monitorEventPostWithSchema:(id)arg0 label:(long long)arg1 creativeID:(id)arg2 adID:(id)arg3 adStyleType:(long long)arg4 lynxType:(unsigned long long)arg5 lynxRawDataMd5:(id)arg6;
- (id)lynxComponentIdentifierWithSchema:(id)arg0 label:(long long)arg1 creativeID:(id)arg2 adID:(id)arg3 adStyleType:(long long)arg4 lynxType:(unsigned long long)arg5 lynxRawDataMd5:(id)arg6;
- (id)adExtraDataFromDynamicPatch:(id)arg0;
- (id)adCardNameFromModel:(id)arg0;
- (id)getAdExtraRelatedInfo:(id)arg0;
- (id)adExtraDataFromAweme:(id)arg0;
- (void)setCache:(id)arg0;
- (id)cache;
- (void).cxx_destruct;

@end
