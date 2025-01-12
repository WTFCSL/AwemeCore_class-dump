//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSDate, NSNumber;

@interface BDAPCallParams : NSObject {
    BOOL _toListen;
    BOOL _isWebCall;
    BOOL _isAdEvent;
    NSString *_cid;
    NSString *_adId;
    NSString *_mKey;
    NSString *_reqId;
    NSString *_caller;
    NSString *_siteId;
    NSString *_pageUrl;
    NSString *_pageType;
    NSString *_phoneKey;
    NSString *_logExtra;
    NSString *_position;
    NSString *_instanceId;
    NSString *_realPhoneNum;
    NSDate *_dailTime;
    NSNumber *_scenario;
    NSDictionary *_gscenarioData;
    NSNumber *_dailActionType;
    NSString *_customFields;
    NSDictionary *_cardData;
}

@property (copy, nonatomic) NSString *cid;
@property (copy, nonatomic) NSString *adId;
@property (copy, nonatomic) NSString *mKey;
@property (copy, nonatomic) NSString *reqId;
@property (copy, nonatomic) NSString *caller;
@property (copy, nonatomic) NSString *siteId;
@property (copy, nonatomic) NSString *pageUrl;
@property (copy, nonatomic) NSString *pageType;
@property (copy, nonatomic) NSString *phoneKey;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *position;
@property (copy, nonatomic) NSString *instanceId;
@property (copy, nonatomic) NSString *realPhoneNum;
@property (retain, nonatomic) NSDate *dailTime;
@property (copy, nonatomic) NSNumber *scenario;
@property (copy, nonatomic) NSDictionary *gscenarioData;
@property (retain, nonatomic) NSNumber *dailActionType;
@property (copy, nonatomic) NSString *customFields;
@property (nonatomic) BOOL toListen;
@property (nonatomic) BOOL isWebCall;
@property (nonatomic) BOOL isAdEvent;
@property (copy, nonatomic) NSDictionary *cardData;

- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (void)setIsWebCall:(BOOL)arg0;
- (BOOL)toListen;
- (id)dailTime;
- (void)setDailTime:(id)arg0;
- (id)dailActionType;
- (void)setDailActionType:(id)arg0;
- (BOOL)isWebCall;
- (void)setToListen:(BOOL)arg0;
- (id)initWithParamsBlock:(id /* block */)arg0;
- (void)setMKey:(id)arg0;
- (id)reqId;
- (void)setReqId:(id)arg0;
- (void)setSiteId:(id)arg0;
- (void)setPhoneKey:(id)arg0;
- (void)setRealPhoneNum:(id)arg0;
- (void)setGscenarioData:(id)arg0;
- (void)setCustomFields:(id)arg0;
- (void)setIsAdEvent:(BOOL)arg0;
- (id)phoneKey;
- (id)siteId;
- (id)gscenarioData;
- (id)customFields;
- (id)realPhoneNum;
- (BOOL)isAdEvent;
- (id)pageType;
- (id)pageUrl;
- (id)caller;
- (void).cxx_destruct;
- (void)setScenario:(id)arg0;
- (id)instanceId;
- (id)position;
- (id)scenario;
- (void)setPosition:(id)arg0;
- (id)cid;
- (void)setCaller:(id)arg0;
- (void)setPageType:(id)arg0;
- (id)initWithParams:(id)arg0;
- (void)setPageUrl:(id)arg0;
- (id)cardData;
- (void)setCardData:(id)arg0;
- (void)setInstanceId:(id)arg0;
- (id)mKey;
- (void)setCid:(id)arg0;
- (id)adId;
- (void)setAdId:(id)arg0;

@end
