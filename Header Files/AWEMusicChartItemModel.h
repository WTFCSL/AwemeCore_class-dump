//
//     Generated by private class-dump
//

@class NSNumber, AWEAwemeModel;

@interface AWEMusicChartItemModel : AWEBaseApiModel {
    AWEAwemeModel *_itemInfo;
    NSNumber *_heat;
}

@property (retain, nonatomic) AWEAwemeModel *itemInfo;
@property (retain, nonatomic) NSNumber *heat;

+ (id)itemInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)heat;
- (void)setHeat:(id)arg0;
- (void)setItemInfo:(id)arg0;
- (void).cxx_destruct;
- (id)itemInfo;

@end
