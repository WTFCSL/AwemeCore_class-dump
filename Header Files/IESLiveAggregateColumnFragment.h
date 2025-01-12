//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveAggregateColumnProvider;

@interface IESLiveAggregateColumnFragment : IESLiveRoomComponent <IESLiveAggregateColumnAction> {
    BOOL _cleanTimeOpt;
    id<IESLiveAggregateColumnProvider> _aggregateColumnProvider;
    long long _orientation;
}

@property (retain, nonatomic) id<IESLiveAggregateColumnProvider> aggregateColumnProvider;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL cleanTimeOpt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (id)entranceView;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentUnmount;
- (void)remoteRoomDataReady:(id)arg0;
- (void)componentOrientationChanged:(long long)arg0;
- (void)mountDidFinishForLevel:(long long)arg0;
- (void)setEntranceHidden:(BOOL)arg0;
- (void)liveAggregateShowDrawer;
- (void)setAggregateColumnProvider:(id)arg0;
- (BOOL)cleanTimeOpt;
- (id)aggregateColumnProvider;
- (void)createDidFinishForLevel:(long long)arg0;
- (void)setCleanTimeOpt:(BOOL)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (void)setOrientation:(long long)arg0;

@end
