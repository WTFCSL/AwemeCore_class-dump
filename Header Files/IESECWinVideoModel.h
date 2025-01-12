//
//     Generated by private class-dump
//

@class NSString, IESECURLModel, NSArray, NSNumber;

@interface IESECWinVideoModel : MTLModel <MTLJSONSerializing> {
    IESECURLModel *_cover;
    long long _duration;
    IESECURLModel *_subIcon;
    NSString *_subTitle;
    NSString *_jumpUrl;
    long long _itemID;
    NSNumber *_videoID;
    NSArray *_products;
    NSArray *_productDescription;
    long long _buyShareID;
    NSString *_title;
    NSString *_content;
}

@property (retain, nonatomic) IESECURLModel *cover;
@property (nonatomic) long long duration;
@property (retain, nonatomic) IESECURLModel *subIcon;
@property (retain, nonatomic) NSString *subTitle;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) long long itemID;
@property (retain, nonatomic) NSNumber *videoID;
@property (retain, nonatomic) NSArray *products;
@property (retain, nonatomic) NSArray *productDescription;
@property (nonatomic) long long buyShareID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)productsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (id)jumpUrl;
- (void)setJumpUrl:(id)arg0;
- (long long)buyShareID;
- (void)setBuyShareID:(long long)arg0;
- (id)subIcon;
- (void)setSubIcon:(id)arg0;
- (void).cxx_destruct;
- (id)content;
- (long long)itemID;
- (long long)duration;
- (id)products;
- (void)setItemID:(long long)arg0;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setSubTitle:(id)arg0;
- (id)subTitle;
- (void)setTitle:(id)arg0;
- (void)setDuration:(long long)arg0;
- (void)setProducts:(id)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (void)setProductDescription:(id)arg0;
- (id)productDescription;

@end
