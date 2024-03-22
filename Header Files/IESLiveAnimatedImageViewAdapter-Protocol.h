//
//     Generated by private class-dump
//

@protocol IESLiveAnimatedImageViewAdapter <NSObject>

@property (nonatomic) double loopInterval;
@property (nonatomic) double delay;
@property (nonatomic) BOOL autoPlayAnimatedImage;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL enableOptimizeDisplayLink;
@property (nonatomic) BOOL isPreloadAllFrames;
@property (copy, nonatomic) id /* block */ loopCompletionBlock;

@optional

- (void)setAutoPlayAnimatedImage:(BOOL)arg0;
- (id /* block */)loopCompletionBlock;
- (BOOL)autoPlayAnimatedImage;
- (void)setLoopCompletionBlock:(id /* block */)arg0;
- (void)loadImageWithURL:(id)arg0 complete:(id /* block */)arg1;
- (void)loadImageWithImage:(id)arg0;
- (void)stopWebPAnimation;
- (double)loopInterval;
- (void)setLoopInterval:(double)arg0;
- (void)stopWebPAnimating;
- (void)loadImageWithURLs:(id)arg0 completion:(id /* block */)arg1;
- (void)loadImageWithData:(id)arg0;
- (void)clearlCurrentImage;
- (BOOL)enableOptimizeDisplayLink;
- (void)setEnableOptimizeDisplayLink:(BOOL)arg0;
- (BOOL)isPreloadAllFrames;
- (void)setIsPreloadAllFrames:(BOOL)arg0;
- (void)loadWebpWithName:(id)arg0;
- (void)loadImageWithURLs:(id)arg0;
- (void)loadImageWithAssetID:(unsigned long long)arg0 completion:(id /* block */)arg1;
- (void)setDelay:(double)arg0;
- (double)delay;
- (void)startAnimation;
- (void)stopAnimation;
- (unsigned long long)loopCount;
- (void)loadImageWithURL:(id)arg0 completion:(id /* block */)arg1;
- (void)setLoopCount:(unsigned long long)arg0;

@end