//
//     Generated by private class-dump
//

@class NSString;

@interface AWESearchSugTabOrderModel : AWEBaseApiModel {
    NSString *_tabType;
    long long _newIndex;
}

@property (copy, nonatomic) NSString *tabType;
@property (nonatomic) long long newIndex;

+ (id)JSONKeyPathsByPropertyKey;

- (id)tabType;
- (void)setTabType:(id)arg0;
- (long long)newIndex;
- (void)setNewIndex:(long long)arg0;
- (void).cxx_destruct;

@end