//
//     Generated by private class-dump
//

@class AWEPLVAutoPlayTracker, NSString;

@interface AWEPLVAuoPlayCellController : AWEPadListReusableViewBaseController <AWEPLVFocusedCellControllerProtocol> {
    BOOL _videoPlayFinished;
    AWEPLVAutoPlayTracker *_tracker;
}

@property (nonatomic) BOOL videoPlayFinished;
@property (retain, nonatomic) AWEPLVAutoPlayTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)diffIdentifier;
- (id)commonTrackParams;
- (void)configView:(id)arg0;
- (void)viewDidDisplay;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionViewSize:(struct CGSize { double x0; double x1; })arg1 contentSize:(struct CGSize { double x0; double x1; })arg2;
- (struct CGSize { double x0; double x1; })viewSizeWithIndex:(long long)arg0 collectionView:(id)arg1;
- (long long)breakPointCardColumnNum;
- (BOOL)videoPlayFinished;
- (void)setVideoPlayFinished:(BOOL)arg0;
- (void)viewDidFocused;
- (void)viewDidUnFocused;
- (id)tracker;
- (void)setTracker:(id)arg0;
- (void).cxx_destruct;
- (Class)viewClass;

@end
