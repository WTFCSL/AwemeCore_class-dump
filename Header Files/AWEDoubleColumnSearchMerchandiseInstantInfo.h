//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDoubleColumnSearchMerchandiseInstantInfo : MTLModel <MTLJSONSerializing> {
    NSString *_instantAddress;
    NSString *_addressSource;
}

@property (copy, nonatomic) NSString *instantAddress;
@property (copy, nonatomic) NSString *addressSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)instantAddress;
- (void)setInstantAddress:(id)arg0;
- (id)addressSource;
- (void)setAddressSource:(id)arg0;
- (void).cxx_destruct;

@end