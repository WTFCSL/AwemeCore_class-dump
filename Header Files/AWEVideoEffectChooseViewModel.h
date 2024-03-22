//
//     Generated by private class-dump
//

@class AWEVideoImageGenerator, NSString, NSArray, UIImage, AWEVideoPublishViewModel, NSDictionary, AWEEffectDataManager, NSObject, IESMMEffectTimeRange;
@protocol ACCEditVideoDataProtocol, AWEVideoEffectChooseViewModelDelegate, ACCEditServiceProtocol;

@interface AWEVideoEffectChooseViewModel : NSObject <AWEVideoEffectMixTimeBarDelegate, AWEVideoEffectViewDelegate> {
    BOOL _isPlaying;
    BOOL _containLyricSticker;
    BOOL _shouldStartReverse;
    BOOL _isApplyingEffect;
    BOOL _isToolEffectLoading;
    id<AWEVideoEffectChooseViewModelDelegate> _delegate;
    id<ACCEditServiceProtocol> _editService;
    AWEVideoPublishViewModel *_publishViewModel;
    NSArray *_effectCategories;
    IESMMEffectTimeRange *_timeEffectTimeRange;
    double _timeEffectDefaultDuration;
    double _timeEffectDefaultBeginTime;
    double _previewBarWidth;
    NSObject<ACCEditVideoDataProtocol> *_originVideoData;
    NSArray *_originDisplayTimeRanges;
    NSString *_originalRangeIds;
    unsigned long long _currentEffectViewType;
    AWEEffectDataManager *_effectDataManager;
    double _lastPlayProgress;
    NSDictionary *_effectIdAndCategoryDict;
    NSDictionary *_effectIdAndColorDict;
    UIImage *_firstFrameImage;
    AWEVideoImageGenerator *_imageGenerator;
}

