//
//     Generated by private class-dump
//

@interface AWEECOMIMTextView : UITextView {
    BOOL _disableSystemMenu;
    id /* block */ _pasteBlock;
}

@property (copy, nonatomic) id /* block */ pasteBlock;
@property (nonatomic) BOOL disableSystemMenu;

- (void)setPasteBlock:(id /* block */)arg0;
- (BOOL)disableSystemMenu;
- (id /* block */)pasteBlock;
- (void)setDisableSystemGestures;
- (BOOL)canBecameFirstResponder;
- (void)setDisableSystemMenu:(BOOL)arg0;
- (void)copy:(id)arg0;
- (void).cxx_destruct;
- (void)paste:(id)arg0;
- (void)cut:(id)arg0;
- (BOOL)canPerformAction:(SEL)arg0 withSender:(id)arg1;

@end
