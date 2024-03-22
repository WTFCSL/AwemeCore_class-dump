//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface IESECLiveAnchorAuthorStatsModel : IESECLiveApiBaseModel {
    NSArray *_items;
    NSString *_descText;
}

@property (copy, nonatomic) NSArray *items;
@property (copy, nonatomic) NSString *descText;

+ (id)itemsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)descText;
- (void)setDescText:(id)arg0;
- (void)setItems:(id)arg0;
- (void).cxx_destruct;
- (id)items;

@end