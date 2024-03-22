//
//     Generated by private class-dump
//

@class HTSLiveLinkmicAudienceEmoji, NSString;

@interface IESLivePKGuestEmojiModel : NSObject <NSCoding> {
    HTSLiveLinkmicAudienceEmoji *_originEmoji;
    NSString *_emojiID;
}

@property (retain, nonatomic) HTSLiveLinkmicAudienceEmoji *originEmoji;
@property (copy, nonatomic) NSString *emojiID;

+ (id)emojiWithPB:(id)arg0;
+ (id)pbWithEmoji:(id)arg0;

- (BOOL)isRandom;
- (id)emojiID;
- (void)setEmojiID:(id)arg0;
- (id)emojiName;
- (id)originEmoji;
- (id)initWithPBEmoji:(id)arg0;
- (id)emojiIDNumber;
- (id)emojiShowTimems;
- (id)emojiResultTimems;
- (void)setOriginEmoji:(id)arg0;
- (id)permission;
- (unsigned long long)category;
- (void).cxx_destruct;
- (int)type;
- (id)initWithCoder:(id)arg0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg0;
- (id)description;
- (void)encodeWithCoder:(id)arg0;
- (id)dynamicImage;
- (id)staticImage;

@end
