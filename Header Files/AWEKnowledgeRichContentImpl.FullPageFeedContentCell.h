//
//     Generated by private class-dump
//

@interface AWEKnowledgeRichContentImpl.FullPageFeedContentCell : AWEKnowledgeRichContentImpl.FullPageBaseItemCell <UIGestureRecognizerDelegate, YYLabelAnimationDelegate> {
    void /* unknown type, empty encoding */ getContentAnimationBlock;
    void /* unknown type, empty encoding */ tapContentBlock;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentLabel;
}

- (BOOL)gestureRecognizer:(id)arg0 shouldReceiveTouch:(id)arg1;
- (id)label:(id)arg0 actionForLayer:(id)arg1 forKey:(id)arg2;
- (void)didTapContent;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })arg0;
- (id)initWithCoder:(id)arg0;
- (void)prepareForReuse;

@end
