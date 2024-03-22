//
//     Generated by private class-dump
//

@class AWELiveAsyncAuthData, AWELiveTicketModel, NSDictionary, AWELivePrivilegeInfo;

@interface AWELivePaidLiveModel : AWEBaseApiModel {
    BOOL _needDeliveryNotice;
    unsigned long long _paidType;
    unsigned long long _viewRight;
    long long _duration;
    AWELiveTicketModel *_ticketSession;
    unsigned long long _delivery;
    NSDictionary *_privilegeInfoMap;
    AWELiveAsyncAuthData *_asyncAuthData;
}

@property (nonatomic) unsigned long long paidType;
@property (nonatomic) unsigned long long viewRight;
@property (nonatomic) long long duration;
@property (retain, nonatomic) AWELiveTicketModel *ticketSession;
@property (nonatomic) unsigned long long delivery;
@property (nonatomic) BOOL needDeliveryNotice;
@property (copy, nonatomic) NSDictionary *privilegeInfoMap;
@property (readonly, nonatomic) AWELivePrivilegeInfo *vipSubscribePrivilegeInfo;
@property (retain, nonatomic) AWELiveAsyncAuthData *asyncAuthData;

+ (id)ticketSessionJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)paidType;
- (void)setPaidType:(unsigned long long)arg0;
- (unsigned long long)viewRight;
- (void)setViewRight:(unsigned long long)arg0;
- (id)vipSubscribePrivilegeInfo;
- (id)ticketSession;
- (BOOL)needDeliveryNotice;
- (void)setNeedDeliveryNotice:(BOOL)arg0;
- (id)privilegeInfoMap;
- (id)asyncAuthData;
- (void)setTicketSession:(id)arg0;
- (void)setPrivilegeInfoMap:(id)arg0;
- (void)setAsyncAuthData:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)delivery;
- (long long)duration;
- (void)setDuration:(long long)arg0;
- (void)setDelivery:(unsigned long long)arg0;

@end