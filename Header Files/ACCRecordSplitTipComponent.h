//
//     Generated by private class-dump
//

@class UIView;

@interface ACCRecordSplitTipComponent : ACCFeatureComponent {
    UIView *_view;
}

@property (retain, nonatomic) UIView *view;

- (void)componentDidAppear;
- (unsigned long long)preferredLoadPhase;
- (void)componentWillTransitionToSize:(struct CGSize { double x0; double x1; })arg0 withTransitionCoordinator:(id)arg1;
- (void)checkSplitStatus;
- (void)createViewIfNeed;
- (void)clickCloseBtn:(id)arg0;
- (void).cxx_destruct;
- (void)setView:(id)arg0;
- (BOOL)isSplitting;
- (id)view;

@end
