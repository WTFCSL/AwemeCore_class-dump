//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface AWEShareSpikeGoodsPriceModel : MTLModel <MTLJSONSerializing> {
    NSNumber *_sharePrice;
    NSNumber *_originPrice;
    NSString *_desc;
}

@property (retain, nonatomic) NSNumber *sharePrice;
@property (retain, nonatomic) NSNumber *originPrice;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)originPrice;
- (void)setOriginPrice:(id)arg0;
- (id)sharePrice;
- (void)setSharePrice:(id)arg0;
- (id)desc;
- (void).cxx_destruct;
- (void)setDesc:(id)arg0;

@end
