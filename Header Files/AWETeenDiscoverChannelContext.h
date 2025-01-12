//
//     Generated by private class-dump
//

@class NSString, NSMutableDictionary;

@interface AWETeenDiscoverChannelContext : NSObject {
    BOOL _isPush;
    BOOL _isClickGuideCard;
    BOOL _channalTopResouceHighlight;
    NSString *_channelID;
    NSString *_channelName;
    unsigned long long _channelIndex;
    long long _channelKind;
    long long _enterMethod;
    NSMutableDictionary *_params;
}

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *channelID;
@property (copy, nonatomic) NSString *channelName;
@property (nonatomic) unsigned long long channelIndex;
@property (nonatomic) long long channelKind;
@property (nonatomic) long long enterMethod;
@property (nonatomic) BOOL isPush;
@property (nonatomic) BOOL isClickGuideCard;
@property (nonatomic) BOOL channalTopResouceHighlight;

- (void)setEnterMethod:(long long)arg0;
- (long long)enterMethod;
- (void)setChannelIndex:(unsigned long long)arg0;
- (id)trackParams;
- (long long)channelKind;
- (void)setChannelKind:(long long)arg0;
- (BOOL)isPush;
- (void)setIsPush:(BOOL)arg0;
- (void)setChannalTopResouceHighlight:(BOOL)arg0;
- (BOOL)isClickGuideCard;
- (void)setIsClickGuideCard:(BOOL)arg0;
- (BOOL)channalTopResouceHighlight;
- (id)channelID;
- (void).cxx_destruct;
- (id)channelName;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)params;
- (void)setChannelID:(id)arg0;
- (void)setParams:(id)arg0;
- (void)setChannelName:(id)arg0;
- (unsigned long long)channelIndex;

@end
