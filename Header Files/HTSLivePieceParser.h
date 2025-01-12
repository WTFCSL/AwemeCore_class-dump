//
//     Generated by private class-dump
//

@class IESLiveEmojiTextParser, NSParagraphStyle, IESLiveBadgeFactory;

@interface HTSLivePieceParser : NSObject {
    NSParagraphStyle *_paragraphStyle;
    IESLiveBadgeFactory *_badgeFactory;
    IESLiveEmojiTextParser *_emoticonParser;
}

@property (retain, nonatomic) NSParagraphStyle *paragraphStyle;
@property (retain, nonatomic) IESLiveBadgeFactory *badgeFactory;
@property (retain, nonatomic) IESLiveEmojiTextParser *emoticonParser;

- (id)initWithDIContext:(id)arg0;
- (double)getFontSize;
- (id)emoticonParser;
- (void)setEmoticonParser:(id)arg0;
- (id)badgeFactory;
- (void)setBadgeFactory:(id)arg0;
- (id)attributesWith:(id)arg0 preferColor:(id)arg1 config:(id)arg2;
- (void)appendBadgeListIn:(id)arg0 withBadgeList:(id)arg1 rangeNum:(unsigned long long *)arg2 rangeWidth:(unsigned long long *)arg3 rangeHeight:(unsigned long long *)arg4 showNewVipBadge:(BOOL)arg5;
- (double)getFinalFontSizeWith:(id)arg0 config:(id)arg1;
- (id)getDiggImageWithColorString:(id)arg0;
- (id)getFontFromFormat:(id)arg0 config:(id)arg1;
- (id)handleStringPiece:(id)arg0 defaultFormat:(id)arg1 configuration:(id)arg2;
- (id)handleUserPiece:(id)arg0 defaultFormat:(id)arg1 configuration:(id)arg2;
- (id)handleGiftPiece:(id)arg0 defaultFormat:(id)arg1 configuration:(id)arg2;
- (id)handleHeartPiece:(id)arg0 configuration:(id)arg1;
- (id)handlePatternPiece:(id)arg0 defaultFormat:(id)arg1 configuration:(id)arg2;
- (id)attributesWith:(id)arg0 preferColor:(id)arg1;
- (id)handleImagePiece:(id)arg0 defaultFormat:(id)arg1 configuration:(id)arg2;
- (id)init;
- (void).cxx_destruct;
- (id)paragraphStyle;
- (void)setParagraphStyle:(id)arg0;

@end
