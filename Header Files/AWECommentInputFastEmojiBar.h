//
//     Generated by private class-dump
//

@class NSArray;

@interface AWECommentInputFastEmojiBar : UIStackView {
    id /* block */ _clickedCompletion;
    NSArray *_recentEmotIcons;
}

@property (copy, nonatomic) NSArray *recentEmotIcons;
@property (copy, nonatomic) id /* block */ clickedCompletion;

- (void)setClickedCompletion:(id /* block */)arg0;
- (void)updateEmoji;
- (id)recentEmotIcons;
- (void)handleEmotIconClick:(id)arg0;
- (void)setRecentEmotIcons:(id)arg0;
- (id /* block */)clickedCompletion;
- (id)init;
- (void).cxx_destruct;
- (double)barWidth;
- (void)setupUI;

@end
