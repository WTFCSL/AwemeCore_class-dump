//
//     Generated by private class-dump
//

@interface IESLiveDistributionEntranceTrackManager : NSObject

+ (void)trackLiveShowWithEnterFromMerge:(id)arg0 enterMethod:(id)arg1 extraParams:(id)arg2;
+ (void)trackLiveDuration:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 duration:(id)arg4 extraParams:(id)arg5;
+ (id)inviteModeForTrackByBattleSettings:(id)arg0;
+ (void)trackLiveShow:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 extraParams:(id)arg4;
+ (void)trackDurationWithEnterFromMerge:(id)arg0 enterMethod:(id)arg1 duration:(id)arg2 extraParams:(id)arg3;
+ (id)paramsFromRoom:(id)arg0 enterFromMerge:(id)arg1 enterMethod:(id)arg2 requestId:(id)arg3 extraParams:(id)arg4;
+ (BOOL)checkLiveEntranceWithEnterFromMerge:(id)arg0 enterMethod:(id)arg1 checkTitle:(BOOL)arg2;
+ (id)viceViewTypeForTrack:(id)arg0;

@end
