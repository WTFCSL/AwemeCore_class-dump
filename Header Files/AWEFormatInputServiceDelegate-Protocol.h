//
//     Generated by private class-dump
//

@protocol AWEFormatInputServiceDelegate <NSObject>

@optional

- (void)willSendContent:(id)arg0 contentID:(id)arg1;
- (void)didSendContent:(id)arg0 contentID:(id)arg1 json:(id)arg2 success:(BOOL)arg3 errorCode:(int)arg4 errmsg:(id)arg5;
- (void)keyboardWillShow:(unsigned long long)arg0 animationDuration:(double)arg1 yOffset:(double)arg2;
- (void)keyboardWillHide:(unsigned long long)arg0 animationDuration:(double)arg1;
- (void)didChangeInputContentHeight:(double)arg0;

@end
