//
//     Generated by private class-dump
//

@class NLETrack_OC, NSString, DVESelectSegment, RACSignal, NLEModel_OC, NLETrackSlot_OC;
@protocol DVESelectedSegmentContextProtocol, DVEMediaContextNLEEditorDelegate, DVEMediaContextNLEInterfaceDelegate;

@protocol DVEEditingContextProtocol <NSObject>

@property (weak, nonatomic) id<DVEMediaContextNLEEditorDelegate> nleEditorDelegate;
@property (weak, nonatomic) id<DVEMediaContextNLEInterfaceDelegate> nleInterfaceDelegate;
@property (weak, nonatomic) id<DVESelectedSegmentContextProtocol> selectedContext;
@property (readonly, weak, nonatomic) NLEModel_OC *nleModel;
@property (retain, nonatomic) NLETrackSlot_OC *selectBlendVideoSegment;
@property (retain, nonatomic) NLETrackSlot_OC *selectMainVideoSegment;
@property (retain, nonatomic) NLETrackSlot_OC *selectAudioSegment;
@property (retain, nonatomic) DVESelectSegment *mappingTimelineVideoSegment;
@property (retain, nonatomic) NLETrackSlot_OC *mappingTimelineAudioSegment;
@property (retain, nonatomic) NLETrack_OC *currentAudioTrack;
@property (nonatomic) BOOL singleForRotate;
@property (nonatomic) BOOL disableMultiTrackViewVerticalScroll;
@property (nonatomic) unsigned long long alreadyLongTime;
@property (retain, nonatomic) NLETrackSlot_OC *recordSlotBeforePanel;
@property (copy, nonatomic) NSString *currentLockSegmentId;
@property (copy, nonatomic) NSString *changedTimeRangeSlot;
@property (copy, nonatomic) NSString *didReversedSlotID;
@property (nonatomic) BOOL inOrderVideoMode;
@property (nonatomic) BOOL isZooming;
@property (nonatomic) BOOL inPreview;
@property (nonatomic) BOOL lockSegmentForce;
@property (readonly, nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } safeOffsetTime;
@property (nonatomic) BOOL isRefreshWithoutDone;
@property (nonatomic) BOOL disableSelect;
@property (nonatomic) BOOL enableMainVideoLengthEdit;
@property (nonatomic) BOOL enableAudioLengthEdit;
@property (nonatomic) BOOL autoEnableMainSlotBorder;
@property (nonatomic) BOOL showRealOverlapTransitionInfo;
@property (nonatomic) struct { long long x0; int x1; unsigned int x2; long long x3; } currentTime;
@property (nonatomic) double timelineOffsetX;
@property (nonatomic) struct CGPoint { double x0; double x1; } targetContentOffset;
@property (nonatomic) unsigned long long multipleTrackType;
@property (nonatomic) double timeScale;
@property (readonly, nonatomic) RACSignal *editorDidChangeSignal;
@property (readonly, nonatomic) RACSignal *modelDidChangeSignal;
@property (readonly, nonatomic) RACSignal *audioDidChangeSignal;

