//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDXBridgeDspOpenAwemeDetailMethodParamModel : BDXBridgeModel {
    NSString *_sessionId;
    NSString *_musicId;
    NSString *_chartId;
    NSString *_awemeId;
    NSString *_version;
    NSDictionary *_extra;
}

@property (copy, nonatomic) NSString *sessionId;
@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *chartId;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSDictionary *extra;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (void)setAwemeId:(id)arg0;
- (void)setMusicId:(id)arg0;
- (id)awemeId;
- (id)musicId;
- (id)chartId;
- (void)setChartId:(id)arg0;
- (void)setVersion:(id)arg0;
- (void)setSessionId:(id)arg0;
- (void).cxx_destruct;
- (id)sessionId;
- (id)extra;
- (id)version;

@end
