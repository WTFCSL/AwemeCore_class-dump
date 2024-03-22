//
//     Generated by private class-dump
//

@class NSString;

@interface AWEIMEmoticonDataStorage : NSObject <AWEUserMessage> {
    NSString *_currentLoginUser;
}

@property (copy, nonatomic) NSString *currentLoginUser;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLogin;
- (id)currentLoginUser;
- (id)recentIMMessageUserStickersWithType:(long long)arg0;
- (void)resetRecentlyEmoticons:(id)arg0 WithType:(long long)arg1;
- (id)recentUserStickers;
- (void)setRecentUserStickers:(id)arg0;
- (void)setCurrentLoginUser:(id)arg0;
- (id)p_imMessageRecentlyUsedKeyWithType:(long long)arg0;
- (id)p_recentUsedIMStickerKeyForUserID:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end
