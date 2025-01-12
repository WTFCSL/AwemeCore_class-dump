//
//     Generated by private class-dump
//

@class DitoGeneralContainerPageContext;
@protocol AWEPOIDetailListUtilProtocol, AWEPOIUGCRateContextProtocol;

@protocol AWEPOIDetailListTrackUtilProtocol <NSObject>

@property (weak, nonatomic) DitoGeneralContainerPageContext<AWEPOIUGCRateContextProtocol> *context;
@property (nonatomic) BOOL isFromIsolated;
@property (weak, nonatomic) id<AWEPOIDetailListUtilProtocol> delegate;

- (void)bindStateAndAction;
- (BOOL)isFromIsolated;
- (void)setIsFromIsolated:(BOOL)arg0;
- (void)firstFeedDidFinishWithPOILogParams:(id)arg0;
- (id)paramsForUgcRateUserPageEntrance;
- (id)extraParamsForLynx:(id)arg0;
- (void)recordCountWithUGCItem:(id)arg0;
- (void)trackShowUgcRateListPageEvent;
- (void)trackSlideOnPoiUgcAreaEvent;
- (void)setContext:(id)arg0;
- (id)delegate;
- (id)context;
- (void)setDelegate:(id)arg0;

@end
