//
//     Generated by private class-dump
//

@class AWEFeedChannelObject;
@protocol AWEFeedChannelHookLifeCycleDelegate;

@interface AWEViewControllerFeedChannelHookLifeCycleObject : NSObject {
    AWEFeedChannelObject *_channelObject;
    id<AWEFeedChannelHookLifeCycleDelegate> _channelDelegate;
}

@property (weak, nonatomic) AWEFeedChannelObject *channelObject;
@property (weak, nonatomic) id<AWEFeedChannelHookLifeCycleDelegate> channelDelegate;

- (id)channelDelegate;
- (void)setChannelDelegate:(id)arg0;
- (void)setChannelObject:(id)arg0;
- (id)channelObject;
- (void).cxx_destruct;

@end
