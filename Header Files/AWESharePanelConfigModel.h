//
//     Generated by private class-dump
//

@class NSArray, NSString;

@interface AWESharePanelConfigModel : MTLModel <MTLJSONSerializing> {
    NSArray *_videoChannels;
    NSArray *_videoActions;
    NSArray *_moreChannelList;
}

@property (copy, nonatomic) NSArray *videoChannels;
@property (copy, nonatomic) NSArray *videoActions;
@property (copy, nonatomic) NSArray *moreChannelList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)videoChannelsJSONTransformer;
+ (id)videoActionsJSONTransformer;
+ (id)moreChannelListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)videoActions;
- (id)moreChannelList;
- (void)setVideoChannels:(id)arg0;
- (void)setVideoActions:(id)arg0;
- (void)setMoreChannelList:(id)arg0;
- (void).cxx_destruct;
- (id)videoChannels;

@end
