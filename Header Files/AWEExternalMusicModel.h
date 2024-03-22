//
//     Generated by private class-dump
//

@class NSString;

@interface AWEExternalMusicModel : AWEBaseApiModel <AWEExternalMusicModelProtocol> {
    NSString *_externalMusicKey;
    NSString *_thirdPlatformMusicID;
    NSString *_thirdPlatformName;
    NSString *_externalURL;
    NSString *_universalLink;
    NSString *_deepLink;
}

@property (copy, nonatomic) NSString *thirdPlatformName;
@property (copy, nonatomic) NSString *universalLink;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *externalMusicKey;
@property (copy, nonatomic) NSString *thirdPlatformMusicID;
@property (copy, nonatomic) NSString *thirdPlatformName;
@property (copy, nonatomic) NSString *externalURL;
@property (copy, nonatomic) NSString *universalLink;
@property (copy, nonatomic) NSString *deepLink;

+ (id)JSONKeyPathsByPropertyKey;

- (id)thirdPlatformName;
- (id)externalMusicKey;
- (void)setExternalMusicKey:(id)arg0;
- (id)thirdPlatformMusicID;
- (void)setThirdPlatformMusicID:(id)arg0;
- (void)setThirdPlatformName:(id)arg0;
- (void).cxx_destruct;
- (void)setUniversalLink:(id)arg0;
- (id)deepLink;
- (void)setDeepLink:(id)arg0;
- (id)externalURL;
- (id)universalLink;
- (void)setExternalURL:(id)arg0;

@end