//
//     Generated by private class-dump
//

@class UILabel, UIImageView, NSString;
@protocol RxInjector;

@interface RTVVoipPPropTipView : UIView <RTVVoipPPropTipViewInterface> {
    id<RxInjector> _injector;
    UILabel *_tipLabel;
    UIImageView *_tipImageView;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) UILabel *tipLabel;
@property (readonly, nonatomic) UIImageView *tipImageView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)rxAwakeFromPropertyInjection;
- (void)__createComponents;
- (void)__layoutComponents;
- (void)__stopAnimation;
- (id)tipImageView;
- (void)showWithEffect:(id)arg0;
- (void)dismiss;
- (void).cxx_destruct;
- (void)__startAnimation;
- (id)injector;
- (void)updateConstraints;
- (id)tipLabel;

@end