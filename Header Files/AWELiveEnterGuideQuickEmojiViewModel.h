//
//     Generated by private class-dump
//

@class UIImage;

@interface AWELiveEnterGuideQuickEmojiViewModel : AWELiveEnterGuideQuickViewModel {
    UIImage *_emojiImage;
    long long _emojiId;
    id /* block */ _caculateWidthCompletion;
}

@property (retain, nonatomic) UIImage *emojiImage;
@property (nonatomic) long long emojiId;
@property (copy, nonatomic) id /* block */ caculateWidthCompletion;

- (id)emojiImage;
- (void)setEmojiImage:(id)arg0;
- (id)initWithEmojiDetail:(id)arg0;
- (void)setCaculateWidthCompletion:(id /* block */)arg0;
- (long long)emojiId;
- (void)precaculateCellWidthForEmojiDetai:(id)arg0;
- (id /* block */)caculateWidthCompletion;
- (void)setEmojiId:(long long)arg0;
- (void).cxx_destruct;

@end
