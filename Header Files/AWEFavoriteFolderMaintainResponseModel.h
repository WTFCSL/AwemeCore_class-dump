//
//     Generated by private class-dump
//

@class AWEFavoriteFolderBaseInfoModel;

@interface AWEFavoriteFolderMaintainResponseModel : AWEBaseApiModel {
    AWEFavoriteFolderBaseInfoModel *_baseInfoModel;
}

@property (retain, nonatomic) AWEFavoriteFolderBaseInfoModel *baseInfoModel;

+ (id)baseInfoModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)baseInfoModel;
- (void)setBaseInfoModel:(id)arg0;
- (void).cxx_destruct;

@end
