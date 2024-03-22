//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface MinorInterestChannel : AWEBaseApiModel {
    NSString *_channelID;
    NSString *_channelName;
    AWEURLModel *_icon;
}

@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) AWEURLModel *icon;

+ (id)iconJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)icon;
- (id)channelID;
- (void).cxx_destruct;
- (id)channelName;
- (void)setIcon:(id)arg0;
- (void)setChannelID:(id)arg0;
- (void)setChannelName:(id)arg0;

@end
