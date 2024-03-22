//
//     Generated by private class-dump
//

@class NSMutableDictionary, NSMutableArray;
@protocol IESLiveRoomServiceAdapter;

@interface IESLivePKGroupPanelMonitor : NSObject {
    BOOL _hasInvite;
    BOOL _isFirstOpenPanel;
    long long _followedCount;
    double _notInteractiveRate;
    NSMutableDictionary *_panelLoadDictionary;
    long long _panelOpenCount;
    long long _pullDownCount;
    NSMutableArray *_needCheckDataTypeArray;
    NSMutableDictionary *_firstTriggerDictionary;
    id<IESLiveRoomServiceAdapter> _roomModel;
}

@property (retain, nonatomic) NSMutableDictionary *panelLoadDictionary;
@property (nonatomic) long long panelOpenCount;
@property (nonatomic) long long pullDownCount;
@property (nonatomic) BOOL hasInvite;
@property (retain, nonatomic) NSMutableArray *needCheckDataTypeArray;
@property (retain, nonatomic) NSMutableDictionary *firstTriggerDictionary;
@property (nonatomic) BOOL isFirstOpenPanel;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> roomModel;
@property (nonatomic) long long followedCount;
@property (nonatomic) double notInteractiveRate;

- (id)roomModel;
- (long long)followedCount;
- (void)setFollowedCount:(long long)arg0;
- (void)setRoomModel:(id)arg0;
- (BOOL)isSingleTab;
- (void)allMonitorDataUpload:(long long)arg0;
- (id)typePrefixByLoadType:(long long)arg0;
- (id)panelLoadDictionary;
- (id)needCheckDataTypeArray;
- (void)setNeedCheckDataTypeArray:(id)arg0;
- (void)trackPKGroupPanelLoad:(BOOL)arg0;
- (long long)pullDownCount;
- (void)setPullDownCount:(long long)arg0;
- (long long)panelOpenCount;
- (void)setPanelOpenCount:(long long)arg0;
- (void)setHasInvite:(BOOL)arg0;
- (BOOL)hasInvite;
- (id)firstTriggerDictionary;
- (BOOL)isFirstOpenPanel;
- (void)setIsFirstOpenPanel:(BOOL)arg0;
- (double)notInteractiveRate;
- (void)setPanelLoadDictionary:(id)arg0;
- (void)setNotInteractiveRate:(double)arg0;
- (id)initWithDIContext:(id)arg0 roomModel:(id)arg1;
- (void)recordPanelAreaLoadDuration:(long long)arg0 areaType:(long long)arg1;
- (void)recordPanelAreaLoadCacheSource:(long long)arg0 areaType:(long long)arg1;
- (void)updateMonitorDataAfterPanelDidAppear:(long long)arg0;
- (void)trackPKFirstTrigger:(long long)arg0;
- (void)trackFirstInvitedTapFormStartLive:(long long)arg0 duration:(long long)arg1;
- (void)setFirstTriggerDictionary:(id)arg0;
- (void).cxx_destruct;
- (void)clean;

@end