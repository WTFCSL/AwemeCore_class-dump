//
//     Generated by private class-dump
//

@class AWEProfileFavoriteCollectsListResponseModel;

@interface AWEProfileFavoriteCollectAwemeModel : AWEBaseApiModel {
    AWEProfileFavoriteCollectsListResponseModel *_collectsInfo;
}

@property (retain, nonatomic) AWEProfileFavoriteCollectsListResponseModel *collectsInfo;

+ (id)collectsInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)collectsInfo;
- (void)setCollectsInfo:(id)arg0;
- (void).cxx_destruct;

@end