- (id)nleModel;
- (void)setSelectMainVideoSegment:(id)arg0;
- (void)setSelectAudioSegment:(id)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })convertPointToCMTime:(struct CGPoint { double x0; double x1; })arg0;
- (double)widthPerSecond;
- (void)seekToCurrentTime:(id /* block */)arg0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })coordinateForSlot:(id)arg0;
- (void)notifyEditorChangedWithCommit:(BOOL)arg0;
- (void)notifyAudioChangedWithCommit:(BOOL)arg0;
- (double)contentOffsetOfSlot:(id)arg0;
- (double)contentWidthOfSlot:(id)arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })convertFrameToCMTimeRange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (double)rightMaxOffsetOfSlot:(id)arg0;
- (double)leftMaxOffsetOfSlot:(id)arg0;
- (void)setChangedTimeRangeSlot:(id)arg0;
- (void)updateCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)updateTargetOffsetWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (void)updateTargetOffsetWithTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0 completionHandler:(id /* block */)arg1;
- (void)lockSlotId:(id)arg0;
- (void)updateMappingTimelineVideoSlot;
- (void)updateMappingTimelineAudioSlot;
- (void)updateMappingTimelineVideoSlotForce:(BOOL)arg0;
- (void)updateMappingTimelineAudioSlotForce:(BOOL)arg0;
- (id)currentActiveVideoSlot;
- (id)currentActiveSlot;
- (id)currentMainVideoSlot;
- (id)currentMainVideoSlotWithAudio;
- (id)currentMainVideoSlotWithAudioFirst;
- (id)currentMainVideoSlotWithTimelineMapping;
- (id)currentBlendVideoSlot;
- (BOOL)isMainTrack:(id)arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })targetSlotTimeRangeForTransition:(id)arg0;
- (struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; })getSafePlayTimeRangeForSlot:(id)arg0;
- (id)nleEditorDelegate;
- (void)setNleEditorDelegate:(id)arg0;
- (id)nleInterfaceDelegate;
- (void)setNleInterfaceDelegate:(id)arg0;
- (id)selectBlendVideoSegment;
- (void)setSelectBlendVideoSegment:(id)arg0;
- (id)selectMainVideoSegment;
- (id)selectAudioSegment;
- (id)mappingTimelineVideoSegment;
- (void)setMappingTimelineVideoSegment:(id)arg0;
- (id)mappingTimelineAudioSegment;
- (void)setMappingTimelineAudioSegment:(id)arg0;
- (BOOL)singleForRotate;
- (void)setSingleForRotate:(BOOL)arg0;
- (BOOL)disableMultiTrackViewVerticalScroll;
- (void)setDisableMultiTrackViewVerticalScroll:(BOOL)arg0;
- (unsigned long long)alreadyLongTime;
- (void)setAlreadyLongTime:(unsigned long long)arg0;
- (id)recordSlotBeforePanel;
- (void)setRecordSlotBeforePanel:(id)arg0;
- (id)currentLockSegmentId;
- (void)setCurrentLockSegmentId:(id)arg0;
- (id)changedTimeRangeSlot;
- (id)didReversedSlotID;
- (void)setDidReversedSlotID:(id)arg0;
- (BOOL)inOrderVideoMode;
- (void)setInOrderVideoMode:(BOOL)arg0;
- (BOOL)inPreview;
- (void)setInPreview:(BOOL)arg0;
- (BOOL)lockSegmentForce;
- (void)setLockSegmentForce:(BOOL)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })safeOffsetTime;
- (BOOL)isRefreshWithoutDone;
- (void)setIsRefreshWithoutDone:(BOOL)arg0;
- (BOOL)disableSelect;
- (void)setDisableSelect:(BOOL)arg0;
- (BOOL)enableMainVideoLengthEdit;
- (void)setEnableMainVideoLengthEdit:(BOOL)arg0;
- (BOOL)enableAudioLengthEdit;
- (void)setEnableAudioLengthEdit:(BOOL)arg0;
- (BOOL)autoEnableMainSlotBorder;
- (void)setAutoEnableMainSlotBorder:(BOOL)arg0;
- (BOOL)showRealOverlapTransitionInfo;
- (void)setShowRealOverlapTransitionInfo:(BOOL)arg0;
- (double)timelineOffsetX;
- (void)setTimelineOffsetX:(double)arg0;
- (unsigned long long)multipleTrackType;
- (void)setMultipleTrackType:(unsigned long long)arg0;
- (id)editorDidChangeSignal;
- (id)modelDidChangeSignal;
- (id)audioDidChangeSignal;
- (id)selectedContext;
- (void)setTargetContentOffset:(struct CGPoint { double x0; double x1; })arg0;
- (void)setCurrentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg0;
- (struct CGPoint { double x0; double x1; })targetContentOffset;
- (void)setSelectedContext:(id)arg0;
- (double)timeScale;
- (double)contentWidth;
- (void)setTimeScale:(double)arg0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })duration;
- (void)setCurrentAudioTrack:(id)arg0;
- (id)currentAudioTrack;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (BOOL)isZooming;
- (void)setIsZooming:(BOOL)arg0;

@end