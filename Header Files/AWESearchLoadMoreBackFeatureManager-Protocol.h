//
//     Generated by private class-dump
//

@protocol AWESearchLoadMoreBackFeatureManager <AWECrotocol>

+ (id)sharedManager;

- (void)addLoadMoreInfoModelWithGeneralSearchModelArray:(id)arg0;
- (void)insertAssociatedAdWithModel:(id)arg0;
- (id)consumerLastLoadMoreInfoDictionary;
- (void)recordEnterGeneralSearchViewController:(BOOL)arg0 vc:(id)arg1;
- (void)recordEnterSearchDetailViewController:(BOOL)arg0 aweme:(id)arg1;
- (void)recordLikeClickWith:(id)arg0;
- (void)recordADClickWith:(id)arg0;
- (void)recordPlaybackTimeWith:(id)arg0;
- (void)recordPlaybackTimeWith:(id)arg0 playbackTime:(double)arg1 loopTimes:(long long)arg2;
- (void)deleteCurrentLoadMoreInfoModel;

@end