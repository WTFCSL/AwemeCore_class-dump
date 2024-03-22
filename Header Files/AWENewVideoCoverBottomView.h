//
//     Generated by private class-dump
//

@class AWEVideoImageGenerator, UIImageView, NSNumberFormatter, AWENewVideoCoverImageSliderPreviewView, UILabel, UICollectionView, UIImpactFeedbackGenerator, NSMutableArray, UIView, AWENewVideoCoverImageSliderView, NSString, AWEVideoPublishViewModel, NSNumber, AWENewVideoCoverImageSelectGalleryView, NSArray, UIImage;
@protocol AWENewVideoCoverBottomViewDelegate, ACCEditServiceProtocol;

@interface AWENewVideoCoverBottomView : UIView <AWENewVideoCoverImageSliderViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource> {
    BOOL _isReedit;
    BOOL _didChangePercent;
    AWEVideoPublishViewModel *_publishModel;
    id<AWENewVideoCoverBottomViewDelegate> _delegate;
    double _currentTime;
    AWENewVideoCoverImageSliderView *_sliderView;
    UILabel *_hintLabel;
    UILabel *_recommendHintLabel;
    UILabel *_selectHintLabel;
    AWENewVideoCoverImageSelectGalleryView *_selectGalleryView;
    AWENewVideoCoverImageSliderPreviewView *_previewGalleryImageView;
    UIImageView *_previewGalleryCancelImageView;
    UICollectionView *_recommendImageCollectionView;
    NSMutableArray *_whitePointViewArray;
    UIImage *_firstFrameImage;
    NSNumber *_totalVideoDuration;
    double _dynamicCoverStartTimePercent;
    NSNumberFormatter *_numberFormatter;
    id<ACCEditServiceProtocol> _editService;
    double _fontScale;
    AWEVideoImageGenerator *_imageGenerator;
    NSArray *_imageGeneratorBeats;
    UIImpactFeedbackGenerator *_feedbackGenerator;
}

@property (retain, nonatomic) AWENewVideoCoverImageSliderView *sliderView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *recommendHintLabel;
@property (retain, nonatomic) UILabel *selectHintLabel;
@property (nonatomic) BOOL didChangePercent;
@property (retain, nonatomic) AWENewVideoCoverImageSelectGalleryView *selectGalleryView;
@property (retain, nonatomic) AWENewVideoCoverImageSliderPreviewView *previewGalleryImageView;
@property (retain, nonatomic) UIImageView *previewGalleryCancelImageView;
@property (retain, nonatomic) UICollectionView *recommendImageCollectionView;
@property (retain, nonatomic) NSMutableArray *whitePointViewArray;
@property (retain, nonatomic) UIImage *firstFrameImage;
@property (retain, nonatomic) NSNumber *totalVideoDuration;
@property (nonatomic) double dynamicCoverStartTimePercent;
@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (nonatomic) double fontScale;
@property (retain, nonatomic) AWEVideoImageGenerator *imageGenerator;
@property (copy, nonatomic) NSArray *imageGeneratorBeats;
@property (retain, nonatomic) UIImpactFeedbackGenerator *feedbackGenerator;
@property (weak, nonatomic) id<AWENewVideoCoverBottomViewDelegate> delegate;
@property (readonly, nonatomic) UIView *controlContentView;
@property (nonatomic) BOOL isReedit;
@property (nonatomic) double currentTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)selectHintLabel;
- (void)setSelectHintLabel:(id)arg0;
- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (BOOL)isReedit;
- (id)totalVideoDuration;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setFirstFrameImage:(id)arg0;
- (id)firstFrameImage;
- (void)setIsReedit:(BOOL)arg0;
- (id)p_commonTrackParams;
- (void)p_configSubViews;
- (id)controlContentView;
- (double)dynamicCoverStartTimePercent;
- (void)p_reloadPreviewFrames:(id /* block */)arg0;
- (void)p_loadFirstPreviewFrameWithCompletion:(id /* block */)arg0;
- (void)p_trackCoverClick;
- (void)coverImageSliderView:(id)arg0 touchBegin:(double)arg1;
- (void)coverImageSliderView:(id)arg0 touchMoved:(double)arg1;
- (void)coverImageSliderView:(id)arg0 touchEnd:(double)arg1;
- (void)sliderViewShowImages;
- (void)setTotalVideoDuration:(id)arg0;
- (BOOL)expandMode;
- (BOOL)hasRecommendedTimestamp;
- (id)generateAWhitePointView;
- (id)whitePointViewArray;
- (double)topRecommendedTimePercent;
- (id)recommendImageCollectionView;
- (id)recommendHintLabel;
- (void)trackRecommendPicShow;
- (void)setCenterXPercent:(double)arg0;
- (BOOL)p_updateRecommendTitleLabelUI:(double)arg0;
- (id)previewGalleryImageView;
- (id)previewGalleryCancelImageView;
- (id)selectGalleryView;
- (void)hideWhitePointViews;
- (void)arrangeWhitePoints;
- (id)imageGeneratorBeats;
- (void)chooseGalleryAction;
- (void)cancelPreviewGalleryImage;
- (double)topRecommendedTimestamp;
- (void)showWhitePointViews;
- (BOOL)didChangePercent;
- (BOOL)enableReeditUseNewCover;
- (void)showGalleryWithImage:(id)arg0;
- (void)trackConfirmChooseGallery;
- (void)trackChooseGallery;
- (void)setDidChangePercent:(BOOL)arg0;
- (void)tryFindAttachRecommendCoverInfoWithPercent:(double)arg0;
- (void)resetRecommendImageCollectionView;
- (double)attachTimePercentWithPercent:(double)arg0;
- (id)initWithPublishModel:(id)arg0 editService:(id)arg1 fontScale:(double)arg2;
- (BOOL)currentIsRecommendFrame;
- (BOOL)currentIsShowGalleryImage;
- (void)setRecommendHintLabel:(id)arg0;
- (void)setSelectGalleryView:(id)arg0;
- (void)setPreviewGalleryImageView:(id)arg0;
- (void)setPreviewGalleryCancelImageView:(id)arg0;
- (void)setRecommendImageCollectionView:(id)arg0;
- (void)setWhitePointViewArray:(id)arg0;
- (void)setDynamicCoverStartTimePercent:(double)arg0;
- (void)setImageGeneratorBeats:(id)arg0;
- (void)setNumberFormatter:(id)arg0;
- (id)sliderView;
- (void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1;
- (id)feedbackGenerator;
- (void)setFeedbackGenerator:(id)arg0;
- (long long)collectionView:(id)arg0 numberOfItemsInSection:(long long)arg1;
- (void).cxx_destruct;
- (id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1;
- (void)setCurrentTime:(double)arg0;
- (id)delegate;
- (void)setSliderView:(id)arg0;
- (id)imageGenerator;
- (id)numberFormatter;
- (double)currentTime;
- (void)setDelegate:(id)arg0;
- (void)setImageGenerator:(id)arg0;
- (id)hintLabel;
- (void)setHintLabel:(id)arg0;
- (double)fontScale;
- (void)setFontScale:(double)arg0;
- (double)viewHeight;

@end
