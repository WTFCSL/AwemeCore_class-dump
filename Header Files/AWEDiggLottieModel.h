//
//     Generated by private class-dump
//

@class NSString;

@interface AWEDiggLottieModel : MTLModel <MTLJSONSerializing> {
    BOOL _canBomb;
    NSString *_channelId;
}

@property (copy, nonatomic) NSString *channelId;
@property (nonatomic) BOOL canBomb;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)canBomb;
- (void)setCanBomb:(BOOL)arg0;
- (void).cxx_destruct;
- (id)channelId;
- (void)setChannelId:(id)arg0;

@end
