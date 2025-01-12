//
//     Generated by private class-dump
//

@class IESECLiveListVibeModel, IESECLiveListThemeModel, IESECLiveListOpenRegionModel, IESECLiveDynamicRegionModel, IESECLiveListABConfigModel, IESECLiveGoodsListTopModel, IESECLiveGoodsModel, IESECLiveListBottomModel, NSString, IESECLiveListHeaderModel, IESECLiveListCategoryModel, NSNumber, NSArray, IESECLiveListExtraModel, IESECLiveListHintModel;

@interface IESECLiveGoodsListPageModel : IESECLiveApiBaseModel {
    IESECLiveListABConfigModel *_abConfig;
    IESECLiveListHintModel *_hint;
    IESECLiveListHeaderModel *_header;
    IESECLiveListBottomModel *_bottom;
    IESECLiveDynamicRegionModel *_bottomDynamicRegionModel;
    IESECLiveListCategoryModel *_category;
    IESECLiveListVibeModel *_vibe;
    IESECLiveGoodsListTopModel *_top;
    IESECLiveListOpenRegionModel *_openRegionModel;
    IESECLiveListThemeModel *_liveTheme;
    IESECLiveListExtraModel *_extra;
    long long _totalGoodsCount;
    NSString *_logID;
    NSNumber *_serverTime;
    NSArray *_goodsList;
    IESECLiveGoodsModel *_introducingGoodsModel;
    IESECLiveGoodsModel *_relatedInfoGoodsModel;
    NSArray *_targetFlashGoodsModels;
    NSNumber *_nextOffset;
}

@property (retain, nonatomic) IESECLiveListABConfigModel *abConfig;
@property (retain, nonatomic) IESECLiveListHintModel *hint;
@property (retain, nonatomic) IESECLiveListHeaderModel *header;
@property (retain, nonatomic) IESECLiveListBottomModel *bottom;
@property (retain, nonatomic) IESECLiveDynamicRegionModel *bottomDynamicRegionModel;
@property (retain, nonatomic) IESECLiveListCategoryModel *category;
@property (retain, nonatomic) IESECLiveListVibeModel *vibe;
@property (retain, nonatomic) IESECLiveGoodsListTopModel *top;
@property (retain, nonatomic) IESECLiveListOpenRegionModel *openRegionModel;
@property (retain, nonatomic) IESECLiveListThemeModel *liveTheme;
@property (retain, nonatomic) IESECLiveListExtraModel *extra;
@property (nonatomic) long long totalGoodsCount;
@property (retain, nonatomic) NSString *logID;
@property (retain, nonatomic) NSNumber *serverTime;
@property (retain, nonatomic) NSArray *goodsList;
@property (retain, nonatomic) IESECLiveGoodsModel *introducingGoodsModel;
@property (retain, nonatomic) IESECLiveGoodsModel *relatedInfoGoodsModel;
@property (retain, nonatomic) NSArray *targetFlashGoodsModels;
@property (retain, nonatomic) NSNumber *nextOffset;

+ (id)goodsListJSONTransformer;
+ (id)targetFlashGoodsModelsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)abConfig;
- (void)setAbConfig:(id)arg0;
- (void)setServerTime:(id)arg0;
- (void)setNextOffset:(id)arg0;
- (id)goodsList;
- (void)setGoodsList:(id)arg0;
- (long long)totalGoodsCount;
- (id)introducingGoodsModel;
- (id)relatedInfoGoodsModel;
- (void)setVibe:(id)arg0;
- (void)setRelatedInfoGoodsModel:(id)arg0;
- (void)setTotalGoodsCount:(long long)arg0;
- (id)vibe;
- (id)bottomDynamicRegionModel;
- (void)setBottomDynamicRegionModel:(id)arg0;
- (id)openRegionModel;
- (void)setOpenRegionModel:(id)arg0;
- (id)liveTheme;
- (void)setLiveTheme:(id)arg0;
- (void)setIntroducingGoodsModel:(id)arg0;
- (id)targetFlashGoodsModels;
- (void)setTargetFlashGoodsModels:(id)arg0;
- (id)category;
- (id)serverTime;
- (void).cxx_destruct;
- (id)header;
- (void)setCategory:(id)arg0;
- (id)extra;
- (void)setTop:(id)arg0;
- (id)top;
- (void)setBottom:(id)arg0;
- (void)setHeader:(id)arg0;
- (id)nextOffset;
- (id)bottom;
- (id)logID;
- (void)setHint:(id)arg0;
- (id)hint;
- (void)setLogID:(id)arg0;

@end
