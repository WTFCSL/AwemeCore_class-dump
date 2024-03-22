//
//     Generated by private class-dump
//

@class NSString, NSDictionary, NSData;

@interface QQApiVideoForQZoneObject : QQApiObject {
    NSString *_assetURL;
    NSDictionary *_extMap;
    NSData *_videoData;
}

@property (retain, nonatomic) NSString *assetURL;
@property (retain, nonatomic) NSDictionary *extMap;
@property (retain, nonatomic) NSData *videoData;

+ (id)objectWithAssetURL:(id)arg0 title:(id)arg1 extMap:(id)arg2;
+ (id)objectWithVideoData:(id)arg0 title:(id)arg1 extMap:(id)arg2;

- (id)videoData;
- (void)setVideoData:(id)arg0;
- (void)setExtMap:(id)arg0;
- (id)extMap;
- (id)initWithAssetURL:(id)arg0 title:(id)arg1 extMap:(id)arg2;
- (id)initWithVideoData:(id)arg0 title:(id)arg1 extMap:(id)arg2;
- (id)assetURL;
- (void)dealloc;
- (void)setAssetURL:(id)arg0;

@end
