//
//     Generated by private class-dump
//

@class AWEIMDouyinRedPacketPaymentInfoModel, NSString, AWEPayExchangeRedPacketSwapResultModel;

@interface AWEIMDouyinRedPacketSendResponse : AWEBaseApiModel {
    AWEIMDouyinRedPacketPaymentInfoModel *_info;
    unsigned long long _businessCode;
    NSString *_businessMsg;
    NSString *_businessTitle;
    AWEPayExchangeRedPacketSwapResultModel *_swapResult;
}

@property (retain, nonatomic) AWEIMDouyinRedPacketPaymentInfoModel *info;
@property (nonatomic) unsigned long long businessCode;
@property (copy, nonatomic) NSString *businessMsg;
@property (copy, nonatomic) NSString *businessTitle;
@property (retain, nonatomic) AWEPayExchangeRedPacketSwapResultModel *swapResult;

+ (id)infoJSONTransformer;
+ (id)swapResultJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)businessCode;
- (id)businessMsg;
- (id)businessTitle;
- (id)swapResult;
- (void)setBusinessCode:(unsigned long long)arg0;
- (void)setBusinessMsg:(id)arg0;
- (void)setBusinessTitle:(id)arg0;
- (void)setSwapResult:(id)arg0;
- (id)info;
- (void).cxx_destruct;
- (void)setInfo:(id)arg0;

@end
