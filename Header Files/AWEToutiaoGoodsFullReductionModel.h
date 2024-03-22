//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEToutiaoGoodsFullReductionModel : MTLModel <MTLJSONSerializing> {
    NSString *_url;
    NSArray *_fullReductionItems;
}

@property (copy, nonatomic) NSString *url;
@property (copy, nonatomic) NSArray *fullReductionItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)fullReductionItems;
- (void)setFullReductionItems:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end