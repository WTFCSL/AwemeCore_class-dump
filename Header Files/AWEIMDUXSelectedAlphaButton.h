//
//     Generated by private class-dump
//

@interface AWEIMDUXSelectedAlphaButton : DUXBaseButton {
    double _selectedAlpha;
    double _disabledAlpha;
}

@property (nonatomic) double selectedAlpha;
@property (nonatomic) double disabledAlpha;

+ (id)buttonWithSelectedAlpha:(double)arg0;
+ (id)buttonWithSelectedAlpha:(double)arg0 disabledAlpha:(double)arg1;

- (void)setSelectedAlpha:(double)arg0;
- (double)selectedAlpha;
- (void)setDisabledAlpha:(double)arg0;
- (void)setHighlighted:(BOOL)arg0;
- (double)disabledAlpha;

@end
