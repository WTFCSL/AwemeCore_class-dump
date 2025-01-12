//
//     Generated by private class-dump
//

@class NSString, SECHybridPageTrace, NSError, NSDictionary;

@interface SECRouteTrace : NSObject <NSCoding> {
    BOOL _externalSelf;
    BOOL _virtualSelf;
    BOOL _externalLandingPage;
    BOOL _terminatedWithFailure;
    BOOL _fromWebViewNavigation;
    BOOL _hybridSeclinkNewlyInstalled;
    NSString *_traceId;
    SECRouteTrace *_prev;
    SECRouteTrace *_head;
    NSString *_bizToken;
    NSString *_checkinTraffic;
    NSError *_checkinInterrupt;
    NSString *_checkinSafeTraffic;
    NSString *_checkinPolicyName;
    NSString *_checkinPolicyAction;
    double _checkinCost;
    NSString *_checkoutTraffic;
    NSError *_checkoutInterrupt;
    NSString *_checkoutSafeTraffic;
    NSString *_checkoutPolicyName;
    NSString *_checkoutPolicyAction;
    long long _risk;
    double _checkoutCost;
    NSString *_fromPage;
    NSString *_toPage;
    NSString *_headFromPage;
    NSString *_checkinType;
    double _checkinTimestamp;
    double _checkoutTimestamp;
    SECHybridPageTrace *_hybridTrace;
    NSString *_hybridAction;
    NSString *_hybridStrategy;
    NSString *_hybridSeclinkScene;
    double _hybridActionCost;
    NSDictionary *_detailMetrics;
    NSString *_matchedFeatures;
}

@property (copy, nonatomic) NSString *traceId;
@property (retain, nonatomic) SECRouteTrace *prev;
@property (weak, nonatomic) SECRouteTrace *head;
@property (nonatomic) BOOL externalSelf;
@property (nonatomic) BOOL virtualSelf;
@property (copy, nonatomic) NSString *bizToken;
@property (copy, nonatomic) NSString *checkinTraffic;
@property (retain, nonatomic) NSError *checkinInterrupt;
@property (copy, nonatomic) NSString *checkinSafeTraffic;
@property (copy, nonatomic) NSString *checkinPolicyName;
@property (copy, nonatomic) NSString *checkinPolicyAction;
@property (nonatomic) double checkinCost;
@property (copy, nonatomic) NSString *checkoutTraffic;
@property (retain, nonatomic) NSError *checkoutInterrupt;
@property (copy, nonatomic) NSString *checkoutSafeTraffic;
@property (copy, nonatomic) NSString *checkoutPolicyName;
@property (copy, nonatomic) NSString *checkoutPolicyAction;
@property (nonatomic) long long risk;
@property (nonatomic) double checkoutCost;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSString *toPage;
@property (copy, nonatomic) NSString *headFromPage;
@property (nonatomic) BOOL externalLandingPage;
@property (nonatomic) BOOL terminatedWithFailure;
@property (copy, nonatomic) NSString *checkinType;
@property (nonatomic) BOOL fromWebViewNavigation;
@property (nonatomic) double checkinTimestamp;
@property (nonatomic) double checkoutTimestamp;
@property (retain) SECHybridPageTrace *hybridTrace;
@property (nonatomic) BOOL hybridSeclinkNewlyInstalled;
@property (copy, nonatomic) NSString *hybridAction;
@property (copy, nonatomic) NSString *hybridStrategy;
@property (copy, nonatomic) NSString *hybridSeclinkScene;
@property (nonatomic) double hybridActionCost;
@property (copy) NSDictionary *detailMetrics;
@property (copy, nonatomic) NSString *matchedFeatures;

