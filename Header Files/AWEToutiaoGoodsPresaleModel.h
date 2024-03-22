//
//     Generated by private class-dump
//

@class NSString;

@interface AWEToutiaoGoodsPresaleModel : MTLModel <MTLJSONSerializing> {
    double _deliveryTime;
    double _endTime;
    NSString *_deliveryTextTag;
    NSString *_deliveryText;
    NSString *_buyBtnPrefix;
    NSString *_endText;
    double _initTimeinterval;
    double _serverTime;
}

@property (nonatomic) double initTimeinterval;
@property (nonatomic) double serverTime;
@property (nonatomic) double deliveryTime;
@property (nonatomic) double endTime;
@property (readonly, nonatomic) double currentTime;
@property (copy, nonatomic) NSString *deliveryTextTag;
@property (copy, nonatomic) NSString *deliveryText;
@property (copy, nonatomic) NSString *buyBtnPrefix;
@property (copy, nonatomic) NSString *endText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setServerTime:(double)arg0;
- (double)initTimeinterval;
- (void)setInitTimeinterval:(double)arg0;
- (id)deliveryTextTag;
- (void)setDeliveryTextTag:(id)arg0;
- (id)deliveryText;
- (void)setDeliveryText:(id)arg0;
- (id)buyBtnPrefix;
- (void)setBuyBtnPrefix:(id)arg0;
- (id)endText;
- (void)setEndText:(id)arg0;
- (id)init;
- (double)serverTime;
- (void).cxx_destruct;
- (double)endTime;
- (double)currentTime;
- (void)setEndTime:(double)arg0;
- (void)setDeliveryTime:(double)arg0;
- (double)deliveryTime;

@end