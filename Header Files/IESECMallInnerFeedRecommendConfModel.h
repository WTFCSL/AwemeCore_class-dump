//
//     Generated by private class-dump
//

@class NSString;

@interface IESECMallInnerFeedRecommendConfModel : MTLModel <MTLJSONSerializing> {
    NSString *_productActivityType;
    NSString *_title;
}

@property (copy, nonatomic) NSString *productActivityType;
@property (copy, nonatomic) NSString *title;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)productActivityType;
- (void)setProductActivityType:(id)arg0;
- (void).cxx_destruct;
- (id)title;
- (void)setTitle:(id)arg0;

@end