- (void)setFromPage:(id)arg0;
- (long long)risk;
- (void)setRisk:(long long)arg0;
- (void)setToPage:(id)arg0;
- (void)setTraceId:(id)arg0;
- (id)paramsForReport;
- (id)bizToken;
- (void)setMatchedFeatures:(id)arg0;
- (id)paramsForRuler;
- (void)updateMatchedFeatures:(id)arg0;
- (id)matchedFeatures;
- (void)updateMetrics:(id)arg0;
- (void)setCheckinPolicyName:(id)arg0;
- (void)setCheckinPolicyAction:(id)arg0;
- (void)updateMetrics:(id)arg0 withPrefixKey:(id)arg1;
- (void)setCheckinInterrupt:(id)arg0;
- (void)setCheckinSafeTraffic:(id)arg0;
- (void)setCheckoutPolicyName:(id)arg0;
- (void)setCheckoutPolicyAction:(id)arg0;
- (void)setCheckoutInterrupt:(id)arg0;
- (void)setCheckoutSafeTraffic:(id)arg0;
- (id)detailMetrics;
- (void)setDetailMetrics:(id)arg0;
- (id)buildURLToDict:(id)arg0 withPrefixKey:(id)arg1;
- (double)checkinCost;
- (double)checkoutCost;
- (id)hybridTrace;
- (BOOL)externalSelf;
- (BOOL)virtualSelf;
- (id)checkinTraffic;
- (id)checkoutTraffic;
- (id)checkoutPolicyAction;
- (id)checkoutInterrupt;
- (id)checkoutPolicyName;
- (BOOL)terminatedWithFailure;
- (id)checkinType;
- (id)checkinPolicyAction;
- (id)checkinInterrupt;
- (id)checkinPolicyName;
- (BOOL)hybridSeclinkNewlyInstalled;
- (id)hybridAction;
- (id)hybridStrategy;
- (id)hybridSeclinkScene;
- (double)hybridActionCost;
- (void)encodeHybridTrace:(id)arg0 withCoder:(id)arg1;
- (void)decodeHybridTraceWithCoder:(id)arg0;
- (id)hybridTraces;
- (void)setHybridTrace:(id)arg0;
- (void)updateCheckinPolicy:(id)arg0;
- (void)updateCheckinResult:(id)arg0;
- (void)updateCheckoutPolicy:(id)arg0;
- (void)updateCheckoutResult:(id)arg0;
- (void)setExternalSelf:(BOOL)arg0;
- (void)setVirtualSelf:(BOOL)arg0;
- (void)setBizToken:(id)arg0;
- (void)setCheckinTraffic:(id)arg0;
- (id)checkinSafeTraffic;
- (void)setCheckinCost:(double)arg0;
- (void)setCheckoutTraffic:(id)arg0;
- (id)checkoutSafeTraffic;
- (void)setCheckoutCost:(double)arg0;
- (id)headFromPage;
- (void)setHeadFromPage:(id)arg0;
- (BOOL)externalLandingPage;
- (void)setExternalLandingPage:(BOOL)arg0;
- (void)setTerminatedWithFailure:(BOOL)arg0;
- (void)setCheckinType:(id)arg0;
- (BOOL)fromWebViewNavigation;
- (void)setFromWebViewNavigation:(BOOL)arg0;
- (double)checkinTimestamp;
- (void)setCheckinTimestamp:(double)arg0;
- (double)checkoutTimestamp;
- (void)setCheckoutTimestamp:(double)arg0;
- (void)setHybridSeclinkNewlyInstalled:(BOOL)arg0;
- (void)setHybridAction:(id)arg0;
- (void)setHybridStrategy:(id)arg0;
- (void)setHybridSeclinkScene:(id)arg0;
- (void)setHybridActionCost:(double)arg0;
- (id)head;
- (void)setHead:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)traceId;
- (void)setPrev:(id)arg0;
- (id)allNodes;
- (id)prev;
- (id)initWithCoder:(id)arg0;
- (id)URL;
- (void)encodeWithCoder:(id)arg0;
- (id)fromPage;
- (id)toPage;

@end
