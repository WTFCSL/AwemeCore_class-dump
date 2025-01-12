//
//     Generated by private class-dump
//

@class UIColor, UIView;

@interface IESSeekProgressModel : IESLiveDynamicModel {
    id /* block */ _action;
    UIView *_seekBarView;
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

- (void)setSeekBarView:(id)arg0;
- (id)seekBarView;
- (void).cxx_destruct;
- (void)setAction:(id /* block */)arg0;
- (id /* block */)action;

@end
