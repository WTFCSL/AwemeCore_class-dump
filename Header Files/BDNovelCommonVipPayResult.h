//
//     Generated by private class-dump
//

@class NSString, BDNovelCommonVipCenterVipPayInfo;

@interface BDNovelCommonVipPayResult : NSObject {
    long long _novelFee;
    NSString *_tradeNumber;
    NSString *_result;
    NSString *_logId;
    BDNovelCommonVipCenterVipPayInfo *_payInfo;
}

@property (nonatomic) long long novelFee;
@property (copy, nonatomic) NSString *tradeNumber;
@property (copy, nonatomic) NSString *result;
@property (copy, nonatomic) NSString *logId;
@property (retain, nonatomic) BDNovelCommonVipCenterVipPayInfo *payInfo;

- (id)logId;
- (void)setLogId:(id)arg0;
- (id)tradeNumber;
- (long long)novelFee;
- (id)payInfo;
- (void)setNovelFee:(long long)arg0;
- (void)setTradeNumber:(id)arg0;
- (void)setPayInfo:(id)arg0;
- (void)setResult:(id)arg0;
- (void).cxx_destruct;
- (id)result;

@end
