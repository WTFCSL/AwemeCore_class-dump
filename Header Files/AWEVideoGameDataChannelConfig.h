//
//     Generated by private class-dump
//

@class NSString;

@interface AWEVideoGameDataChannelConfig : AWEBaseApiModel {
    NSString *_gumID;
    NSString *_gameID;
    long long _videoStayLimit;
}

@property (copy, nonatomic) NSString *gumID;
@property (copy, nonatomic) NSString *gameID;
@property (nonatomic) long long videoStayLimit;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)videoStayLimit;
- (void)setGameID:(id)arg0;
- (id)gumID;
- (void)setGumID:(id)arg0;
- (void)setVideoStayLimit:(long long)arg0;
- (void).cxx_destruct;
- (id)gameID;

@end