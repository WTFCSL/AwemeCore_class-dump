//
//     Generated by private class-dump
//

@class NSString;

@interface AWEPOISpuCustomerModel : MTLModel <MTLJSONSerializing> {
    NSString *_customerName;
    unsigned long long _customerSource;
    NSString *_customerID;
}

@property (copy, nonatomic) NSString *customerName;
@property (nonatomic) unsigned long long customerSource;
@property (copy, nonatomic) NSString *customerID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)customerName;
- (void)setCustomerName:(id)arg0;
- (unsigned long long)customerSource;
- (void)setCustomerSource:(unsigned long long)arg0;
- (void).cxx_destruct;
- (id)customerID;
- (void)setCustomerID:(id)arg0;

@end