//
//     Generated by private class-dump
//

@class NSString;

@interface AWEGoodsDiscountLabelModel : MTLModel <MTLJSONSerializing> {
    NSString *_content;
    long long _labelType;
}

@property (copy, nonatomic) NSString *content;
@property (nonatomic) long long labelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)labelType;
- (void).cxx_destruct;
- (id)content;
- (void)setContent:(id)arg0;
- (void)setLabelType:(long long)arg0;

@end
