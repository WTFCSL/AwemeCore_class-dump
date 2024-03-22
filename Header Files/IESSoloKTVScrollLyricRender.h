//
//     Generated by private class-dump
//

@class NSMutableDictionary, IESSCMetalRenderParams, IESLiveGCDTimer, IESLiveLyricViewConfig, NSObject, IESLiveKTVLyricViewWordResultModel, NSMutableArray, IESLiveKRCSong, IESSCMetalTransformFilter, IESSoloKTVDrawCGImpl, IESSCMetalBottomMaskFilter, IESSCMetalConcatFilter, IESSCMetalImage, NSCache;
@protocol OS_dispatch_queue;

@interface IESSoloKTVScrollLyricRender : NSObject {
    BOOL _enableBlend;
    BOOL _enableSelected;
    BOOL _isAnimateDragging;
    BOOL _selectedChanged;
    float _fps;
    int _singingLine;
    int _wordImageRow;
    int _selectedLine;
    int _preSingingLine;
    float _animationDuration;
    float _maxCapacity;
    float _focusHeightPercent;
    id /* block */ _offsetYCallback;
    id /* block */ _onCountDownCallback;
    id /* block */ _scrollAnimationDidStopCallback;
    IESSoloKTVDrawCGImpl *_asyncDraw;
    NSMutableArray *_cellData;
    IESLiveLyricViewConfig *_config;
    IESLiveKRCSong *_krcSong;
    double _playingTime;
    IESLiveKTVLyricViewWordResultModel *_preResult;
    double _draggingEndTS;
    double _contentOffsetY;
    NSObject<OS_dispatch_queue> *_queue;
    IESLiveGCDTimer *_dragTimer;
    double _pauseUpdatePlayingTime;
    double _showCountDownTime;
    double _lyricStartTime;
    double _lyricEndTime;
    IESSCMetalImage *_focusBGImage;
    IESSCMetalImage *_focusFGImage;
    IESSCMetalImage *_focusTargetImage;
    NSCache *_rowImageCache;
    IESSCMetalRenderParams *_renderParams;
    NSMutableDictionary *_wordWidthCache;
    double _preResultOffsetY;
    IESSCMetalImage *_preResultImage;
    double _preWordProgress;
    double _preFocusScale;
    double _screenScale;
    NSMutableArray *_lyricDrawData;
    NSMutableArray *_lyricAnimationData;
    NSMutableArray *_restoreAnimationData;
    IESSCMetalTransformFilter *_transformFilter;
    IESSCMetalConcatFilter *_concatFilter;
    IESSCMetalBottomMaskFilter *_maskFilter;
    struct CGSize { double width; double height; } _viewSize;
    struct CGSize { double width; double height; } _contentSize;
    struct _NSRange { unsigned long long location; unsigned long long length; } _selectedRange;
}

@property (retain, nonatomic) IESSoloKTVDrawCGImpl *asyncDraw;
@property (retain, nonatomic) NSMutableArray *cellData;
@property (retain, nonatomic) IESLiveLyricViewConfig *config;
@property (retain, nonatomic) IESLiveKRCSong *krcSong;
@property (nonatomic) double playingTime;
@property (retain, nonatomic) IESLiveKTVLyricViewWordResultModel *preResult;
@property (nonatomic) int singingLine;
@property (nonatomic) BOOL isAnimateDragging;
@property (nonatomic) double draggingEndTS;
@property (nonatomic) double contentOffsetY;
@property (nonatomic) struct CGSize { double width; double height; } contentSize;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (retain, nonatomic) IESLiveGCDTimer *dragTimer;
@property (nonatomic) int wordImageRow;
@property (nonatomic) int selectedLine;
@property (nonatomic) double pauseUpdatePlayingTime;
@property (nonatomic) double showCountDownTime;
@property (nonatomic) double lyricStartTime;
@property (nonatomic) double lyricEndTime;
@property (retain, nonatomic) IESSCMetalImage *focusBGImage;
@property (retain, nonatomic) IESSCMetalImage *focusFGImage;
@property (retain, nonatomic) IESSCMetalImage *focusTargetImage;
@property (retain, nonatomic) NSCache *rowImageCache;
@property (retain, nonatomic) IESSCMetalRenderParams *renderParams;
@property (retain, nonatomic) NSMutableDictionary *wordWidthCache;
@property (nonatomic) double preResultOffsetY;
@property (retain, nonatomic) IESSCMetalImage *preResultImage;
@property (nonatomic) int preSingingLine;
@property (nonatomic) double preWordProgress;
@property (nonatomic) double preFocusScale;
@property (nonatomic) double screenScale;
@property (retain, nonatomic) NSMutableArray *lyricDrawData;
@property (retain, nonatomic) NSMutableArray *lyricAnimationData;
@property (retain, nonatomic) NSMutableArray *restoreAnimationData;
@property (retain, nonatomic) IESSCMetalTransformFilter *transformFilter;
@property (retain, nonatomic) IESSCMetalConcatFilter *concatFilter;
@property (retain, nonatomic) IESSCMetalBottomMaskFilter *maskFilter;
@property (nonatomic) float animationDuration;
@property (nonatomic) float maxCapacity;
@property (nonatomic) float focusHeightPercent;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } selectedRange;
@property (nonatomic) BOOL selectedChanged;
@property (nonatomic) float fps;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) BOOL enableBlend;
@property (nonatomic) BOOL enableSelected;
@property (copy, nonatomic) id /* block */ offsetYCallback;
@property (copy, nonatomic) id /* block */ onCountDownCallback;
@property (copy, nonatomic) id /* block */ scrollAnimationDidStopCallback;

