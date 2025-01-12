//
//     Generated by private class-dump
//

@class NSString, AWEVideoPlayTimeRecorder, NSMutableSet;

@interface AWEFeedContinuePlayController : AWEBaseController <AWEFeedPlayRecordInfoProtocol> {
    AWEVideoPlayTimeRecorder *_playTimeRecorder;
    NSMutableSet *_playModels;
    long long _scrollEndMaxCellIndex;
}

@property (retain, nonatomic) AWEVideoPlayTimeRecorder *playTimeRecorder;
@property (retain, nonatomic) NSMutableSet *playModels;
@property (nonatomic) long long scrollEndMaxCellIndex;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (long long)maxUserScorllIndex;
- (void)configureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)willConfigureCell:(id)arg0 withModel:(id)arg1 atIndexPath:(id)arg2;
- (void)onScrollDidEndWithIndexPath:(id)arg0;
- (id)playModels;
- (long long)scrollEndMaxCellIndex;
- (void)setScrollEndMaxCellIndex:(long long)arg0;
- (long long)currentPlayVideoCount;
- (void)setPlayModels:(id)arg0;
- (id)playTimeRecorder;
- (void)setPlayTimeRecorder:(id)arg0;
- (void)configDefaultSeekTimeInWatchVideoLater:(id)arg0 withModel:(id)arg1;
- (void)configDefaultSeekTimeInRevisitVideo:(id)arg0 model:(id)arg1;
- (void)configDefaultSeekToTimeIfNeeded:(id)arg0 model:(id)arg1;
- (void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
