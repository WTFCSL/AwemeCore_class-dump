//
//     Generated by private class-dump
//

@protocol IESLiveCompetitionGameRouter <IESLiveInteractionModuleGameCompetitionInterface>

- (void)showCompetitonGameStartPanel:(id)arg0;
- (void)showCompetitionGameRankList:(id)arg0 nickName:(id)arg1;
- (BOOL)isInCompetitionGameScoreType;
- (id)currentCompetitonInfo;
- (id)seatStrForCompetitionGame:(BOOL)arg0;
- (BOOL)seatinfosIncludePerformer:(id)arg0;
- (id)seatInfosOnlyPerformer:(id)arg0;
- (void)setUser:(id)arg0 asPerformerWithCallback:(id /* block */)arg1;
- (void)unsetUser:(id)arg0 asPerformerWithCallback:(id /* block */)arg1;
- (long long)competitionGameRoleOfUser:(id)arg0;
- (unsigned long long)interactionPanelOptionItemTypeForUser:(id)arg0;

@end