//
//     Generated by private class-dump
//

@interface AWEFeedEntranceButton : AWEFeedEntranceView {
    BOOL _disableOverrideHitTest;
    BOOL _useOriginInteractionArea;
}

@property (nonatomic) BOOL useOriginInteractionArea;
@property (nonatomic) BOOL disableOverrideHitTest;

- (void)configImage:(id)arg0 hotWord:(id)arg1;
- (void)updateHotword:(id)arg0;
- (void)layoutForHotWordStlye;
- (void)configImage:(id)arg0 Label:(id)arg1 position:(unsigned long long)arg2;
- (void)setDisableOverrideHitTest:(BOOL)arg0;
- (BOOL)useOriginInteractionArea;
- (BOOL)disableOverrideHitTest;
- (void)setUseOriginInteractionArea:(BOOL)arg0;
- (id)init;
- (id)hitTest:(struct CGPoint { double x0; double x1; })arg0 withEvent:(id)arg1;

@end
