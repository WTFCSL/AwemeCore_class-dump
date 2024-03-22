//
//     Generated by private class-dump
//

@class NSString, NSArray, AWEPadPMCCardExtraModel;

@interface AWEPadPMCEpisodeCardModel : MTLModel <MTLJSONSerializing> {
    BOOL _collected;
    NSString *_episodeID;
    NSString *_itemID;
    NSString *_seasonID;
    NSString *_title;
    NSString *_subtitle;
    NSString *_coverUrl;
    NSString *_labelInfo;
    NSString *_currentPeriod;
    long long _ownerUserID;
    long long _episodeStage;
    long long _episodeType;
    long long _episodeSubType;
    long long _progress;
    long long _seasonType;
    NSArray *_horizontalCoverX2;
    NSArray *_verticalCoverX2;
    long long _seasonUpdateStatus;
    long long _latestPeriod;
    double _ratingScore;
    AWEPadPMCCardExtraModel *_extraModel;
}

@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *seasonID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *labelInfo;
@property (copy, nonatomic) NSString *currentPeriod;
@property (nonatomic) long long ownerUserID;
@property (nonatomic) long long episodeStage;
@property (nonatomic) long long episodeType;
@property (nonatomic) long long episodeSubType;
@property (nonatomic) long long progress;
@property (nonatomic) long long seasonType;
@property (retain, nonatomic) NSArray *horizontalCoverX2;
@property (retain, nonatomic) NSArray *verticalCoverX2;
@property (nonatomic) long long seasonUpdateStatus;
@property (nonatomic) long long latestPeriod;
@property (nonatomic) double ratingScore;
@property (nonatomic) BOOL collected;
@property (retain, nonatomic) AWEPadPMCCardExtraModel *extraModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)extraModel;
- (void)setExtraModel:(id)arg0;
- (void)setCoverUrl:(id)arg0;
- (id)coverUrl;
- (BOOL)collected;
- (void)setCollected:(BOOL)arg0;
- (long long)episodeStage;
- (void)setEpisodeStage:(long long)arg0;
- (void)setEpisodeID:(id)arg0;
- (long long)episodeSubType;
- (void)setEpisodeSubType:(long long)arg0;
- (long long)seasonUpdateStatus;
- (void)setSeasonID:(id)arg0;
- (id)seasonID;
- (long long)latestPeriod;
- (void)setLatestPeriod:(long long)arg0;
- (double)ratingScore;
- (id)horizontalCoverX2;
- (void)setHorizontalCoverX2:(id)arg0;
- (id)verticalCoverX2;
- (void)setVerticalCoverX2:(id)arg0;
- (void)setSeasonUpdateStatus:(long long)arg0;
- (void)setRatingScore:(double)arg0;
- (long long)episodeType;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (id)title;
- (long long)progress;
- (void)setProgress:(long long)arg0;
- (void)setEpisodeType:(long long)arg0;
- (id)subtitle;
- (void)setSubtitle:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)labelInfo;
- (void)setLabelInfo:(id)arg0;
- (id)currentPeriod;
- (void)setCurrentPeriod:(id)arg0;
- (long long)seasonType;
- (void)setSeasonType:(long long)arg0;
- (void)setOwnerUserID:(long long)arg0;
- (long long)ownerUserID;
- (id)episodeID;

@end