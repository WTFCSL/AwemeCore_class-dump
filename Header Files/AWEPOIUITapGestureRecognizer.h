//
//     Generated by private class-dump
//

@interface AWEPOIUITapGestureRecognizer : UITapGestureRecognizer {
    id /* block */ _eventHandler;
}

@property (copy, nonatomic) id /* block */ eventHandler;

- (id /* block */)eventHandler;
- (void).cxx_destruct;
- (void)touchesBegan:(id)arg0 withEvent:(id)arg1;
- (void)touchesEnded:(id)arg0 withEvent:(id)arg1;
- (void)setEventHandler:(id /* block */)arg0;
- (void)touchesMoved:(id)arg0 withEvent:(id)arg1;
- (void)touchesCancelled:(id)arg0 withEvent:(id)arg1;
- (void)ignoreTouch:(id)arg0 forEvent:(id)arg1;

@end