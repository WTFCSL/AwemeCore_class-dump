//
//     Generated by private class-dump
//

@class DVEVideoClipViewModel, DVEVideoClipView, NSString;
@protocol DVETrackEventProtocol;

@interface DVEVideoClipViewController : DVEBaseBarController <DVEBaseBarTopViewDelegate, UICollectionViewDataSource, UICollectionViewDelegate, DVEVideoClipEditDelegate> {
    BOOL _isPlayingBeforeTouch;
    BOOL _hasEditedRange;
    DVEVideoClipViewModel *_viewModel;
    DVEVideoClipView *_videoClipView;
    id<DVETrackEventProtocol> _eventTracker;
}

@property (retain, nonatomic) DVEVideoClipViewModel *viewModel;
@property (retain, nonatomic) DVEVideoClipView *videoClipView;
@property (nonatomic) BOOL isPlayingBeforeTouch;
@property (weak, nonatomic) id<DVETrackEventProtocol> eventTracker;
@property (nonatomic) BOOL hasEditedRange;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindViewModel;
- (void)dismissWithType:(unsigned long long)arg0;
- (void)topView:(id)arg0 didClickCancelButton:(id)arg1;
- (void)topView:(id)arg0 didClickApplyButton:(id)arg1;
- (BOOL)isSupportAudioEdit;
- (void)timelineDragging;
- (void)updateClipRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0 slot:(id)arg1;
- (void)trackSelectRangeEvent;
- (id)videoClipView;
- (void)p_refreshPlayerTimeRange:(struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })arg0;
- (void)updateCurrentPlayTime:(double)arg0;
- (void)p_updateContentOffsetWithTime:(double)arg0;
- (void)p_updateForcePlayFlag:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setHasEditedRange:(BOOL)arg0;
- (void)p_trackSaveRangeEvent;
- (BOOL)hasEditedRange;
- (void)setVideoClipView:(id)arg0;
- (BOOL)isPlayingBeforeTouch;
- (void)setIsPlayingBeforeTouch:(BOOL)arg0;
- (id)slotOfIndex:(long long)arg0;
- (void)saveEdit:(id /* block */)arg0;
- (id)initWithContext:(id)arg0;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (id)eventTracker;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)setupUI;
- (void)setupData;
- (void)setEventTracker:(id)arg0;

@end
