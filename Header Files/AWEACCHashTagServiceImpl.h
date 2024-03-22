//
//     Generated by private class-dump
//

@class NSString;

@interface AWEACCHashTagServiceImpl : NSObject <ACCHashTagServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)hashTagRegExp;
- (id)endWithHashTagRegExp;
- (id)resolveHashTagsWithText:(id)arg0;
- (void)handleHashTags:(id)arg0 withSpecialHashtags:(id)arg1 withPlainText:(id)arg2;
- (id)savedHashtags;
- (id)savedPrivateHashtags;
- (void)historySaveHashTags:(id)arg0 isPrivate:(BOOL)arg1;

@end
