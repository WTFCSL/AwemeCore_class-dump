//
//     Generated by private class-dump
//

@class NSString, NSArray, NSAttributedString, AWEURLModel;
@protocol AFDFastReplyViewDelegate;

@protocol AFDFastReplyViewProtocol <NSObject>

@property (weak, nonatomic) id<AFDFastReplyViewDelegate> delegate;
@property (copy, nonatomic) NSString *placeholder;
@property (retain, nonatomic) NSAttributedString *attributeString;
@property (retain, nonatomic) AWEURLModel *avatarURL;
@property (retain, nonatomic) NSArray *emojis;
@property (nonatomic) BOOL needIMEmojiBtn;

- (id)avatarURL;
- (void)setAvatarURL:(id)arg0;
- (id)initWithMaxWidth:(double)arg0 avatarURL:(id)arg1 placeholder:(id)arg2 emojis:(id)arg3 needIMEmojiBtn:(BOOL)arg4;
- (BOOL)needIMEmojiBtn;
- (id)attributeString;
- (void)setAttributeString:(id)arg0;
- (void)setNeedIMEmojiBtn:(BOOL)arg0;
- (id)delegate;
- (void)setPlaceholder:(id)arg0;
- (id)placeholder;
- (void)setDelegate:(id)arg0;
- (void)setEmojis:(id)arg0;
- (id)emojis;

@end
