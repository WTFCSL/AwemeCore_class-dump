//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEToutiaoGoodsButtonModel : MTLModel <MTLJSONSerializing> {
    NSString *_microAppUrlString;
    NSString *_webUrlString;
    NSArray *_textArray;
    unsigned long long _orderStatus;
    NSString *_SKUConfirmButtonText;
}

@property (copy, nonatomic) NSString *microAppUrlString;
@property (copy, nonatomic) NSString *webUrlString;
@property (copy, nonatomic) NSArray *textArray;
@property (nonatomic) unsigned long long orderStatus;
@property (copy, nonatomic) NSString *SKUConfirmButtonText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (unsigned long long)orderStatus;
- (void)setOrderStatus:(unsigned long long)arg0;
- (void)setTextArray:(id)arg0;
- (id)microAppUrlString;
- (void)setMicroAppUrlString:(id)arg0;
- (id)webUrlString;
- (void)setWebUrlString:(id)arg0;
- (id)SKUConfirmButtonText;
- (void)setSKUConfirmButtonText:(id)arg0;
- (void).cxx_destruct;
- (id)textArray;

@end