- (void)updateConfig:(id)arg0;
- (double)contentOffsetY;
- (void)setContentOffsetY:(double)arg0;
- (void)scrollViewDidEndDragging:(BOOL)arg0;
- (double)playingTime;
- (void)setPlayingTime:(double)arg0;
- (BOOL)enableBlend;
- (void)setEnableBlend:(BOOL)arg0;
- (void)setTransformFilter:(id)arg0;
- (id)transformFilter;
- (void)scrollViewWillBeginDragging;
- (void)scrollViewDidEndDecelerating;
- (void)setSelectedLine:(int)arg0;
- (int)selectedLine;
- (id)dragTimer;
- (void)setDragTimer:(id)arg0;
- (void)setSelectedChanged:(BOOL)arg0;
- (BOOL)selectedChanged;
- (id)wordWidthCache;
- (void)setWordWidthCache:(id)arg0;
- (void)setKrcSong:(id)arg0;
- (BOOL)isOverViewWidth:(id)arg0;
- (void)updatePlayingTime:(double)arg0;
- (id)krcSong;
- (int)singingLine;
- (id)preResult;
- (void)setPreResult:(id)arg0;
- (void)scrollToWord:(id)arg0;
- (BOOL)isAnimateDragging;
- (void)setIsAnimateDragging:(BOOL)arg0;
- (void)setSingingLine:(int)arg0;
- (void)setAsyncDraw:(id)arg0;
- (id)asyncDraw;
- (void)pausePlayingTimeUtil:(double)arg0 currentTime:(double)arg1;
- (double)timeToOffsetY:(double)arg0;
- (double)offsetYToTime:(double)arg0;
- (int)offsetYToRow:(double)arg0;
- (id)sentenceAtRow:(int)arg0;
- (void)updateSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (id)originSentenceAtRow:(int)arg0;
- (int)offsetYToOriginRow:(double)arg0;
- (void)setLyricDrawData:(id)arg0;
- (void)setLyricAnimationData:(id)arg0;
- (void)setRestoreAnimationData:(id)arg0;
- (void)setPauseUpdatePlayingTime:(double)arg0;
- (void)setPreWordProgress:(double)arg0;
- (void)generateSentenceInfo:(id)arg0 isEmplace:(BOOL)arg1;
- (void)setPreResultImage:(id)arg0;
- (void)showNoLyrics;
- (void)setShowCountDownTime:(double)arg0;
- (void)setLyricStartTime:(double)arg0;
- (void)setLyricEndTime:(double)arg0;
- (double)pauseUpdatePlayingTime;
- (void)privateUpdatePlayingTime:(double)arg0;
- (double)showCountDownTime;
- (id /* block */)onCountDownCallback;
- (id)lyricDrawData;
- (double)lyricStartTime;
- (double)lyricEndTime;
- (void)animationGoToEnd;
- (void)animationAction:(double)arg0;
- (double)preWordProgress;
- (id)preResultImage;
- (id)rowImageCache;
- (id)drawTextWithSize:(struct CGSize { double x0; double x1; })arg0 text:(id)arg1 attributes:(id)arg2 leftOffset:(double)arg3;
- (void)lazyDrawSingingLineImage:(int)arg0;
- (id)focusBGImage;
- (id)focusFGImage;
- (id)focusTargetImage;
- (void)concatImage:(id)arg0 leftImage:(id)arg1 rightImage:(id)arg2 concatWidth:(float)arg3;
- (id)drawTextWithSize:(struct CGSize { double x0; double x1; })arg0 text:(id)arg1 sColor:(id)arg2 eColor:(id)arg3 leftOffset:(double)arg4;
- (void)setFocusFGImage:(id)arg0;
- (void)setFocusBGImage:(id)arg0;
- (void)setFocusTargetImage:(id)arg0;
- (BOOL)isInImageDataRange:(int)arg0;
- (void)updateProgress:(double)arg0 wordRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg1 index:(int)arg2;
- (id)lyricAnimationData;
- (id)restoreAnimationData;
- (id)concatFilter;
- (id)renderParams;
- (void)updateLyrics:(id)arg0 completion:(id /* block */)arg1;
- (void)generateSentenceInfo;
- (id)getImageTexture;
- (void)setOnCountDownCallback:(id /* block */)arg0;
- (void)setRowImageCache:(id)arg0;
- (void)setRenderParams:(id)arg0;
- (void)setConcatFilter:(id)arg0;
- (void)setEnableSelected:(BOOL)arg0;
- (void)setWordImageRow:(int)arg0;
- (void)setPreResultOffsetY:(double)arg0;
- (void)setFocusHeightPercent:(float)arg0;
- (void)setPreSingingLine:(int)arg0;
- (void)setPreFocusScale:(double)arg0;
- (double)preResultOffsetY;
- (int)preSingingLine;
- (void)drawLyricImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 imageSize:(struct CGSize { double x0; double x1; })arg2 start:(int)arg3 end:(int)arg4 topOffset:(double)arg5;
- (id)drawMaskImage:(id)arg0 size:(struct CGSize { double x0; double x1; })arg1 bottomHeight:(double)arg2;
- (int)findFocusLine:(int)arg0 endRow:(int)arg1;
- (double)preFocusScale;
- (float)focusHeightPercent;
- (void)drawFocusLyricImage:(int)arg0 size:(struct CGSize { double x0; double x1; })arg1 focusRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 imageSize:(struct CGSize { double x0; double x1; })arg3 targetImage:(id)arg4;
- (void)drawNormalLyricImage:(int)arg0 size:(struct CGSize { double x0; double x1; })arg1 imageRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg2 imageSize:(struct CGSize { double x0; double x1; })arg3 targetImage:(id)arg4;
- (void)renderImage:(id)arg0 transform:(struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })arg1 targetImage:(id)arg2 params:(id)arg3;
- (BOOL)enableSelected;
- (int)wordImageRow;
- (void)alphaMaskImage:(id)arg0 inputImage:(id)arg1 bottomHeight:(double)arg2 height:(double)arg3 startAlpha:(double)arg4 endAlpha:(double)arg5;
- (void)addScaleAnimationToImage:(int)arg0 startScale:(double)arg1 endScale:(double)arg2 duration:(double)arg3;
- (void)scrollToSingingLine:(long long)arg0 animated:(BOOL)arg1 completion:(id /* block */)arg2;
- (id /* block */)scrollAnimationDidStopCallback;
- (void)addTranslateAnimationToImage:(int)arg0 startY:(double)arg1 endY:(double)arg2 duration:(double)arg3;
- (id /* block */)offsetYCallback;
- (void)animationScaleUpdate:(id)arg0 scale:(double)arg1 isAdd:(BOOL)arg2;
- (void)animationTranslationUpdate:(id)arg0 y:(double)arg1 isAdd:(BOOL)arg2;
- (void)stopDragTimerIfNeed;
- (void)startDragTimer:(double)arg0;
- (void)setDraggingEndTS:(double)arg0;
- (void)scrollToSingingLineFromTimerEnd;
- (int)timeToRow:(double)arg0;
- (id)maskFilter;
- (void)setOffsetYCallback:(id /* block */)arg0;
- (void)setScrollAnimationDidStopCallback:(id /* block */)arg0;
- (double)draggingEndTS;
- (void)setMaskFilter:(id)arg0;
- (double)screenScale;
- (struct CGSize { double x0; double x1; })contentSize;
- (BOOL)hasLyrics;
- (id)init;
- (void)setConfig:(id)arg0;
- (void).cxx_destruct;
- (float)animationDuration;
- (void)setContentSize:(struct CGSize { double x0; double x1; })arg0;
- (id)config;
- (void)scrollViewDidScroll:(double)arg0;
- (void)setAnimationDuration:(float)arg0;
- (struct CGSize { double x0; double x1; })viewSize;
- (void)setScreenScale:(double)arg0;
- (void)setMaxCapacity:(float)arg0;
- (id)queue;
- (float)fps;
- (void)dealloc;
- (void)setQueue:(id)arg0;
- (void)setSelectedRange:(struct _NSRange { unsigned long long x0; unsigned long long x1; })arg0;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })selectedRange;
- (float)maxCapacity;
- (void)setViewSize:(struct CGSize { double x0; double x1; })arg0;
- (void)setFps:(float)arg0;
- (void)setCellData:(id)arg0;
- (void)initData;
- (id)cellData;
- (void)didEndDragging;
- (void)clean;
- (void)updateCellData:(id)arg0;

@end