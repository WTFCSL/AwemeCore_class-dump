//
//     Generated by private class-dump
//

@class NSString;

@interface VeLivePlayerStream : NSObject {
    int _bitrate;
    NSString *_url;
    long long _resolution;
    long long _protocol;
    long long _format;
    long long _type;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) long long resolution;
@property (nonatomic) int bitrate;
@property (nonatomic) long long protocol;
@property (nonatomic) long long format;
@property (nonatomic) long long type;

+ (long long)veLiveResolutionBytvlResolution:(id)arg0;
+ (long long)veLiveStreamTypeBytvlStreamType:(id)arg0;
+ (id)protocolTypeFromURL:(id)arg0;
+ (long long)veLiveFormatBytvlFormat:(id)arg0;
+ (long long)veLiveProtocolBytvlProtocl:(id)arg0;
+ (id)formatTypeFromURL:(id)arg0;
+ (id)tvlFormatByVeLivePlayerFormat:(long long)arg0;
+ (id)tvlProtoclByVeLivePlayerProtocol:(long long)arg0;
+ (id)tvlResolutionByVeLivePlayerResolution:(long long)arg0;
+ (id)tvlStreamTypeByVeLiveStreamType:(long long)arg0;

- (BOOL)isStreamValid;
- (long long)protocol;
- (void)setResolution:(long long)arg0;
- (id)init;
- (long long)resolution;
- (void).cxx_destruct;
- (void)setProtocol:(long long)arg0;
- (long long)type;
- (void)setUrl:(id)arg0;
- (int)bitrate;
- (void)setFormat:(long long)arg0;
- (void)setType:(long long)arg0;
- (id)description;
- (id)url;
- (long long)format;
- (void)setBitrate:(int)arg0;

@end