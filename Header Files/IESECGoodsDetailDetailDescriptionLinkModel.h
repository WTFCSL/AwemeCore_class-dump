//
//     Generated by private class-dump
//

@class NSString;

@interface IESECGoodsDetailDetailDescriptionLinkModel : MTLModel <MTLJSONSerializing> {
    NSString *_key;
    NSString *_link;
}

@property (copy, nonatomic) NSString *key;
@property (copy, nonatomic) NSString *link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)key;
- (void)setLink:(id)arg0;
- (void).cxx_destruct;
- (void)setKey:(id)arg0;
- (id)link;

@end