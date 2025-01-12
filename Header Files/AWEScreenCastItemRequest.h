//
//     Generated by private class-dump
//

@class NSDictionary, NSArray, NSString;

@interface AWEScreenCastItemRequest : NSObject {
    NSDictionary *_eventParams;
    NSArray *_resolutionInfos;
    NSString *_resolution;
    NSString *_title;
    NSString *_vid;
    NSString *_authToken;
    NSString *_bizToken;
    unsigned long long _startPosition;
    unsigned long long _videoDuration;
    unsigned long long _uiType;
    NSString *_videoID;
    unsigned long long _apiVersion;
}

@property (copy, nonatomic) NSDictionary *eventParams;
@property (copy, nonatomic) NSArray *resolutionInfos;
@property (copy, nonatomic) NSString *resolution;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *vid;
@property (copy, nonatomic) NSString *authToken;
@property (copy, nonatomic) NSString *bizToken;
@property (nonatomic) unsigned long long startPosition;
@property (nonatomic) unsigned long long videoDuration;
@property (nonatomic) unsigned long long uiType;
@property (copy, nonatomic) NSString *videoID;
@property (nonatomic) unsigned long long apiVersion;

- (id)vid;
- (void)setVid:(id)arg0;
- (void)setEventParams:(id)arg0;
- (id)bizToken;
- (void)setBizToken:(id)arg0;
- (id)initWithAwemeModel:(id)arg0 dictionary:(id)arg1;
- (id)resolutionInfos;
- (void)setResolutionInfos:(id)arg0;
- (void)setAuthToken:(id)arg0;
- (id)authToken;
- (void)setResolution:(id)arg0;
- (id)resolution;
- (void).cxx_destruct;
- (id)title;
- (void)setApiVersion:(unsigned long long)arg0;
- (unsigned long long)videoDuration;
- (unsigned long long)apiVersion;
- (void)setTitle:(id)arg0;
- (unsigned long long)startPosition;
- (void)setStartPosition:(unsigned long long)arg0;
- (void)setVideoDuration:(unsigned long long)arg0;
- (id)videoID;
- (void)setVideoID:(id)arg0;
- (unsigned long long)uiType;
- (void)setUiType:(unsigned long long)arg0;
- (id)eventParams;

@end
