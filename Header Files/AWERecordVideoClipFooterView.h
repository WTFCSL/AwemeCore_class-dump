//
//     Generated by private class-dump
//

@class UIView, HTSVideoSpeedControl, AWESegmentedClipFooterPassThroughView, UIColor, CAShapeLayer, UIImageView, AWEVideoRangeSlider, CAGradientLayer, UICollectionView, UILabel, ACCAnimatedButton;

@interface AWERecordVideoClipFooterView : UIView {
    BOOL _isSegmentedClipsOpen;
    BOOL _deleteButtonEnabled;
    BOOL _isNeedSegment;
    BOOL _clipEditEnabled;
    BOOL _isInSingleSegmentEditing;
    ACCAnimatedButton *_deleteButton;
    ACCAnimatedButton *_rotateButton;
    ACCAnimatedButton *_speedControlButton;
    ACCAnimatedButton *_reshootButton;
    ACCAnimatedButton *_aniCloseButton;
    ACCAnimatedButton *_aniOkButton;
    HTSVideoSpeedControl *_speedControl;
    UIImageView *_cursorView;
    UICollectionView *_framesCollectionView;
    AWESegmentedClipFooterPassThroughView *_framesCollectionLeftMaskView;
    AWESegmentedClipFooterPassThroughView *_framesCollectionRightMaskView;
    UICollectionView *_videosCollectionView;
    AWEVideoRangeSlider *_videoRangeSlider;
    unsigned long long _currentVideoIndex;
    UIColor *_panelColor;
    UIView *_animationBgView;
    UIView *_bottomMaskView;
    UILabel *_hintLabel;
    UILabel *_singleClipLabel;
    CAShapeLayer *_cornerLayer;
    CAGradientLayer *_gradientLayer;
    struct CGSize { double width; double height; } _normalItemSize;
    struct CGSize { double width; double height; } _coverItemSize;
}

@property (retain, nonatomic) UIView *animationBgView;
@property (retain, nonatomic) UIView *bottomMaskView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *singleClipLabel;
@property (nonatomic) BOOL isNeedSegment;
@property (nonatomic) BOOL clipEditEnabled;
@property (nonatomic) BOOL isInSingleSegmentEditing;
@property (retain, nonatomic) CAShapeLayer *cornerLayer;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) ACCAnimatedButton *deleteButton;
@property (retain, nonatomic) ACCAnimatedButton *rotateButton;
@property (retain, nonatomic) ACCAnimatedButton *speedControlButton;
@property (retain, nonatomic) ACCAnimatedButton *reshootButton;
@property (retain, nonatomic) ACCAnimatedButton *aniCloseButton;
@property (retain, nonatomic) ACCAnimatedButton *aniOkButton;
@property (retain, nonatomic) HTSVideoSpeedControl *speedControl;
@property (retain, nonatomic) UIImageView *cursorView;
@property (nonatomic) struct CGSize { double width; double height; } normalItemSize;
@property (nonatomic) struct CGSize { double width; double height; } coverItemSize;
@property (retain, nonatomic) UICollectionView *framesCollectionView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionLeftMaskView;
@property (retain, nonatomic) AWESegmentedClipFooterPassThroughView *framesCollectionRightMaskView;
@property (retain, nonatomic) UICollectionView *videosCollectionView;
@property (nonatomic) BOOL isSegmentedClipsOpen;
@property (retain, nonatomic) AWEVideoRangeSlider *videoRangeSlider;
@property (nonatomic) unsigned long long currentVideoIndex;
@property (retain, nonatomic) UIColor *panelColor;
@property (nonatomic) BOOL deleteButtonEnabled;

- (void)buildViews;
- (id)cursorView;
- (void)setCursorView:(id)arg0;
- (unsigned long long)currentVideoIndex;
- (void)setCurrentVideoIndex:(unsigned long long)arg0;
- (id)bottomMaskView;
- (void)setBottomMaskView:(id)arg0;
- (double)currentPanelHeight;
- (id)cornerLayer;
- (void)setCornerLayer:(id)arg0;
- (void)setNormalItemSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setIsNeedSegment:(BOOL)arg0;
- (id)framesCollectionView;
- (id)videoRangeSlider;
- (id)framesCollectionLeftMaskView;
- (id)framesCollectionRightMaskView;
- (id)speedControl;
- (id)aniOkButton;
- (id)aniCloseButton;
- (BOOL)isNeedSegment;
- (void)setAniCloseButton:(id)arg0;
- (void)setAniOkButton:(id)arg0;
- (struct CGSize { double x0; double x1; })normalItemSize;
- (struct CGSize { double x0; double x1; })coverItemSize;
- (void)setCoverItemSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setFramesCollectionView:(id)arg0;
- (void)setFramesCollectionLeftMaskView:(id)arg0;
- (void)setFramesCollectionRightMaskView:(id)arg0;
- (void)setVideoRangeSlider:(id)arg0;
- (void)setSpeedControl:(id)arg0;
- (id)videosCollectionView;
- (void)setVideosCollectionView:(id)arg0;
- (void)segmentedClipsEndAnimationWithCompletion:(id /* block */)arg0;
- (BOOL)shouldContinueProceedure;
- (void)segmentedClipsStartAnimationWithCell:(id)arg0;
- (BOOL)isInSingleSegmentEditing;
- (BOOL)isInVideoSegmentsEditing;
- (id)speedControlButton;
- (double)framesCellHeight;
- (void)setClipEditEnabled:(BOOL)arg0;
- (void)setIsInSingleSegmentEditing:(BOOL)arg0;
- (void)setDeleteButtonEnabled:(BOOL)arg0;
- (void)setupRightTopViewsFrameForSingleMode;
- (void)updateMaskView;
- (double)hintLabelHeight;
- (id)panelColor;
- (id)animationBgView;
- (id)reshootButton;
- (BOOL)clipEditEnabled;
- (void)updateUIForXSCreenAdapt;
- (BOOL)deleteButtonEnabled;
- (id)singleClipLabel;
- (void)setupRightTopViewsFrameForSegment;
- (void)updateDeleteButton;
- (void)setupRightTopViewsFrameForTotal;
- (id)initWithNeedSegment:(BOOL)arg0 clipEditEnabled:(BOOL)arg1;
- (void)segmentedClipsEndAnimation;
- (void)configEditShowStatus:(BOOL)arg0;
- (void)setSpeedControlButton:(id)arg0;
- (void)setReshootButton:(id)arg0;
- (BOOL)isSegmentedClipsOpen;
- (void)setIsSegmentedClipsOpen:(BOOL)arg0;
- (void)setPanelColor:(id)arg0;
- (void)setAnimationBgView:(id)arg0;
- (void)setSingleClipLabel:(id)arg0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;
- (void)setDeleteButton:(id)arg0;
- (id)gradientLayer;
- (void).cxx_destruct;
- (id)deleteButton;
- (void)layoutSubviews;
- (void)setGradientLayer:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (id)rotateButton;
- (void)setRotateButton:(id)arg0;

@end