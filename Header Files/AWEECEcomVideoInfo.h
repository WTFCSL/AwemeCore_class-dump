//
//     Generated by private class-dump
//

@class NSString;

@interface AWEECEcomVideoInfo : MTLModel <MTLJSONSerializing> {
    long long _videoType;
    NSString *_videoProductIDs;
    NSString *_windowProductIDs;
}

@property (nonatomic) long long videoType;
@property (copy, nonatomic) NSString *videoProductIDs;
@property (copy, nonatomic) NSString *windowProductIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)videoProductIDs;
- (void)setVideoProductIDs:(id)arg0;
- (id)windowProductIDs;
- (void)setWindowProductIDs:(id)arg0;
- (void).cxx_destruct;
- (long long)videoType;
- (void)setVideoType:(long long)arg0;

@end
