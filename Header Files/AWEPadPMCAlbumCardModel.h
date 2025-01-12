//
//     Generated by private class-dump
//

@class NSString, NSArray, NSDictionary;

@interface AWEPadPMCAlbumCardModel : MTLModel <MTLJSONSerializing> {
    BOOL _isCollect;
    BOOL _hasSubscribe;
    NSString *_albumID;
    NSString *_title;
    long long _status;
    long long _episodeUpdateAt;
    long long _label;
    NSString *_rewardList;
    NSString *_categoryStrType;
    NSString *_categoryStrTopic;
    NSString *_region;
    long long _releaseTime;
    NSArray *_cover;
    NSArray *_actorList;
    NSString *_intro;
    NSString *_updateCycle;
    long long _pattern;
    NSArray *_languageList;
    long long _seqsCount;
    long long _seriesRank;
    NSString *_seriesTab;
    long long _duration;
    NSArray *_typeList;
    long long _collectCount;
    NSString *_subTitle;
    long long _groupSource;
    NSString *_labelText;
    NSString *_score;
    NSString *_awemeID;
    NSString *_labelInfo;
    NSArray *_verticalCoverList;
    NSArray *_horizontalCoverList;
    NSString *_episodeID;
    NSString *_albumItemID;
    NSString *_episodeItemID;
    NSString *_bookingId;
    NSString *_schema;
    long long _freeStartTime;
    long long _freeEndTime;
    NSString *_limitedFreeSubtitle;
    NSDictionary *_coverLabelInfo;
}

@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long status;
@property (nonatomic) long long episodeUpdateAt;
@property (nonatomic) long long label;
@property (copy, nonatomic) NSString *rewardList;
@property (copy, nonatomic) NSString *categoryStrType;
@property (copy, nonatomic) NSString *categoryStrTopic;
@property (copy, nonatomic) NSString *region;
@property (nonatomic) long long releaseTime;
@property (retain, nonatomic) NSArray *cover;
@property (retain, nonatomic) NSArray *actorList;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *updateCycle;
@property (nonatomic) long long pattern;
@property (retain, nonatomic) NSArray *languageList;
@property (nonatomic) long long seqsCount;
@property (nonatomic) long long seriesRank;
@property (copy, nonatomic) NSString *seriesTab;
@property (nonatomic) long long duration;
@property (retain, nonatomic) NSArray *typeList;
@property (nonatomic) BOOL isCollect;
@property (nonatomic) long long collectCount;
@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long groupSource;
@property (copy, nonatomic) NSString *labelText;
@property (copy, nonatomic) NSString *score;
@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *labelInfo;
@property (retain, nonatomic) NSArray *verticalCoverList;
@property (retain, nonatomic) NSArray *horizontalCoverList;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSString *albumItemID;
@property (copy, nonatomic) NSString *episodeItemID;
@property (copy, nonatomic) NSString *bookingId;
@property (nonatomic) BOOL hasSubscribe;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long freeStartTime;
@property (nonatomic) long long freeEndTime;
@property (copy, nonatomic) NSString *limitedFreeSubtitle;
@property (retain, nonatomic) NSDictionary *coverLabelInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)cover;
- (void)setCover:(id)arg0;
- (BOOL)hasSubscribe;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setIntro:(id)arg0;
- (id)typeList;
- (void)setTypeList:(id)arg0;
- (long long)collectCount;
- (void)setCollectCount:(long long)arg0;
- (void)setAlbumID:(id)arg0;
- (void)setEpisodeID:(id)arg0;
- (long long)seqsCount;
- (void)setSeqsCount:(long long)arg0;
- (long long)episodeUpdateAt;
- (void)setEpisodeUpdateAt:(long long)arg0;
- (long long)seriesRank;
- (void)setSeriesRank:(long long)arg0;
- (id)seriesTab;
- (void)setSeriesTab:(id)arg0;
- (id)rewardList;
- (void)setRewardList:(id)arg0;
- (id)categoryStrType;
- (void)setCategoryStrType:(id)arg0;
- (id)categoryStrTopic;
- (void)setCategoryStrTopic:(id)arg0;
- (id)actorList;
- (void)setActorList:(id)arg0;
- (id)updateCycle;
- (void)setUpdateCycle:(id)arg0;
- (void)setLanguageList:(id)arg0;
- (BOOL)isCollect;
- (void)setIsCollect:(BOOL)arg0;
- (void)setHasSubscribe:(BOOL)arg0;
- (id)albumItemID;
- (void)setAlbumItemID:(id)arg0;
- (id)limitedFreeSubtitle;
- (id)verticalCoverList;
- (long long)freeStartTime;
- (long long)freeEndTime;
- (id)coverLabelInfo;
- (void)setCoverLabelInfo:(id)arg0;
- (id)horizontalCoverList;
- (void)setVerticalCoverList:(id)arg0;
- (void)setHorizontalCoverList:(id)arg0;
- (id)episodeItemID;
- (void)setEpisodeItemID:(id)arg0;
- (void)setFreeStartTime:(long long)arg0;
- (void)setFreeEndTime:(long long)arg0;
- (void)setLimitedFreeSubtitle:(id)arg0;
- (void)setSchema:(id)arg0;
- (id)region;
- (void)setRegion:(id)arg0;
- (void)setScore:(id)arg0;
- (id)score;
- (void)setLabelText:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (long long)releaseTime;
- (void)setLabel:(long long)arg0;
- (id)labelText;
- (long long)duration;
- (id)title;
- (void)setReleaseTime:(long long)arg0;
- (void)setStatus:(long long)arg0;
- (void)setSubTitle:(id)arg0;
- (long long)label;
- (id)subTitle;
- (long long)pattern;
- (id)schema;
- (void)setTitle:(id)arg0;
- (void)setDuration:(long long)arg0;
- (id)labelInfo;
- (void)setLabelInfo:(id)arg0;
- (id)intro;
- (id)albumID;
- (long long)groupSource;
- (void)setGroupSource:(long long)arg0;
- (id)bookingId;
- (void)setBookingId:(id)arg0;
- (void)setPattern:(long long)arg0;
- (id)languageList;
- (id)episodeID;

@end
