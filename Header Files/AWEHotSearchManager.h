//
//     Generated by private class-dump
//

@class AWEShareModel, NSArray, NSString, AWEHotSearchNewResponseModel, AWENewHotSearchModel, NSNumber, NSMutableArray;

@interface AWEHotSearchManager : NSObject <AWEHotSpotManagerProtocol> {
    BOOL _needRequireForTabs;
    BOOL _isRequestOnAir;
    BOOL _eventListIsRequesting;
    BOOL _eventListFinishFetch;
    BOOL _detailInfoIsRequesting;
    NSMutableArray *_dataArray;
    NSMutableArray *_risingHotSpotArray;
    NSArray *_allHotSpotArray;
    NSArray *_originEventList;
    NSArray *_filterEventList;
    NSString *_activeTime;
    NSString *_opDefaultWord;
    NSString *_opSearchWord;
    NSString *_guessWordID;
    NSString *_trendEntryWord;
    AWEShareModel *_shareInfo;
    AWEHotSearchNewResponseModel *_hotSearchNewResponseModel;
    unsigned long long _boardType;
    NSNumber *_initialWordIndex;
    long long _tabStyle;
    AWENewHotSearchModel *_pinnedTopHotSearchModel;
    unsigned long long _requestType;
    long long _mainHotSpotID;
    NSNumber *_timelineOffset;
    NSNumber *_timelineCount;
}

@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) unsigned long long requestType;
@property (nonatomic) long long mainHotSpotID;
@property (retain, nonatomic) NSNumber *timelineOffset;
@property (retain, nonatomic) NSNumber *timelineCount;
@property (nonatomic) BOOL eventListIsRequesting;
@property (nonatomic) BOOL eventListFinishFetch;
@property (nonatomic) BOOL detailInfoIsRequesting;
@property (retain, nonatomic) NSMutableArray *dataArray;
@property (retain, nonatomic) NSMutableArray *risingHotSpotArray;
@property (copy, nonatomic) NSArray *allHotSpotArray;
@property (copy, nonatomic) NSArray *originEventList;
@property (copy, nonatomic) NSArray *filterEventList;
@property (copy, nonatomic) NSString *activeTime;
@property (copy, nonatomic) NSString *opDefaultWord;
@property (copy, nonatomic) NSString *opSearchWord;
@property (copy, nonatomic) NSString *guessWordID;
@property (copy, nonatomic) NSString *trendEntryWord;
@property (retain, nonatomic) AWEShareModel *shareInfo;
@property (retain, nonatomic) AWEHotSearchNewResponseModel *hotSearchNewResponseModel;
@property (nonatomic) unsigned long long boardType;
@property (retain, nonatomic) NSNumber *initialWordIndex;
@property (nonatomic) long long tabStyle;
@property (nonatomic) BOOL needRequireForTabs;
@property (retain, nonatomic) AWENewHotSearchModel *pinnedTopHotSearchModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)fetchGessedSearchKeyword:(id)arg0 useJSON:(BOOL)arg1 bizID:(id)arg2 completion:(id /* block */)arg3;
+ (id)guessWordDomain;

- (BOOL)isRequestOnAir;
- (void)setIsRequestOnAir:(BOOL)arg0;
- (id)filterEventList;
- (id)getExpectedSizeInfo;
- (unsigned long long)boardType;
- (id)trendEntryWord;
- (void)setTrendEntryWord:(id)arg0;
- (void)fetchTrendWordsListWithParamsModel:(id)arg0 otherParams:(id)arg1 completion:(id /* block */)arg2;
- (void)setMainHotSpotID:(long long)arg0;
- (id)initialWordIndex;
- (void)fetchEventNodeList:(id)arg0 completion:(id /* block */)arg1;
- (id)pinnedTopHotSearchModel;
- (void)modifyEventInfoFotHotspot:(id)arg0;
- (id)allHotSpotArray;
- (void)setBoardType:(unsigned long long)arg0;
- (void)loadmoreEventNodeList:(id /* block */)arg0;
- (id)risingHotSpotTitle;
- (id)risingHotSpotArray;
- (id)hotSearchNewResponseModel;
- (void)setNeedRequireForTabs:(BOOL)arg0;
- (void)setRisingHotSpotArray:(id)arg0;
- (void)setAllHotSpotArray:(id)arg0;
- (void)addMacToParam:(id)arg0;
- (id)hotListURLString;
- (void)setHotSearchNewResponseModel:(id)arg0;
- (id)filteredHotSearchList:(id)arg0 withType:(unsigned long long)arg1;
- (id)opDefaultWord;
- (void)setOpDefaultWord:(id)arg0;
- (id)opSearchWord;
- (void)setOpSearchWord:(id)arg0;
- (void)setPinnedTopHotSearchModel:(id)arg0;
- (long long)mainHotSpotID;
- (BOOL)eventListIsRequesting;
- (void)setEventListIsRequesting:(BOOL)arg0;
- (void)setEventListFinishFetch:(BOOL)arg0;
- (void)setOriginEventList:(id)arg0;
- (id)filterFakeHotSpotList:(id)arg0 paramModel:(id)arg1;
- (void)setFilterEventList:(id)arg0;
- (BOOL)eventListFinishFetch;
- (id)timelineOffset;
- (id)originEventList;
- (void)setInitialWordIndex:(id)arg0;
- (id)guessWordID;
- (void)setGuessWordID:(id)arg0;
- (long long)tabStyle;
- (void)setTabStyle:(long long)arg0;
- (BOOL)needRequireForTabs;
- (void)setTimelineOffset:(id)arg0;
- (id)timelineCount;
- (void)setTimelineCount:(id)arg0;
- (BOOL)detailInfoIsRequesting;
- (void)setDetailInfoIsRequesting:(BOOL)arg0;
- (void)setRequestType:(unsigned long long)arg0;
- (void).cxx_destruct;
- (unsigned long long)requestType;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)shareInfo;
- (void)setShareInfo:(id)arg0;
- (id)dataArray;
- (void)setDataArray:(id)arg0;
- (id)activeTime;
- (id)initWithRequestType:(unsigned long long)arg0;
- (void)setActiveTime:(id)arg0;

@end
