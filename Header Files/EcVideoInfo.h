//
//     Generated by private class-dump
//

@class NSString, EcVideoPlayInfo;

@interface EcVideoInfo : NSObject {
    NSString *_assetId;
    long long _status;
    EcVideoPlayInfo *_p360;
    EcVideoPlayInfo *_p480;
    EcVideoPlayInfo *_p720;
}

@property (copy, nonatomic) NSString *assetId;
@property (nonatomic) long long status;
@property (retain, nonatomic) EcVideoPlayInfo *p360;
@property (retain, nonatomic) EcVideoPlayInfo *p480;
@property (retain, nonatomic) EcVideoPlayInfo *p720;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;

- (double)lastRequestTime;
- (void)setLastRequestTime:(double)arg0;
- (id)p360;
- (void)setP360:(id)arg0;
- (id)p480;
- (void)setP480:(id)arg0;
- (id)p720;
- (void)setP720:(id)arg0;
- (id)initWithVideoInfo:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (id)assetId;
- (void)setStatus:(long long)arg0;
- (void)setAssetId:(id)arg0;
- (id)description;

@end