@property (retain, nonatomic) AWEEffectDataManager *effectDataManager;
@property (nonatomic) double lastPlayProgress;
@property (nonatomic) BOOL shouldStartReverse;
@property (copy, nonatomic) NSDictionary *effectIdAndCategoryDict;
@property (copy, nonatomic) NSDictionary *effectIdAndColorDict;
@property (nonatomic) BOOL isApplyingEffect;
@property (nonatomic) BOOL isToolEffectLoading;
@property (retain, nonatomic) UIImage *firstFrameImage;
@property (retain, nonatomic) AWEVideoImageGenerator *imageGenerator;
@property (weak, nonatomic) id<AWEVideoEffectChooseViewModelDelegate> delegate;
@property (retain, nonatomic) id<ACCEditServiceProtocol> editService;
@property (retain, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (copy, nonatomic) NSArray *effectCategories;
@property (retain, nonatomic) IESMMEffectTimeRange *timeEffectTimeRange;
@property (nonatomic) double timeEffectDefaultDuration;
@property (nonatomic) double timeEffectDefaultBeginTime;
@property (nonatomic) double previewBarWidth;
@property (retain, nonatomic) NSObject<ACCEditVideoDataProtocol> *originVideoData;
@property (copy, nonatomic) NSArray *originDisplayTimeRanges;
@property (copy, nonatomic) NSString *originalRangeIds;
@property (nonatomic) BOOL isPlaying;
@property (nonatomic) unsigned long long currentEffectViewType;
@property (nonatomic) BOOL containLyricSticker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)publishViewModel;
- (id /* block */)effectFilterPathBlock;
- (void)didClickCancelBtn;
- (id)editService;
- (void)setEditService:(id)arg0;
- (void)setFirstFrameImage:(id)arg0;
- (id)firstFrameImage;
- (void)setPublishViewModel:(id)arg0;
- (id)currentBindChallenges;
- (id)initWithModel:(id)arg0 editService:(id)arg1;
- (void)applyEffect:(id)arg0;
- (id)effectDataManager;
- (void)setEffectDataManager:(id)arg0;
- (id)allTimeEffects;
- (void)resetTimeForbiddenStyle;
- (id)timeEffectWithType:(long long)arg0;
- (id)timeEffectColorWithType:(long long)arg0;
- (id)timeEffectDescriptionWithType:(long long)arg0;
- (id)normalEffectWithID:(id)arg0;
- (id)builtinNormalEffects;
- (id)normalEffectPlatformModel;
- (void)configPlayerWithCompletionBlock:(id /* block */)arg0;
- (id)effectCategoryWithEffectId:(id)arg0;
- (void)setPreviewBarWidth:(double)arg0;
- (void)loadFirstPreviewFrameWithCompletion:(id /* block */)arg0;
- (id)effectCategories;
- (id)timeEffectTimeRange;
- (double)timeEffectDefaultBeginTime;
- (double)timeEffectDefaultDuration;
- (BOOL)p_isStickerCategory:(id)arg0;
- (BOOL)containLyricSticker;
- (void)mapEffectIdForCategoryAndColorDict;
- (BOOL)isRedPacketVideo;
- (void)clickedTabViewAtIndex:(long long)arg0;
- (void)setCurrentEffectViewType:(unsigned long long)arg0;
- (void)getBottomTabViewDataWithNetworkRequestBlock:(id /* block */)arg0 showCacheBlock:(id /* block */)arg1;
- (BOOL)isMultiSegPropVideo;
- (void)setEffectCategories:(id)arg0;
- (id)getStickerEffectIdInDisplayTimeRanges;
- (id)getRangeIdsFromTimeRangeArray:(id)arg0;
- (id)originalRangeIds;
- (void)didClickSaveBtn;
- (void)videoEffectView:(id)arg0 beginLongPressWithType:(id)arg1;
- (void)videoEffectView:(id)arg0 beingLongPressWithType:(id)arg1;
- (void)videoEffectView:(id)arg0 didFinishLongPressWithType:(id)arg1;
- (void)videoEffectView:(id)arg0 didClickedRevokeBtn:(id)arg1;
- (void)videoEffectView:(id)arg0 clickedCellWithTransitionEffect:(id)arg1;
- (void)videoEffectView:(id)arg0 didSelectToolEffect:(id)arg1;
- (void)videoEffectView:(id)arg0 didDeselectToolEffect:(id)arg1;
- (void)videoEffectView:(id)arg0 clickedCellWithTimeEffect:(id)arg1 showClickedStyle:(BOOL)arg2;
- (BOOL)checkEffectIsDownloaded:(id)arg0;
- (id)effectIdWithEffectType:(unsigned long long)arg0;
- (id)effectColorWithEffectId:(id)arg0;
- (void)userDidMoveTimeBarControl:(id)arg0 progress:(double)arg1;
- (void)userDidFinishMoveTimeBarControl:(id)arg0 progress:(double)arg1;
- (void)userDidFinishChangeRangeViewEffectRange:(double)arg0 rangeTo:(double)arg1 changeType:(long long)arg2 inTimeEffectView:(BOOL)arg3;
- (void)videoEffectView:(id)arg0 didCancelLongPressWithType:(id)arg1;
- (void)p_startApplyToolEffect:(id)arg0;
- (void)p_stopToolEffectLoadingIfNeeded;
- (void)setOriginVideoData:(id)arg0;
- (void)setOriginDisplayTimeRanges:(id)arg0;
- (id)originVideoData;
- (void)setOriginalRangeIds:(id)arg0;
- (void)setShouldStartReverse:(BOOL)arg0;
- (void)setTimeEffectDefaultBeginTime:(double)arg0;
- (void)setTimeEffectTimeRange:(id)arg0;
- (void)setTimeEffectDefaultDuration:(double)arg0;
- (void)setContainLyricSticker:(BOOL)arg0;
- (BOOL)shouldStartReverse;
- (void)syncEffectTimeRange;
- (void)clipMusic;
- (unsigned long long)currentEffectViewType;
- (double)lastPlayProgress;
- (BOOL)isToolEffectLoading;
- (void)p_didApplyToolEffectSticker:(id)arg0;
- (void)setIsApplyingEffect:(BOOL)arg0;
- (BOOL)isApplyingEffect;
- (void)setLastPlayProgress:(double)arg0;
- (void)syncEffectTimeRange:(id)arg0;
- (id)effectIdAndCategoryDict;
- (id)effectIdAndColorDict;
- (id)originDisplayTimeRanges;
- (id)enlargeImageSizeAndSquare:(id)arg0;
- (void)reloadPreviewFrames:(id /* block */)arg0;
- (double)previewBarWidth;
- (void)setIsToolEffectLoading:(BOOL)arg0;
- (void)p_applyToolEffectStickerTimeout:(id)arg0;
- (void)setEffectIdAndCategoryDict:(id)arg0;
- (void)setEffectIdAndColorDict:(id)arg0;
- (void).cxx_destruct;
- (id)delegate;
- (id)imageGenerator;
- (BOOL)isPlaying;
- (void)setDelegate:(id)arg0;
- (void)setIsPlaying:(BOOL)arg0;
- (void)setImageGenerator:(id)arg0;

@end
