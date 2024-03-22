//
//     Generated by private class-dump
//

@class IESLiveGradientView;

@interface IESLiveInteractionFanticketProgressView : UIView {
    BOOL _isInGrowAnimation;
    BOOL _needUpdateProgress;
    IESLiveGradientView *_progressBar;
    double _progress;
}

@property (retain, nonatomic) IESLiveGradientView *progressBar;
@property (nonatomic) double progress;
@property (nonatomic) BOOL isInGrowAnimation;
@property (nonatomic) BOOL needUpdateProgress;

- (BOOL)isInGrowAnimation;
- (void)setIsInGrowAnimation:(BOOL)arg0;
- (BOOL)needUpdateProgress;
- (void)setNeedUpdateProgress:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setup;
- (double)progress;
- (void)setProgress:(double)arg0;
- (id)progressBar;
- (void)setProgressBar:(id)arg0;
- (void)updateProgress:(double)arg0;

@end
