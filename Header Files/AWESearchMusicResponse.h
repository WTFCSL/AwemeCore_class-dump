//
//     Generated by private class-dump
//

@class AWESearchNilInfoModel, NSString, NSArray, AWESearchCorrectModel, AWESearchAdModel, AWESearchNilTextModel, AWESearchGlobalDoodleConfigModel, NSDictionary, AWERiskPreventModel, NSNumber;

@interface AWESearchMusicResponse : AWEBaseApiModel {
    BOOL _hasMore;
    NSNumber *_cursor;
    NSArray *_musicList;
    NSString *_correctName;
    AWERiskPreventModel *_riskPreventModel;
    AWESearchCorrectModel *_correctModel;
    AWESearchNilInfoModel *_searchNilInfoModel;
    AWESearchNilTextModel *_searchNilTextModel;
    NSArray *_searchMusicList;
    NSArray *_searchMusicHeaderInfoList;
    NSNumber *_renderType;
    NSString *_musicFilterType;
    AWESearchGlobalDoodleConfigModel *_extraModel;
    NSDictionary *_streamTimeCost;
}

@property (retain, nonatomic) AWESearchAdModel *adModel;
@property (retain, nonatomic) NSNumber *cursor;
@property (nonatomic) BOOL hasMore;
@property (copy, nonatomic) NSArray *musicList;
@property (copy, nonatomic) NSString *correctName;
@property (retain, nonatomic) AWERiskPreventModel *riskPreventModel;
@property (retain, nonatomic) AWESearchCorrectModel *correctModel;
@property (retain, nonatomic) AWESearchNilInfoModel *searchNilInfoModel;
@property (retain, nonatomic) AWESearchNilTextModel *searchNilTextModel;
@property (copy, nonatomic) NSArray *searchMusicList;
@property (copy, nonatomic) NSArray *searchMusicHeaderInfoList;
@property (retain, nonatomic) NSNumber *renderType;
@property (copy, nonatomic) NSString *musicFilterType;
@property (retain, nonatomic) AWESearchGlobalDoodleConfigModel *extraModel;
@property (copy, nonatomic) NSDictionary *streamTimeCost;

+ (id)extraModelJSONTransformer;
+ (id)hasMoreJSONTransformer;
+ (id)riskPreventModelJSONTransformer;
+ (id)searchNilTextModelTransformer;
+ (id)musicListJSONTransformer;
+ (id)correctModelJSONTransformer;
+ (id)searchNilInfoModelJSONTransformer;
+ (id)searchMusicListJSONTransformer;
+ (id)searchMusicHeaderInfoListJSONTransformer;
+ (id)aweCommerce_subModelPropertyKey;
+ (id)adModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (id)renderType;
- (id)adModel;
- (void)setAdModel:(id)arg0;
- (id)riskPreventModel;
- (void)setRiskPreventModel:(id)arg0;
- (id)correctName;
- (void)setCorrectName:(id)arg0;
- (id)correctModel;
- (void)setCorrectModel:(id)arg0;
- (id)searchNilInfoModel;
- (void)setSearchNilInfoModel:(id)arg0;
- (id)searchNilTextModel;
- (void)setSearchNilTextModel:(id)arg0;
- (id)streamTimeCost;
- (void)setStreamTimeCost:(id)arg0;
- (id)musicList;
- (void)setMusicList:(id)arg0;
- (id)musicFilterType;
- (long long)getSelectedTab;
- (id)searchMusicList;
- (void)setSearchMusicList:(id)arg0;
- (id)searchMusicHeaderInfoList;
- (void)setSearchMusicHeaderInfoList:(id)arg0;
- (void)setMusicFilterType:(id)arg0;
- (id)cursor;
- (void).cxx_destruct;
- (void)setHasMore:(BOOL)arg0;
- (BOOL)hasMore;
- (void)setRenderType:(id)arg0;
- (void)setCursor:(id)arg0;

@end
