//
//     Generated by private class-dump
//

@class NSArray, UIImageView, NSString;

@interface AWEMusicImageSetAnimationView : UIView <CAAnimationDelegate> {
    BOOL _animationStopFinished;
    BOOL _shouldAutorotate;
    UIImageView *_backView;
    NSArray *_imageSet;
    UIImageView *_frontView;
    NSArray *_animList;
    unsigned long long _nextAnimIndex;
    unsigned long long _nextImgIndex;
}

@property (retain, nonatomic) NSArray *imageSet;
@property (retain, nonatomic) UIImageView *frontView;
@property (retain, nonatomic) UIImageView *backView;
@property (retain, nonatomic) NSArray *animList;
@property (nonatomic) unsigned long long nextAnimIndex;
@property (nonatomic) unsigned long long nextImgIndex;
@property (nonatomic) BOOL animationStopFinished;
@property (nonatomic) BOOL shouldAutorotate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)resetAnimations;
- (void)setShouldAutorotate:(BOOL)arg0;
- (void)pauseLayer:(id)arg0;
- (void)resumeLayer:(id)arg0;
- (BOOL)animationStopFinished;
- (void)setNextAnimIndex:(unsigned long long)arg0;
- (void)setNextImgIndex:(unsigned long long)arg0;
- (unsigned long long)nextAnimIndex;
- (void)setAnimationForView:(id)arg0 withOffset:(double)arg1 withDelay:(double)arg2 needAppearAnim:(BOOL)arg3;
- (void)setupAnimations;
- (void)setAnimList:(id)arg0;
- (unsigned long long)nextImgIndex;
- (id)animGroupwithIndex:(unsigned long long)arg0 withOffset:(double)arg1 withDelay:(double)arg2 needAppearAnim:(BOOL)arg3;
- (id)animList;
- (void)setAnimationStopFinished:(BOOL)arg0;
- (void)setFrontView:(id)arg0;
- (BOOL)shouldAutorotate;
- (void)setBackView:(id)arg0;
- (void)resume;
- (void).cxx_destruct;
- (void)removeAllAnimations;
- (void)setup;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)backView;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (void)dealloc;
- (void)pause;
- (id)frontView;
- (void)seek:(double)arg0;
- (void)resetLayer:(id)arg0;
- (id)imageSet;
- (void)setImageSet:(id)arg0;

@end