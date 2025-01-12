//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary, NSDictionary, AWEGDTrackerProbe, AWEGoodsDetailPageContext;

@interface AWEPOIGoodsDetailBizTracker : NSObject {
    NSString *_sessionID;
    NSMutableDictionary *_adTrackParams;
    NSMutableDictionary *_bizTrackParams;
    NSMutableDictionary *_routerParams;
    NSDictionary *_preMergeLogData;
    AWEGDTrackerProbe *_probe;
    AWEGoodsDetailPageContext *_context;
}

@property (copy, nonatomic) NSString *sessionID;
@property (retain, nonatomic) NSMutableDictionary *adTrackParams;
@property (retain, nonatomic) NSMutableDictionary *bizTrackParams;
@property (retain, nonatomic) NSMutableDictionary *routerParams;
@property (retain, nonatomic) NSDictionary *preMergeLogData;
@property (retain, nonatomic) AWEGDTrackerProbe *probe;
@property (weak, nonatomic) AWEGoodsDetailPageContext *context;

- (id)routerParams;
- (void)setRouterParams:(id)arg0;
- (id)bizTrackParams;
- (void)setBizTrackParams:(id)arg0;
- (void)trackEvent:(id)arg0 extraParams:(id)arg1;
- (id)preMergeLogData;
- (void)enableBizTrackerProbe;
- (void)appendTrackParams:(id)arg0;
- (void)appendTrackResourceFromParams;
- (void)trackEvent:(id)arg0 extraParams:(id)arg1 btmInfo:(id)arg2;
- (id)getFullTrackParams;
- (void)trackADEvent:(id)arg0 extraParams:(id)arg1;
- (id)buildAdditionRouterParamsByAdditionSessionParams:(id)arg0;
- (id)lifeHomepageFreshType;
- (void)refreshWithPageContext:(id)arg0;
- (void)finishBizTrackerProbe;
- (id)preMergeLogDataWithPageContext:(id)arg0;
- (void)mergeStringOrNumberValueToDict:(id)arg0 byKey:(id)arg1 withValue:(id)arg2;
- (id)decodeShareExt:(id)arg0;
- (id)mergeServerBizTrackParams:(id)arg0;
- (void)removeMergeKey:(id)arg0;
- (id)fetchDictValueFromDict:(id)arg0 forKey:(id)arg1;
- (id)pickNonEmptyObjectFromArg1:(id)arg0 arg2:(id)arg1 arg3:(id)arg2;
- (id)pickNonEmptyStringFromArg1:(id)arg0 arg2:(id)arg1 arg3:(id)arg2;
- (void)mergeAdExtraData:(id)arg0 withData:(id)arg1 key:(id)arg2;
- (void)setAdTrackParams:(id)arg0;
- (void)checkMisTrackKeysWithTrackEvent:(id)arg0 trackParams:(id)arg1;
- (id)adTrackParams;
- (void)setPreMergeLogData:(id)arg0;
- (void)setProbe:(id)arg0;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setSessionID:(id)arg0;
- (id)sessionID;
- (void)setContext:(id)arg0;
- (id)context;
- (id)probe;

@end
