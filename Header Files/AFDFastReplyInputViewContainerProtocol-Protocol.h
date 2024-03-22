//
//     Generated by private class-dump
//

@class NSDictionary, NSAttributedString;

@protocol AFDFastReplyInputViewContainerProtocol <NSObject>

@property (copy, nonatomic) id /* block */ willHideKeyboard;
@property (copy, nonatomic) id /* block */ sendSuccessBlock;
@property (readonly, copy, nonatomic) NSAttributedString *mediaAdaptTextViewAttribute;
@property (retain, nonatomic) NSDictionary *trackerParams;

- (id)mediaAdaptTextViewAttribute;
- (id /* block */)willHideKeyboard;
- (void)setWillHideKeyboard:(id /* block */)arg0;
- (void)setTrackerParams:(id)arg0;
- (id)trackerParams;
- (void)showInputView;
- (void)showInputViewWithClickType:(unsigned long long)arg0;
- (BOOL)isShowingInputView;
- (id)initWithInputViewMode:(id)arg0 context:(id)arg1 viewController:(id)arg2;
- (void)setSendSuccessBlock:(id /* block */)arg0;
- (id /* block */)sendSuccessBlock;
- (void)playEmojiAnimation:(id)arg0 viewController:(id)arg1;
- (void)sendContent:(id)arg0;

@end