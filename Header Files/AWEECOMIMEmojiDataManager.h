//
//     Generated by private class-dump
//

@class NSArray, NSDictionary;
@protocol AWEIMEmoticonManager;

@interface AWEECOMIMEmojiDataManager : NSObject {
    NSArray *_emojiDataSource;
    NSDictionary *_emojiDict;
    id<AWEIMEmoticonManager> _emoticonManager;
}

@property (copy, nonatomic) NSArray *emojiDataSource;
@property (retain, nonatomic) NSDictionary *emojiDict;
@property (retain, nonatomic) id<AWEIMEmoticonManager> emoticonManager;

+ (id)sharedManager;

- (void)replaceEmojiForAttributedString:(id)arg0 font:(id)arg1 displayType:(long long)arg2;
- (id)emojiDict;
- (id)emojiWithEmojiDescription:(id)arg0;
- (id)emoticonManager;
- (id)matchingEmojiForString:(id)arg0;
- (id)emojiAttributeForYYLabelWithStickerMatchingResult:(id)arg0 font:(id)arg1;
- (id)emojiAttributeForSystemUIWithStickerMatchingResult:(id)arg0 font:(id)arg1;
- (id)emojiDataSource;
- (void)setEmojiDataSource:(id)arg0;
- (void)setEmojiDict:(id)arg0;
- (void)setEmoticonManager:(id)arg0;
- (void).cxx_destruct;

@end