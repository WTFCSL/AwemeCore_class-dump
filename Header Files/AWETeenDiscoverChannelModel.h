//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWETeenDiscoverChannelModel : AWEBaseApiModel {
    BOOL _isRecommend;
    NSString *_channelId;
    NSString *_channelName;
    AWEURLModel *_iconUrl;
    AWEURLModel *_titleIconUrl;
    long long _channelType;
    long long _channelKind;
}

@property (copy, nonatomic) NSString *channelId;
@property (copy, nonatomic) NSString *channelName;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEURLModel *titleIconUrl;
@property (nonatomic) long long channelType;
@property (nonatomic) BOOL isRecommend;
@property (nonatomic) long long channelKind;

+ (id)iconUrlJSONTransformer;
+ (id)titleIconUrlJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (BOOL)isRecommend;
- (void)setIsRecommend:(BOOL)arg0;
- (long long)channelKind;
- (void)setChannelKind:(long long)arg0;
- (id)titleIconUrl;
- (void)setTitleIconUrl:(id)arg0;
- (long long)channelType;
- (void).cxx_destruct;
- (id)channelName;
- (id)channelId;
- (void)setChannelId:(id)arg0;
- (void)setChannelName:(id)arg0;
- (void)setChannelType:(long long)arg0;

@end
