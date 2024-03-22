//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary, AWEURLModel;

@interface AWELiveLocalLifeStickerDataModel : MTLModel <MTLJSONSerializing> {
    NSString *_cardId;
    AWEURLModel *_titleUrl;
    AWEURLModel *_productImageUrl;
    NSArray *_data;
    long long _width;
    long long _isFolding;
    NSString *_background;
    NSDictionary *_eventParams;
    NSDictionary *_extraParams;
}

@property (copy, nonatomic) NSString *cardId;
@property (copy, nonatomic) AWEURLModel *titleUrl;
@property (copy, nonatomic) AWEURLModel *productImageUrl;
@property (retain, nonatomic) NSArray *data;
@property (nonatomic) long long width;
@property (nonatomic) long long isFolding;
@property (copy, nonatomic) NSString *background;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dataJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setEventParams:(id)arg0;
- (id)titleUrl;
- (void)setTitleUrl:(id)arg0;
- (id)productImageUrl;
- (void)setProductImageUrl:(id)arg0;
- (long long)isFolding;
- (void)setIsFolding:(long long)arg0;
- (id)data;
- (id)background;
- (void).cxx_destruct;
- (void)setData:(id)arg0;
- (void)setBackground:(id)arg0;
- (void)setWidth:(long long)arg0;
- (long long)width;
- (id)cardId;
- (void)setCardId:(id)arg0;
- (id)eventParams;

@end
