//
//     Generated by private class-dump
//

@class AWEHotSearchAdDataModel, NSString, NSArray, AWEHotSearchPostAwemeInfoModel, AWEHotSpotDetailInfo, NSNumber, AWEURLModel;

@interface AWENewHotSearchModel : AWEBaseApiModel <AWEIrregularWordProtocol, AWERegularWordProtocol> {
    BOOL _canExpand;
    NSString *_hotSpotID;
    NSString *_word;
    unsigned long long _labelType;
    NSNumber *_hotCount;
    NSString *_searchWord;
    NSString *_challengeID;
    NSString *_groupID;
    AWEURLModel *_imageURL;
    AWEHotSearchAdDataModel *_adData;
    long long _rankPatternType;
    long long _rankPosition;
    long long _realTrendingRank;
    NSNumber *_videoCount;
    NSString *_awemeID;
    NSString *_schema;
    long long _wordType;
    NSString *_customizedLabel;
    NSArray *_relateSpots;
    NSNumber *_eventTime;
    NSNumber *_viewCount;
    AWEHotSpotDetailInfo *_detailInfo;
    NSString *_hotListServerParamStr;
    AWEHotSearchPostAwemeInfoModel *_postAwemeInfo;
    NSString *_hotSpotDescription;
    long long _displayStyle;
    NSNumber *_roomCount;
    NSNumber *_discussVideoCount;
    NSArray *_wordSubBoard;
    NSNumber *_nodeType;
    long long _videoGroupID;
    NSString *_parentHotSpotID;
    NSNumber *_nodeIndex;
    NSString *_nodeSpotID;
    NSNumber *_onListTime;
    long long _rank;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSNumber *cellHeight;
@property (nonatomic) BOOL isModelSelected;
@property (nonatomic) long long videoIndex;
@property (nonatomic) BOOL isLastHotSpot;
@property (retain, nonatomic) NSNumber *showExpandAnimatonCount;
@property (nonatomic) BOOL hasExpand;
@property (nonatomic) long long index;
@property (nonatomic) BOOL hasTracked;
@property (nonatomic) BOOL isOffline;
@property (nonatomic) BOOL hasExpandRelateSpot;
@property (nonatomic) BOOL hasSelectMainSpot;
@property (nonatomic) BOOL isRisingHotSpot;
@property (nonatomic) long long totalCount;
@property (nonatomic) BOOL hasCompleteLoadMore;
@property (copy, nonatomic) NSString *mainSpotWord;
@property (nonatomic) long long mainSpotIndex;
@property (nonatomic) BOOL isRelateHotSpot;
@property (nonatomic) BOOL isFirstRelateHotSpot;
@property (nonatomic) BOOL isLastRelateHotSpot;
@property (nonatomic) long long boardType;
@property (copy, nonatomic) NSString *boardSubType;
@property (copy, nonatomic) NSString *cityCodeOnNearbyBoard;
@property (nonatomic) BOOL requestDataGotEmpty;
@property (nonatomic) BOOL hasNewDetailBoardInfo;
@property (nonatomic) BOOL alreadyTrackNewDetailBoard;
@property (nonatomic) BOOL alreadyDisplayContentPanel;
@property (copy, nonatomic) NSString *hotSpotID;
@property (copy, nonatomic) NSString *word;
@property (nonatomic) unsigned long long labelType;
@property (retain, nonatomic) NSNumber *hotCount;
@property (copy, nonatomic) NSString *searchWord;
@property (copy, nonatomic) NSString *challengeID;
@property (copy, nonatomic) NSString *groupID;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (retain, nonatomic) AWEHotSearchAdDataModel *adData;
@property (nonatomic) long long rankPatternType;
@property (nonatomic) long long rankPosition;
@property (nonatomic) long long realTrendingRank;
@property (retain, nonatomic) NSNumber *videoCount;
@property (copy, nonatomic) NSString *awemeID;
@property (nonatomic) BOOL canExpand;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) long long wordType;
@property (copy, nonatomic) NSString *customizedLabel;
@property (copy, nonatomic) NSArray *relateSpots;
@property (retain, nonatomic) NSNumber *eventTime;
@property (retain, nonatomic) NSNumber *viewCount;
@property (retain, nonatomic) AWEHotSpotDetailInfo *detailInfo;
@property (copy, nonatomic) NSString *hotListServerParamStr;
@property (retain, nonatomic) AWEHotSearchPostAwemeInfoModel *postAwemeInfo;
@property (copy, nonatomic) NSString *hotSpotDescription;
@property (nonatomic) long long displayStyle;
@property (retain, nonatomic) NSNumber *roomCount;
@property (retain, nonatomic) NSNumber *discussVideoCount;
@property (copy, nonatomic) NSArray *wordSubBoard;
@property (retain, nonatomic) NSNumber *nodeType;
@property (nonatomic) long long videoGroupID;
@property (copy, nonatomic) NSString *parentHotSpotID;
@property (retain, nonatomic) NSNumber *nodeIndex;
@property (copy, nonatomic) NSString *nodeSpotID;
@property (retain, nonatomic) NSNumber *onListTime;
@property (nonatomic) long long rank;

