//
//     Generated by private class-dump
//

@class NSArray, UIStackView;

@interface IESLivePublicScreenContainer : UIView {
    NSArray *_componentConfigs;
    UIStackView *_container;
}

@property (retain, nonatomic) UIStackView *container;
@property (copy, nonatomic) NSArray *componentConfigs;

- (id)componentConfigs;
- (void)setComponentConfigs:(id)arg0;
- (void)addPublicScreenComponent:(id)arg0;
- (void)addPublicScreenRawView:(id)arg0 targetContainer:(long long)arg1 viewType:(id)arg2 size:(struct CGSize { double x0; double x1; })arg3;
- (void)addPublicScreenComponent:(id)arg0 finished:(id /* block */)arg1;
- (void)removePublicScreenComponentWithConfigModel:(id)arg0;
- (BOOL)isAllowList:(id)arg0;
- (id)packView:(id)arg0 viewType:(id)arg1 size:(struct CGSize { double x0; double x1; })arg2 targetContainer:(long long)arg3;
- (void)addPublicScreenPackedComponent:(id)arg0 finished:(id /* block */)arg1;
- (id)packComponent:(id)arg0;
- (void)enumerateArrangedViewsUsingBlock:(id /* block */)arg0;
- (void)removePublicScreenComponent:(id)arg0 finished:(id /* block */)arg1;
- (void)updateConstraintsWithComponent:(id)arg0;
- (void)handleConfigModel:(id)arg0;
- (void)removePublicScreenComponent:(id)arg0;
- (id)queryViewWithType:(id)arg0;
- (void)addPublicScreenComponent:(id)arg0 withConfigModel:(id)arg1;
- (void)updateConstraintsForAllComponents;
- (id)container;
- (id)init;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)setContainer:(id)arg0;
- (void)setup;
- (void)orientationChanged:(long long)arg0;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
