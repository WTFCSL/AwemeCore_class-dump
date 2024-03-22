//
//     Generated by private class-dump
//

@class AWEPadPMCCardExtraModel, NSString, NSArray, NSNumber;

@interface AWEPadPMCSeriesCardModel : MTLModel <MTLJSONSerializing> {
    BOOL _isExclusive;
    BOOL _collected;
    NSString *_seriesName;
    NSString *_desc;
    NSString *_seriesID;
    NSString *_watchedItem;
    NSNumber *_watchedEpisode;
    NSArray *_coverUrl;
    NSArray *_horizontalCoverUrl;
    NSNumber *_playVV;
    NSArray *_contentTypes;
    AWEPadPMCCardExtraModel *_extraModel;
}

@property (copy, nonatomic) NSString *seriesName;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *seriesID;
@property (copy, nonatomic) NSString *watchedItem;
@property (retain, nonatomic) NSNumber *watchedEpisode;
@property (retain, nonatomic) NSArray *coverUrl;
@property (retain, nonatomic) NSArray *horizontalCoverUrl;
@property (retain, nonatomic) NSNumber *playVV;
@property (retain, nonatomic) NSArray *contentTypes;
@property (nonatomic) BOOL isExclusive;
@property (nonatomic) BOOL collected;
@property (retain, nonatomic) AWEPadPMCCardExtraModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)contentTypesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (BOOL)collected;
- (void)setCollected:(BOOL)arg0;
- (id)watchedItem;
- (void)setWatchedItem:(id)arg0;
- (id)watchedEpisode;
- (void)setWatchedEpisode:(id)arg0;
- (id)seriesID;
- (void)setSeriesID:(id)arg0;
- (id)horizontalCoverUrl;
- (id)playVV;
- (void)setHorizontalCoverUrl:(id)arg0;
- (void)setPlayVV:(id)arg0;
- (id)desc;
- (void)setContentTypes:(id)arg0;
- (void).cxx_destruct;
- (id)seriesName;
- (id)contentTypes;
- (void)setSeriesName:(id)arg0;
- (BOOL)isExclusive;
- (void)setDesc:(id)arg0;
- (void)setIsExclusive:(BOOL)arg0;

@end