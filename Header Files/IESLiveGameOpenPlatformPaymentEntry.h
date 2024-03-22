//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveGameOpenPlatformPaymentEntry : NSObject {
    BOOL _shouldShowChargePanelAutomatically;
    NSString *_appID;
    long long _diamonds;
    NSString *_tag;
    NSString *_orderId;
    unsigned long long _version;
}

@property (copy, nonatomic) NSString *appID;
@property (nonatomic) long long diamonds;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *orderId;
@property (nonatomic) unsigned long long version;
@property (nonatomic) BOOL shouldShowChargePanelAutomatically;

- (id)orderId;
- (void)setOrderId:(id)arg0;
- (long long)diamonds;
- (void)setDiamonds:(long long)arg0;
- (id)getVersionCode;
- (BOOL)shouldShowChargePanelAutomatically;
- (void)setShouldShowChargePanelAutomatically:(BOOL)arg0;
- (id)init;
- (void)setAppID:(id)arg0;
- (void)setVersion:(unsigned long long)arg0;
- (void).cxx_destruct;
- (void)setTag:(id)arg0;
- (id)tag;
- (id)appID;
- (unsigned long long)version;
- (id)description;

@end