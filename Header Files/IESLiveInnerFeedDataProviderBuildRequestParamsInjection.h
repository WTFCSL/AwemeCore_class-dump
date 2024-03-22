//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, NSMutableDictionary, NSString, IESLiveEnterRoomAisle, NSNumber, HTSLiveRoom;

@interface IESLiveInnerFeedDataProviderBuildRequestParamsInjection : NSObject <IESLiveInnerFeedDataProviderInjectionProtocol> {
    BOOL _hasOriginRoom;
    BOOL _isFromFeedDrawer;
    BOOL _isFromECommerce;
    BOOL _directSort;
    long long _maxTime;
    NSNumber *_offset;
    NSNumber *_offsetType;
    NSMutableDictionary *_params;
    long long _roomCount;
    HTSLiveRoom *_originRoom;
    NSString *_lastEpisodeIDs;
    IESLiveInnerFeedContext *_context;
    NSNumber *_latestWatchTime;
    IESLiveEnterRoomAisle *_roomAisle;
}

@property (nonatomic) long long maxTime;
@property (retain, nonatomic) NSNumber *offset;
@property (retain, nonatomic) NSNumber *offsetType;
@property (retain, nonatomic) NSMutableDictionary *params;
@property (nonatomic) BOOL hasOriginRoom;
@property (nonatomic) BOOL isFromFeedDrawer;
@property (nonatomic) BOOL isFromECommerce;
@property (nonatomic) long long roomCount;
@property (retain, nonatomic) HTSLiveRoom *originRoom;
@property (retain, nonatomic) NSString *lastEpisodeIDs;
@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (nonatomic) BOOL directSort;
@property (retain, nonatomic) NSNumber *latestWatchTime;
@property (retain, nonatomic) IESLiveEnterRoomAisle *roomAisle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (BOOL)isFromECommerce;
- (void)setIsFromECommerce:(BOOL)arg0;
- (long long)roomCount;
- (void)setRoomCount:(long long)arg0;
- (id)roomAisle;
- (void)setRoomAisle:(id)arg0;
- (void)setOriginRoom:(id)arg0;
- (id)originRoom;
- (id)offsetType;
- (void)setOffsetType:(id)arg0;
- (id)latestWatchTime;
- (void)setLatestWatchTime:(id)arg0;
- (void)willFetchWithURL:(id)arg0 withDataChangedType:(unsigned long long)arg1 parameters:(id)arg2 updateBlock:(id /* block */)arg3;
- (void)didFetchWithResponse:(id)arg0 error:(id)arg1;
- (long long)injectionPriority;
- (id)initWithRoomAisle:(id)arg0 context:(id)arg1;
- (void)initData:(id)arg0;
- (void)p_addPositionParam;
- (id)p_buildAPICommonParam:(id)arg0;
- (BOOL)p_isFromEcommerce:(id)arg0;
- (id)lastEpisodeIDs;
- (BOOL)hasOriginRoom;
- (BOOL)isFromFeedDrawer;
- (BOOL)directSort;
- (id)p_culLastEpisodeIDs:(id)arg0;
- (void)setLastEpisodeIDs:(id)arg0;
- (void)setDirectSort:(BOOL)arg0;
- (BOOL)p_isFromVS:(id)arg0;
- (void)setHasOriginRoom:(BOOL)arg0;
- (void)setIsFromFeedDrawer:(BOOL)arg0;
- (void)setMaxTime:(long long)arg0;
- (void).cxx_destruct;
- (void)setOffset:(id)arg0;
- (void)setContext:(id)arg0;
- (id)offset;
- (id)context;
- (long long)maxTime;
- (id)params;
- (void)setParams:(id)arg0;

@end