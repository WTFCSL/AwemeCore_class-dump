//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayPaymentInfoModel : JSONModel {
    NSString *_deductType;
    NSString *_channelName;
    NSString *_cardMaskCode;
    NSString *_cardType;
    long long _deductAmount;
}

@property (copy, nonatomic) NSString *deductType;
@property (copy, nonatomic) NSString *channelName;
@property (copy, nonatomic) NSString *cardMaskCode;
@property (copy, nonatomic) NSString *cardType;
@property (nonatomic) long long deductAmount;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)deductType;
- (void)setDeductType:(id)arg0;
- (id)cardMaskCode;
- (void)setCardMaskCode:(id)arg0;
- (long long)deductAmount;
- (void)setDeductAmount:(long long)arg0;
- (void).cxx_destruct;
- (id)channelName;
- (id)cardType;
- (void)setCardType:(id)arg0;
- (void)setChannelName:(id)arg0;

@end
