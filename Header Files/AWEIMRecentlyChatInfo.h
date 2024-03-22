//
//     Generated by private class-dump
//

@class NSString, NSDate;

@interface AWEIMRecentlyChatInfo : NSObject <AWEIMRecentlyChatInfoService> {
    BOOL isRecentlyChat;
    BOOL canShowRencentlyChatLabel;
    NSDate *cachedTime;
    NSDate *_lastMsgCreateTime;
    NSString *_recentlyChatStr;
}

@property (copy, nonatomic) NSString *recentlyChatStr;
@property (retain, nonatomic) NSDate *lastMsgCreateTime;
@property (retain, nonatomic) NSDate *cachedTime;
@property (nonatomic) BOOL isRecentlyChat;
@property (nonatomic) BOOL canShowRencentlyChatLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lastMsgCreateTime;
- (void)setIsRecentlyChat:(BOOL)arg0;
- (BOOL)isRecentlyChat;
- (id)cachedTime;
- (void)setCachedTime:(id)arg0;
- (void)setLastMsgCreateTime:(id)arg0;
- (id)recentlyChatStr;
- (BOOL)canShowRencentlyChatLabel;
- (void)setCanShowRencentlyChatLabel:(BOOL)arg0;
- (void)setRecentlyChatStr:(id)arg0;
- (void).cxx_destruct;

@end
