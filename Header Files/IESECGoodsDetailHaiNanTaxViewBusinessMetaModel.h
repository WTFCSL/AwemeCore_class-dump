//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface IESECGoodsDetailHaiNanTaxViewBusinessMetaModel : MTLModel <MTLJSONSerializing> {
    NSDictionary *_jumpURLDictionary;
    long long _currentSelectIndex;
    long long _currentTabIndex;
}

@property (copy, nonatomic) NSDictionary *jumpURLDictionary;
@property (nonatomic) long long currentSelectIndex;
@property (nonatomic) long long currentTabIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)currentSelectIndex;
- (void)setCurrentSelectIndex:(long long)arg0;
- (id)jumpURLDictionary;
- (void)setJumpURLDictionary:(id)arg0;
- (void).cxx_destruct;
- (long long)currentTabIndex;
- (void)setCurrentTabIndex:(long long)arg0;

@end
