//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEAwemeModel;

@interface AWEECMallFeedItemModel : MTLModel <MTLJSONSerializing> {
    unsigned long long _type;
    NSString *_itemID;
    AWEAwemeModel *_aweme;
    NSArray *_productInfo;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *itemID;
@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSArray *productInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeJSONTransformer;
+ (id)productInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)aweme;
- (void)setAweme:(id)arg0;
- (void)bindAwemeWithMallInfo;
- (id)productInfo;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setType:(unsigned long long)arg0;
- (void)setProductInfo:(id)arg0;

@end
