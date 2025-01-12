//
//     Generated by private class-dump
//

@class NSString, IESLiveCountTimer, UIView;
@protocol IESLiveAvatarBorderItem, IESLiveWebPPlayer, IESLiveAnimatedImageEffectResourceDelegate;

@interface IESLiveAnimatedImageView : UIView <IESLiveAvatarBorderContainer, IESLiveAnimatedImageViewAdapter> {
    BOOL _autoPlayAnimatedImage;
    BOOL _enableOptimizeDisplayLink;
    BOOL _isPreloadAllFrames;
    BOOL _isSyncUpdateImage;
    BOOL _hasFlip;
    double _loopInterval;
    double _delay;
    unsigned long long _loopCount;
    id /* block */ _loopCompletionBlock;
    id<IESLiveAnimatedImageEffectResourceDelegate> _effectReourceDelegate;
    UIView<IESLiveWebPPlayer> *_webPPlayerView;
    IESLiveCountTimer *_timer;
}

@property (retain, nonatomic) id<IESLiveAvatarBorderItem> borderItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView<IESLiveWebPPlayer> *webPPlayerView;
@property (retain, nonatomic) IESLiveCountTimer *timer;
@property (nonatomic) BOOL hasFlip;
@property (nonatomic) double loopInterval;
@property (nonatomic) double delay;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL enableOptimizeDisplayLink;
@property (nonatomic) BOOL isPreloadAllFrames;
@property (nonatomic) BOOL isSyncUpdateImage;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;
@property (weak, nonatomic) id<IESLiveAnimatedImageEffectResourceDelegate> effectReourceDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setFlip:(BOOL)arg0;
- (id)borderItem;
- (void)setBorderItem:(id)arg0;
- (void)didUpdatedBorderURLs:(id)arg0;
- (void)setAutoPlayAnimatedImage:(BOOL)arg0;
- (void)setCacheAllFrame:(BOOL)arg0;
- (id /* block */)loopCompletionBlock;
- (BOOL)autoPlayAnimatedImage;
- (void)setLoopCompletionBlock:(id /* block */)arg0;
- (void)loadImageWithURL:(id)arg0 complete:(id /* block */)arg1;
- (void)loadImageWithImage:(id)arg0;
- (void)stopWebPAnimation;
- (double)loopInterval;
- (void)setLoopInterval:(double)arg0;
- (void)stopWebPAnimating;
- (id)webPPlayerView;
- (void)loadImageWithURLs:(id)arg0 completion:(id /* block */)arg1;
- (void)p_setImage:(id)arg0;
- (void)loadImageWithURLs:(id)arg0 placeholderImage:(id)arg1 fallbackImage:(id)arg2 completion:(id /* block */)arg3;
- (BOOL)hasFlip;
- (void)setHasFlip:(BOOL)arg0;
- (void)p_prepareAnimating;
- (void)p_startAnimating;
- (void)loadImageWithData:(id)arg0;
- (void)clearlCurrentImage;
- (BOOL)enableOptimizeDisplayLink;
- (void)setEnableOptimizeDisplayLink:(BOOL)arg0;
- (BOOL)isPreloadAllFrames;
- (void)setIsPreloadAllFrames:(BOOL)arg0;
- (void)setWebPPlayerView:(id)arg0;
- (void)loadWebpWithName:(id)arg0;
- (void)loadImageWithURLs:(id)arg0;
- (void)loadImageWithURLs:(id)arg0 options:(unsigned long long)arg1 placeholderImage:(id)arg2 fallbackImage:(id)arg3 complete:(id /* block */)arg4;
- (void)loadImageWithURLs:(id)arg0 options:(unsigned long long)arg1 placeholderImage:(id)arg2 fallbackImage:(id)arg3 completion:(id /* block */)arg4;
- (id)p_decoderFromData:(id)arg0;
- (id)p_setAnimatedImage:(id)arg0;
- (id)p_webPDecoderWithEffectID:(unsigned long long)arg0;
- (id)effectReourceDelegate;
- (BOOL)isSyncUpdateImage;
- (void)loadImageWithAssetID:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)loadImageWithDecoder:(id)arg0;
- (void)setWebPPlayerViewInfinityLoopWithSetting:(BOOL)arg0;
- (void)setIsSyncUpdateImage:(BOOL)arg0;
- (void)setEffectReourceDelegate:(id)arg0;
- (id)timer;
- (void)setDelay:(double)arg0;
- (void).cxx_destruct;
- (double)delay;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (void)setTimer:(id)arg0;
- (void)dealloc;
- (void)startAnimation;
- (void)stopAnimation;
- (void)setupUI;
- (unsigned long long)loopCount;
- (void)loadImageWithURL:(id)arg0 completion:(id /* block */)arg1;
- (void)setLoopCount:(unsigned long long)arg0;

@end
