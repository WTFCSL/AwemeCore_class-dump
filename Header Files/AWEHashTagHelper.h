//
//     Generated by private class-dump
//

@class NSString;

@interface AWEHashTagHelper : HTSService <AWEHashTagHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)emojiRegex;
+ (id)hashTagRegExp;
+ (id)endWithHashTagRegExp;
+ (id)resolveHashTagsWithText:(id)arg0;
+ (void)handleHashTags:(id)arg0 withSpecialHashtags:(id)arg1 withPlainText:(id)arg2;
+ (id)validHashTagCharset;

- (id)emojiRegularExpression;

@end
