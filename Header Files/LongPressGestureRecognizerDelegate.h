//
//     Generated by private class-dump
//

@interface LongPressGestureRecognizerDelegate : CustomGestureRecognizerDelegate {
    BOOL _disableLongpressAfterScroll;
}

@property (nonatomic) BOOL disableLongpressAfterScroll;

- (void)setDisableLongpressAfterScroll:(BOOL)arg0;
- (BOOL)disableLongpressAfterScroll;
- (BOOL)gestureRecognizer:(id)arg0 shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (BOOL)gestureRecognizer:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1;
- (id)initWithEventHandler:(id)arg0;

@end
