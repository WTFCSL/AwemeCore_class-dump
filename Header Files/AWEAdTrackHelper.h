//
//     Generated by private class-dump
//

@class NSNumber, NSString, AWEURLModel;
@protocol IESVideoPlayerProtocol;

@interface AWEAdTrackHelper : HTSService <AWEAdTrackHelper> {
    BOOL _shouldTrackDTV;
    BOOL _hasTrackedForThisLoop;
    BOOL _hasClickedBeforeEffectivePlayTime;
    id<IESVideoPlayerProtocol> _playerController;
    NSNumber *_effectivePlayTime;
    AWEURLModel *_effectivePlayTrackURLList;
    double _firstClickTimeInEachLoop;
}

@property (retain, nonatomic) NSNumber *effectivePlayTime;
@property (retain, nonatomic) AWEURLModel *effectivePlayTrackURLList;
@property (nonatomic) double firstClickTimeInEachLoop;
@property (nonatomic) BOOL shouldTrackDTV;
@property (nonatomic) BOOL hasTrackedForThisLoop;
@property (nonatomic) BOOL hasClickedBeforeEffectivePlayTime;
@property (weak, nonatomic) id<IESVideoPlayerProtocol> playerController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)effectivePlayTrackURLList;
- (void)setEffectivePlayTime:(id)arg0;
- (id)effectivePlayTime;
- (void)setEffectivePlayTrackURLList:(id)arg0;
- (BOOL)shouldTrackDTV;
- (BOOL)shouldTrackDTVWithModel:(id)arg0;
- (void)updateTrackStateWithModelIfNeeded:(id)arg0;
- (BOOL)hasTrackedForThisLoop;
- (BOOL)hasClickedBeforeEffectivePlayTime;
- (void)trackDTVIfNeededWithModel:(id)arg0;
- (void)trackDTVIfNeededWithAdContext:(id)arg0;
- (void)setShouldTrackDTV:(BOOL)arg0;
- (void)setHasTrackedForThisLoop:(BOOL)arg0;
- (void)setHasClickedBeforeEffectivePlayTime:(BOOL)arg0;
- (double)firstClickTimeInEachLoop;
- (void)setFirstClickTimeInEachLoop:(double)arg0;
- (void).cxx_destruct;
- (id)playerController;
- (void)setPlayerController:(id)arg0;

@end
