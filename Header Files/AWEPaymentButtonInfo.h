//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPaymentButtonInfo : AWEBaseApiModel {
    NSString *_textWithPrice;
    NSString *_textWithOutPrice;
    NSString *_textForAdCharge;
}

@property (copy, nonatomic) NSString *textWithPrice;
@property (copy, nonatomic) NSString *textWithOutPrice;
@property (copy, nonatomic) NSString *textForAdCharge;

+ (id)JSONKeyPathsByPropertyKey;

- (id)textWithPrice;
- (void)setTextWithPrice:(id)arg0;
- (id)textWithOutPrice;
- (void)setTextWithOutPrice:(id)arg0;
- (id)textForAdCharge;
- (void)setTextForAdCharge:(id)arg0;
- (void).cxx_destruct;

@end
