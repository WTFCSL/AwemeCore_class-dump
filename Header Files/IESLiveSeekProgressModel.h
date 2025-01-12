//
//     Generated by private class-dump
//

@class UIColor, NSString, HTSLiveImage, UIView;

@interface IESLiveSeekProgressModel : IESLiveDynamicModel {
    BOOL _shouldShow;
    unsigned long long _type;
    id /* block */ _action;
    UIColor *_normalColor;
    UIColor *_highLightColor;
    double _startTime;
    double _endTime;
    double _startProgress;
    double _endProgress;
    UIView *_seekBarView;
    NSString *_description_p;
    HTSLiveImage *_smallImage;
    HTSLiveImage *_image;
}

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) id /* block */ action;
@property (retain, nonatomic) UIColor *normalColor;
@property (retain, nonatomic) UIColor *highLightColor;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (nonatomic) double startProgress;
@property (nonatomic) double endProgress;
@property (weak, nonatomic) UIView *seekBarView;
@property (copy, nonatomic) NSString *description_p;
@property (retain, nonatomic) HTSLiveImage *smallImage;
@property (retain, nonatomic) HTSLiveImage *image;
@property (nonatomic) BOOL shouldShow;

- (void)setHighLightColor:(id)arg0;
- (id)description_p;
- (void)setDescription_p:(id)arg0;
- (void)setSeekBarView:(id)arg0;
- (id)seekBarView;
- (void)setStartTime:(double)arg0;
- (void).cxx_destruct;
- (id)image;
- (unsigned long long)type;
- (void)setEndProgress:(double)arg0;
- (double)endTime;
- (void)setType:(unsigned long long)arg0;
- (void)setImage:(id)arg0;
- (double)startTime;
- (double)endProgress;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;
- (id)normalColor;
- (void)setNormalColor:(id)arg0;
- (void)setEndTime:(double)arg0;
- (double)startProgress;
- (void)setStartProgress:(double)arg0;
- (BOOL)shouldShow;
- (id)smallImage;
- (void)setSmallImage:(id)arg0;
- (void)setShouldShow:(BOOL)arg0;
- (id)highLightColor;

@end
