//
//     Generated by private class-dump
//

@class NSObject;
@protocol OS_dispatch_queue;

@interface IESLivePlaybackEmojiProcessQueue : NSObject {
    NSObject<OS_dispatch_queue> *_emojiProcessQueue;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *emojiProcessQueue;

+ (id)shareInstance;

- (id)emojiProcessQueue;
- (void)setEmojiProcessQueue:(id)arg0;
- (void).cxx_destruct;

@end
