//
//     Generated by private class-dump
//

@class AnchorEffect_EffectInfo, NSString, UILabel, IESLiveGradientView, UIView;

@interface IESLiveMultiLinkerPlayContainerItemView : UIView <CAAnimationDelegate> {
    BOOL _fromLeft;
    AnchorEffect_EffectInfo *_effectInfo;
    IESLiveGradientView *_gradientView;
    UILabel *_contentLabel;
    UIView *_lineView;
    UILabel *_remainTimeLabel;
    UILabel *_fakeCountLabel;
    UILabel *_countLabel;
}

@property (retain, nonatomic) IESLiveGradientView *gradientView;
@property (retain, nonatomic) UILabel *contentLabel;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) UILabel *remainTimeLabel;
@property (retain, nonatomic) UILabel *fakeCountLabel;
@property (retain, nonatomic) UILabel *countLabel;
@property (nonatomic) BOOL fromLeft;
@property (retain, nonatomic) AnchorEffect_EffectInfo *effectInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEffectInfo:(id)arg0;
- (id)effectInfo;
- (id)remainTimeLabel;
- (void)setRemainTimeLabel:(id)arg0;
- (id)createCountLabel;
- (void)setFakeCountLabel:(id)arg0;
- (id)fakeCountLabel;
- (void)setFromLeft:(BOOL)arg0;
- (void)resetLayoutFromLeft:(BOOL)arg0;
- (void)showContent:(id)arg0 remainTime:(long long)arg1 count:(long long)arg2;
- (BOOL)isNeedFlyAnimationForCount:(long long)arg0;
- (void)startCountFlyAnimationWithFactory:(id /* block */)arg0 breathFactory:(id /* block */)arg1;
- (void)setGradientStartColor:(id)arg0 endColor:(id)arg1;
- (void)setCountTextColor:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setGradientView:(id)arg0;
- (void)animationDidStop:(id)arg0 finished:(BOOL)arg1;
- (id)gradientView;
- (id)lineView;
- (void)setLineView:(id)arg0;
- (id)contentLabel;
- (void)setContentLabel:(id)arg0;
- (id)countLabel;
- (void)setCountLabel:(id)arg0;
- (BOOL)fromLeft;

@end