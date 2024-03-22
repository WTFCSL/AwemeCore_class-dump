//
//     Generated by private class-dump
//

@protocol RxInjector;

@interface RTVEffectGameListButton : UIButton {
    id<RxInjector> _injector;
    long long _style;
}

@property (readonly, weak, nonatomic) id<RxInjector> injector;
@property (readonly, nonatomic) long long style;

- (long long)style;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg0;
- (id)injector;
- (void)setHighlighted:(BOOL)arg0;

@end