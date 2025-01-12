//
//     Generated by private class-dump
//

@class ACCAdvanceEditMainTrackView, AWEVideoPublishViewModel;

@interface ACCTrimFrameTrackEditComponent : ACCTrimCropBaseComponent {
    AWEVideoPublishViewModel *_publishViewModel;
    ACCAdvanceEditMainTrackView *_mainTrackView;
}

@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (retain, nonatomic) ACCAdvanceEditMainTrackView *mainTrackView;

- (id)publishViewModel;
- (void)componentDidLoad;
- (void)componentDidAppear;
- (void)componentWillDisappear;
- (void)componentWillAppear;
- (void)componentDidDisappear;
- (id)serviceBinding;
- (void)setPublishViewModel:(id)arg0;
- (id)mainTrackView;
- (void)setMainTrackView:(id)arg0;
- (void)setupFrameUI;
- (BOOL)mainTrackNeedExtend;
- (void).cxx_destruct;

@end
