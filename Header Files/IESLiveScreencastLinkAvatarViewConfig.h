//
//     Generated by private class-dump
//

@class NSString;

@interface IESLiveScreencastLinkAvatarViewConfig : NSObject {
    double _avatarSideLength;
    long long _silenceViewStyle;
    NSString *_silenceViewName;
    double _animationWidthOriginal;
    double _animationHeightOriginal;
    double _animationWidthNormal;
    double _animationHeightNormal;
    double _animationWidthGenderDiff;
    double _animationHeightGenderDiff;
    NSString *_startTalkingViewName;
    NSString *_loopTalkingViewName;
}

@property (nonatomic) double avatarSideLength;
@property (nonatomic) long long silenceViewStyle;
@property (copy, nonatomic) NSString *silenceViewName;
@property (nonatomic) double animationWidthOriginal;
@property (nonatomic) double animationHeightOriginal;
@property (nonatomic) double animationWidthNormal;
@property (nonatomic) double animationHeightNormal;
@property (nonatomic) double animationWidthGenderDiff;
@property (nonatomic) double animationHeightGenderDiff;
@property (copy, nonatomic) NSString *startTalkingViewName;
@property (copy, nonatomic) NSString *loopTalkingViewName;

+ (id)screencastLinkConfig;

- (void)setAvatarSideLength:(double)arg0;
- (void)setSilenceViewStyle:(long long)arg0;
- (void)setSilenceViewName:(id)arg0;
- (void)setAnimationWidthOriginal:(double)arg0;
- (void)setAnimationHeightOriginal:(double)arg0;
- (void)setAnimationWidthNormal:(double)arg0;
- (void)setAnimationHeightNormal:(double)arg0;
- (void)setAnimationWidthGenderDiff:(double)arg0;
- (void)setAnimationHeightGenderDiff:(double)arg0;
- (void)setStartTalkingViewName:(id)arg0;
- (void)setLoopTalkingViewName:(id)arg0;
- (double)avatarSideLength;
- (long long)silenceViewStyle;
- (id)silenceViewName;
- (double)animationWidthOriginal;
- (double)animationHeightOriginal;
- (double)animationWidthNormal;
- (double)animationHeightNormal;
- (double)animationWidthGenderDiff;
- (double)animationHeightGenderDiff;
- (id)startTalkingViewName;
- (id)loopTalkingViewName;
- (void).cxx_destruct;

@end