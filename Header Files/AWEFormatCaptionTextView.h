//
//     Generated by private class-dump
//

@class YYTextView, NSString;

@interface AWEFormatCaptionTextView : UIView <YYTextViewDelegate> {
    BOOL _scrollToBottomEnabled;
    YYTextView *_textView;
}

@property (retain, nonatomic) YYTextView *textView;
@property (nonatomic) BOOL scrollToBottomEnabled;
@property (copy, nonatomic) NSString *text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)calViewHeight;
- (void)updateLayoutWithRoleType:(unsigned long long)arg0;
- (void)resetScrollStatus;
- (void)updateScrollStatus;
- (void)scrollToBottomIfNeed;
- (BOOL)scrollToBottomEnabled;
- (void)setScrollToBottomEnabled:(BOOL)arg0;
- (id)textView;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint { double x0; double x1; })arg1 targetContentOffset:(inout struct CGPoint { double x0; double x1; } *)arg2;
- (void)setTextView:(id)arg0;
- (id)text;
- (void)scrollViewWillBeginDragging:(id)arg0;

@end
