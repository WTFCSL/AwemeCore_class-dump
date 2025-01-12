//
//     Generated by private class-dump
//

@class NSString, NSDate;

@protocol AWEIMRecentlyChatInfoService <NSObject>

@property (retain, nonatomic) NSDate *cachedTime;
@property (retain, nonatomic) NSDate *lastMsgCreateTime;
@property (nonatomic) BOOL isRecentlyChat;
@property (readonly, copy, nonatomic) NSString *recentlyChatStr;
@property (nonatomic) BOOL canShowRencentlyChatLabel;

- (id)lastMsgCreateTime;
- (void)setIsRecentlyChat:(BOOL)arg0;
- (BOOL)isRecentlyChat;
- (id)cachedTime;
- (void)setCachedTime:(id)arg0;
- (void)setLastMsgCreateTime:(id)arg0;
- (id)recentlyChatStr;
- (BOOL)canShowRencentlyChatLabel;
- (void)setCanShowRencentlyChatLabel:(BOOL)arg0;

@end
