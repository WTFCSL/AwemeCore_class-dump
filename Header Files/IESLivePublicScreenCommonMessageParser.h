//
//     Generated by private class-dump
//

@class IESLiveBadgeFactory;
@protocol IESLiveEmojiTextParserAdapter, HTSLiveTemplateProviderAdapter, IESLiveWebImageService;

@interface IESLivePublicScreenCommonMessageParser : NSObject {
    BOOL _enableIdentityLabelDefaultRes;
    BOOL _enableDSLUserBadge;
    IESLiveBadgeFactory *_badgeFactory;
    id<IESLiveEmojiTextParserAdapter> _emojiTextParser;
    id<IESLiveWebImageService> _webImageService;
    id<HTSLiveTemplateProviderAdapter> _templateProvider;
}

@property (retain, nonatomic) id<HTSLiveTemplateProviderAdapter> templateProvider;
@property (nonatomic) BOOL enableDSLUserBadge;
@property (retain, nonatomic) IESLiveBadgeFactory *badgeFactory;
@property (retain, nonatomic) id<IESLiveEmojiTextParserAdapter> emojiTextParser;
@property (retain, nonatomic) id<IESLiveWebImageService> webImageService;
@property (nonatomic) BOOL enableIdentityLabelDefaultRes;

- (id)webImageService;
- (void)setWebImageService:(id)arg0;
- (id)emojiTextParser;
- (id)parseDisplayText:(id)arg0 configuration:(id)arg1;
- (id)badgeFactory;
- (void)setBadgeFactory:(id)arg0;
- (void)setEmojiTextParser:(id)arg0;
- (id)getGiftIconURLWithGiftID:(id)arg0;
- (id)accessibilityStringFromBadgeList:(id)arg0;
- (BOOL)enableDSLUserBadge;
- (void)appendBadgeListIn:(id)arg0 user:(id)arg1 alignFontSize:(double)arg2 scale:(double)arg3;
- (void)appendBadgeListIn:(id)arg0 badgeList:(id)arg1 alignFontSize:(double)arg2 scale:(double)arg3;
- (id)getSensitiveNicknameWithUser:(id)arg0;
- (BOOL)enableIdentityLabelDefaultRes;
- (void)setEnableIdentityLabelDefaultRes:(BOOL)arg0;
- (void)setEnableDSLUserBadge:(BOOL)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)templateProvider;
- (void)setTemplateProvider:(id)arg0;

@end
