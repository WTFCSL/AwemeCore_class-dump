//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface BDXVideoPlayerVideoModel : NSObject {
    BOOL _isCanPlay;
    BOOL _repeated;
    NSString *_itemID;
    NSString *_playUrlString;
    NSString *_customhost;
    NSString *_playAutoToken;
    NSString *_playerVersion;
    NSString *_protocolVer;
    NSArray *_hosts;
    unsigned long long _apiVersion;
}

@property (nonatomic) BOOL isCanPlay;
@property (copy, nonatomic) NSString *itemID;
@property (copy, nonatomic) NSString *playUrlString;
@property (nonatomic) BOOL repeated;
@property (copy, nonatomic) NSString *customhost;
@property (copy, nonatomic) NSString *playAutoToken;
@property (copy, nonatomic) NSString *playerVersion;
@property (copy, nonatomic) NSString *protocolVer;
@property (retain, nonatomic) NSArray *hosts;
@property (nonatomic) unsigned long long apiVersion;

- (BOOL)isCanPlay;
- (void)setIsCanPlay:(BOOL)arg0;
- (id)playerVersion;
- (void)setPlayerVersion:(id)arg0;
- (void)setPlayUrlString:(id)arg0;
- (id)playUrlString;
- (id)playAutoToken;
- (id)customhost;
- (void)setCustomhost:(id)arg0;
- (void)setPlayAutoToken:(id)arg0;
- (id)protocolVer;
- (void)setProtocolVer:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (id)itemID;
- (void)setItemID:(id)arg0;
- (void)setApiVersion:(unsigned long long)arg0;
- (id)hosts;
- (void)setHosts:(id)arg0;
- (unsigned long long)apiVersion;
- (BOOL)repeated;
- (void)setRepeated:(BOOL)arg0;

@end
