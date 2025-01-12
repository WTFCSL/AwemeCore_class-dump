//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEPaymentEventResponseModel : AWEBaseApiModel {
    unsigned long long _status;
    NSString *_containerID;
    NSString *_mixID;
    NSString *_itemID;
    unsigned long long _videoType;
    unsigned long long _orderType;
    NSArray *_unlockEpisodes;
}

@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *mixID;
@property (copy, nonatomic) NSString *itemID;
@property (nonatomic) unsigned long long videoType;
@property (nonatomic) unsigned long long orderType;
@property (copy, nonatomic) NSArray *unlockEpisodes;

+ (id)JSONKeyPathsByPropertyKey;

- (id)mixID;
- (void)setMixID:(id)arg0;
- (id)unlockEpisodes;
- (void)setUnlockEpisodes:(id)arg0;
- (void)setContainerID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)status;
- (id)containerID;
- (unsigned long long)videoType;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setStatus:(unsigned long long)arg0;
- (void)setVideoType:(unsigned long long)arg0;
- (unsigned long long)orderType;
- (void)setOrderType:(unsigned long long)arg0;

@end
