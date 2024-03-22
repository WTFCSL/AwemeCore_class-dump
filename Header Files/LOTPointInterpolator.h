//
//     Generated by private class-dump
//

@protocol LOTPointValueDelegate;

@interface LOTPointInterpolator : LOTValueInterpolator {
    id<LOTPointValueDelegate> _delegate;
}

@property (weak, nonatomic) id<LOTPointValueDelegate> delegate;

- (void)setValueDelegate:(id)arg0;
- (struct CGPoint { double x0; double x1; })pointValueForFrame:(id)arg0;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
