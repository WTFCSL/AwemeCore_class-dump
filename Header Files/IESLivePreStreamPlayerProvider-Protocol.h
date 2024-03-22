//
//     Generated by private class-dump
//

@class NSArray, IESLivePlayerAudioLoudness;

@protocol IESLivePreStreamPlayerProvider <NSObject>

@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } renderViewFrame;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } mediaSize;
@property (retain, nonatomic) NSArray *multiLinkerGridRatioFrames;
@property (nonatomic) long long preScaleType;
@property (nonatomic) unsigned long long preAlignMode;
@property (nonatomic) BOOL isNeedUpdateMultiLinkerLayout;
@property (retain, nonatomic) IESLivePlayerAudioLoudness *sourceLoudness;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })renderViewFrame;
- (id)multiLinkerGridRatioFrames;
- (void)setMultiLinkerGridRatioFrames:(id)arg0;
- (long long)preScaleType;
- (void)setPreScaleType:(long long)arg0;
- (unsigned long long)preAlignMode;
- (void)setPreAlignMode:(unsigned long long)arg0;
- (BOOL)isNeedUpdateMultiLinkerLayout;
- (void)setIsNeedUpdateMultiLinkerLayout:(BOOL)arg0;
- (id)sourceLoudness;
- (void)setSourceLoudness:(id)arg0;
- (struct CGSize { double x0; double x1; })mediaSize;

@end