//
//     Generated by private class-dump
//

@class NSNumber, NSString;

@interface HTSLivePKApi : HTSLiveApi <IESLiveRevenueInteractFeedbackAPI> {
    NSNumber *_roomID;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithRoomID:(id)arg0;
- (void)searchForSuggestWordsWith:(id)arg0 callback:(id /* block */)arg1;
- (void)searchForResultWith:(id)arg0 offset:(long long)arg1 count:(long long)arg2 searchID:(id)arg3 searchScene:(long long)arg4 callback:(id /* block */)arg5;
- (id)stringValueForScene:(unsigned long long)arg0;
- (void)battleRivalsWithEntrance:(unsigned long long)arg0 tabType:(int)arg1 openTabName:(id)arg2 recommendType:(int)arg3 flexActivityID:(id)arg4 flexActivityEntranceType:(unsigned long long)arg5 recommendSelectType:(int)arg6 loadType:(long long)arg7 isFirst:(BOOL)arg8 requestSource:(id)arg9 callback:(id /* block */)arg10;
- (id)abMapJsonString;
- (void)fetchFeedbackCategoriesAtScene:(unsigned long long)arg0 extraParams:(id)arg1 callback:(id /* block */)arg2;
- (void)uploadFeedbackWithScene:(unsigned long long)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)autoMatchWithFirst:(BOOL)arg0 matchType:(id)arg1 subType:(id)arg2 isHighWay:(BOOL)arg3 speedLevel:(long long)arg4 preferNewAnchor:(BOOL)arg5 extraParams:(id)arg6 finished:(id /* block */)arg7;
- (void)cancelAutoMatchWithMatchType:(long long)arg0 completion:(id /* block */)arg1;
- (void)getBattleSettingsWithRoomID:(id)arg0 userID:(id)arg1 secUid:(id)arg2 settingScene:(unsigned long long)arg3 callback:(id /* block */)arg4;
- (void)updateBattleSettings:(id)arg0 withRoomID:(id)arg1 secUid:(id)arg2 callback:(id /* block */)arg3;
- (void)battleRivalsWithEntrance:(unsigned long long)arg0 tabType:(int)arg1 openTabName:(id)arg2 recommendType:(int)arg3 callback:(id /* block */)arg4;
- (void)registerFlexActivityWithID:(id)arg0 callback:(id /* block */)arg1;
- (void)pkRecordWithOffset:(long long)arg0 count:(long long)arg1 fromType:(unsigned long long)arg2 callback:(id /* block */)arg3;
- (void)pkBlockListWithType:(long long)arg0 roomId:(id)arg1 userId:(id)arg2 cursor:(id)arg3 count:(long long)arg4 callback:(id /* block */)arg5;
- (void)getBattleConfigWith:(int)arg0 callback:(id /* block */)arg1;
- (void)replyPrecisionMatchWithOption:(BOOL)arg0 source:(int)arg1 precisionMatchID:(id)arg2 flexActivityID:(id)arg3 notDisturb:(BOOL)arg4 callback:(id /* block */)arg5;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;

@end
