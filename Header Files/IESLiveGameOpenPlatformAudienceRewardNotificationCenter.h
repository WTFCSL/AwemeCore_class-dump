//
//     Generated by private class-dump
//

@class NSMutableArray;

@interface IESLiveGameOpenPlatformAudienceRewardNotificationCenter : IESLiveGameOpenPlatformNotificationCenter {
    NSMutableArray *_cachedNotes;
}

@property (retain, nonatomic) NSMutableArray *cachedNotes;

+ (id)defaultCenter;

- (id)notificationWithMessage:(id)arg0;
- (void)startObservingMessage;
- (void)stopObservingMessage;
- (id)allRewardNotes;
- (id)cachedNotes;
- (void)setCachedNotes:(id)arg0;
- (void).cxx_destruct;
- (void)clearCache;

@end
