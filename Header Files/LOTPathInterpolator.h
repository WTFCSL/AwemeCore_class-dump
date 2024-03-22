//
//     Generated by private class-dump
//

@protocol LOTPathValueDelegate;

@interface LOTPathInterpolator : LOTValueInterpolator {
    id<LOTPathValueDelegate> _delegate;
}

@property (weak, nonatomic) id<LOTPathValueDelegate> delegate;

- (void)setValueDelegate:(id)arg0;
- (id)pathForFrame:(id)arg0 cacheLengths:(BOOL)arg1;
- (BOOL)hasDelegateOverride;
- (void).cxx_destruct;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
