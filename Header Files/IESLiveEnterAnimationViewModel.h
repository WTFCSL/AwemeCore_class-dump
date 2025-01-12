//
//     Generated by private class-dump
//

@class NSString, UIImage;

@interface IESLiveEnterAnimationViewModel : NSObject {
    NSString *_contentURL;
    UIImage *_content;
    double _duration;
    double _animDuration;
    double _delayDuration;
}

@property (retain, nonatomic) NSString *contentURL;
@property (retain, nonatomic) UIImage *content;
@property (nonatomic) double duration;
@property (nonatomic) double animDuration;
@property (nonatomic) double delayDuration;

- (double)delayDuration;
- (void)setDelayDuration:(double)arg0;
- (double)animDuration;
- (void)setAnimDuration:(double)arg0;
- (void).cxx_destruct;
- (id)contentURL;
- (id)content;
- (double)duration;
- (void)setContent:(id)arg0;
- (void)setDuration:(double)arg0;
- (void)setContentURL:(id)arg0;

@end
