//
//     Generated by private class-dump
//

@class NSMutableDictionary, MMKV, AWEFeedActivityBubbleModel, AWEHomepageTimer, NSString;
@protocol AWEFeedActivityChannelInfoProtocol, AWEHPActivityBubbleDelegate;

@interface AWEHPActivityBubbleManager : NSObject <AWEHomepageTimerObserver> {
    AWEFeedActivityBubbleModel *_currentModel;
    id<AWEFeedActivityChannelInfoProtocol> _model;
    NSMutableDictionary *_consumedDict;
    id<AWEHPActivityBubbleDelegate> _delegate;
    AWEHomepageTimer *_timer;
    MMKV *_mmkv;
}

@property (retain, nonatomic) id<AWEFeedActivityChannelInfoProtocol> model;
@property (retain, nonatomic) AWEFeedActivityBubbleModel *currentModel;
@property (retain, nonatomic) NSMutableDictionary *consumedDict;
@property (weak, nonatomic) id<AWEHPActivityBubbleDelegate> delegate;
@property (retain, nonatomic) AWEHomepageTimer *timer;
@property (retain, nonatomic) MMKV *mmkv;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMmkv:(id)arg0;
- (id)mmkv;
- (void)checkStatusIfNeed;
- (void)onFireWithTimer:(id)arg0;
- (void)setupBubbleTaskIDWithModel:(id)arg0;
- (id)mmkvConsumedDict;
- (void)setConsumedDict:(id)arg0;
- (id)consumedDict;
- (void)consumeCurrentModel;
- (id)timer;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;
- (id)delegate;
- (void)setTimer:(id)arg0;
- (void)setDelegate:(id)arg0;
- (void)setCurrentModel:(id)arg0;
- (id)currentModel;
- (id)initWithData:(id)arg0 delegate:(id)arg1;

@end
