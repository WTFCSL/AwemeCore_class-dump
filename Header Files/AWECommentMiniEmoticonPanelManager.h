//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommentMiniEmoticonPanelManager : NSObject <AWEUserMessage, AWECommentMiniEmoticonPanelManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getFinalDataEmoticonsWithCount:(long long)arg0;
+ (id)getRecentlyUsedEmoticons;
+ (id)getRemoteDataEmoticons;
+ (void)recordEmoticonUsed:(id)arg0;
+ (id)getRecentlyUsedEmoticonsOfCount:(long long)arg0;
+ (BOOL)isUsedRemoteDataEmoticons;
+ (id)getRemoteDataEmoticonsOfCount:(long long)arg0;
+ (id)defaultEmoticons;
+ (void)checkEmoticonsValid:(id)arg0 expectedCount:(long long)arg1;
+ (Class)aAWECommentRecentUsedEmojiDOUYINHTSAdapterClass;
+ (BOOL)isFetchedRemoteDataEmoticons;
+ (id)defaultQuickEmoticons;
+ (void)recordQuickEmoticonUsed:(id)arg0;
+ (id)quickEmoticonRecentlyUsed;

- (void)didFinishLogout;
- (id)aAWECommentRecentUsedEmojiDOUYINHTSAdapter;
- (id)init;
- (void)dealloc;

@end