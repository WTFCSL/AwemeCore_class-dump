//
//     Generated by private class-dump
//

@class NSString, AWENearByOriginalAdModel;

@interface AWENearbyAdModel : AWEBaseApiModel <AWENearbyInsertCardProtocol> {
    long long _indexToInsert;
    AWENearByOriginalAdModel *_originAdInfo;
}

@property (nonatomic) long long indexToInsert;
@property (retain, nonatomic) AWENearByOriginalAdModel *originAdInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)originAdInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)originAdInfo;
- (void)setOriginAdInfo:(id)arg0;
- (long long)indexToInsert;
- (void)setIndexToInsert:(long long)arg0;
- (void).cxx_destruct;

@end