+ (id)imageURLJSONTransformer;
+ (id)adDataJSONTransformer;
+ (id)detailInfoJSONTransformer;
+ (id)relateSpotsJSONTransformer;
+ (id)postAwemeInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)getContentString;
- (id)getDisplayWord;
- (id)getSearchWord;
- (long long)getRankPosition;
- (double)getTagPadding;
- (long long)defaultStyle;
- (long long)videoIndex;
- (void)setVideoIndex:(long long)arg0;
- (BOOL)hasTracked;
- (void)setHasTracked:(BOOL)arg0;
- (id)discussVideoCount;
- (id)hotSpotID;
- (void)setAwemeID:(id)arg0;
- (id)awemeID;
- (void)setDetailInfo:(id)arg0;
- (id)detailInfo;
- (long long)boardType;
- (id)wordSubBoard;
- (id)mainSpotWord;
- (long long)videoGroupID;
- (id)parentHotSpotID;
- (id)nodeSpotID;
- (void)setMainSpotWord:(id)arg0;
- (void)setHotSpotID:(id)arg0;
- (BOOL)alreadyDisplayContentPanel;
- (void)setAlreadyDisplayContentPanel:(BOOL)arg0;
- (id)relateSpots;
- (long long)mainSpotIndex;
- (BOOL)isRelateHotSpot;
- (BOOL)isRisingHotSpot;
- (BOOL)isSameHotSpotModel:(id)arg0;
- (BOOL)needDisplayGrayStyle;
- (void)setIsRelateHotSpot:(BOOL)arg0;
- (void)setBoardType:(long long)arg0;
- (id)boardSubType;
- (void)setBoardSubType:(id)arg0;
- (long long)rankPosition;
- (BOOL)isHotSpotEventVideo;
- (long long)countForProgressView;
- (BOOL)requestDataGotEmpty;
- (BOOL)isLastRelateHotSpot;
- (void)setHasExpandRelateSpot:(BOOL)arg0;
- (id)hotSpotDescription;
- (void)setHasCompleteLoadMore:(BOOL)arg0;
- (void)setRequestDataGotEmpty:(BOOL)arg0;
- (id)cityCodeOnNearbyBoard;
- (id)customizedLabel;
- (long long)rankPatternType;
- (id)hotCount;
- (id)roomCount;
- (void)setHasSelectMainSpot:(BOOL)arg0;
- (BOOL)hasSelectMainSpot;
- (BOOL)hasExpandRelateSpot;
- (long long)realTrendingRank;
- (BOOL)isFirstRelateHotSpot;
- (void)setCityCodeOnNearbyBoard:(id)arg0;
- (void)setMainSpotIndex:(long long)arg0;
- (void)setIsFirstRelateHotSpot:(BOOL)arg0;
- (void)setIsLastRelateHotSpot:(BOOL)arg0;
- (void)setRealTrendingRank:(long long)arg0;
- (void)setVideoGroupID:(long long)arg0;
- (void)setParentHotSpotID:(id)arg0;
- (id)postAwemeInfo;
- (id)onListTime;
- (void)setIsRisingHotSpot:(BOOL)arg0;
- (void)setNodeSpotID:(id)arg0;
- (id)hotListServerParamStr;
- (BOOL)isModelSelected;
- (BOOL)isLastHotSpot;
- (id)showExpandAnimatonCount;
- (BOOL)hasExpand;
- (void)setIsModelSelected:(BOOL)arg0;
- (void)setIsLastHotSpot:(BOOL)arg0;
- (void)setShowExpandAnimatonCount:(id)arg0;
- (void)setHasExpand:(BOOL)arg0;
- (void)setHotSpotDescription:(id)arg0;
- (void)setRankPosition:(long long)arg0;
- (BOOL)hasNewDetailBoardInfo;
- (BOOL)alreadyTrackNewDetailBoard;
- (BOOL)hasCompleteLoadMore;
- (void)setHasNewDetailBoardInfo:(BOOL)arg0;
- (void)setAlreadyTrackNewDetailBoard:(BOOL)arg0;
- (void)setHotCount:(id)arg0;
- (id)searchWord;
- (void)setSearchWord:(id)arg0;
- (void)setRankPatternType:(long long)arg0;
- (void)setCustomizedLabel:(id)arg0;
- (void)setRelateSpots:(id)arg0;
- (void)setHotListServerParamStr:(id)arg0;
- (void)setPostAwemeInfo:(id)arg0;
- (void)setRoomCount:(id)arg0;
- (void)setDiscussVideoCount:(id)arg0;
- (void)setWordSubBoard:(id)arg0;
- (void)setOnListTime:(id)arg0;
- (void)setSchema:(id)arg0;
- (void)setGroupID:(id)arg0;
- (void)setRank:(long long)arg0;
- (unsigned long long)labelType;
- (void)setIndex:(long long)arg0;
- (id)groupID;
- (long long)rank;
- (void)setDisplayStyle:(long long)arg0;
- (id)eventTime;
- (void).cxx_destruct;
- (void)setImageURL:(id)arg0;
- (void)setEventTime:(id)arg0;
- (void)setAdData:(id)arg0;
- (id)nodeType;
- (id)imageURL;
- (void)setIsOffline:(BOOL)arg0;
- (long long)index;
- (id)adData;
- (BOOL)isOffline;
- (void)setLabelType:(unsigned long long)arg0;
- (long long)totalCount;
- (id)viewCount;
- (id)schema;
- (long long)displayStyle;
- (id)cellHeight;
- (void)setCellHeight:(id)arg0;
- (void)setViewCount:(id)arg0;
- (id)word;
- (void)setWord:(id)arg0;
- (long long)topicType;
- (id)videoCount;
- (void)setVideoCount:(id)arg0;
- (void)setNodeType:(id)arg0;
- (void)setTotalCount:(long long)arg0;
- (void)setNodeIndex:(id)arg0;
- (id)nodeIndex;
- (BOOL)canExpand;
- (void)setCanExpand:(BOOL)arg0;
- (id)challengeID;
- (void)setChallengeID:(id)arg0;
- (void)setWordType:(long long)arg0;
- (long long)wordType;

@end
