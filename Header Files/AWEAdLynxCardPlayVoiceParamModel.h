//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdLynxCardPlayVoiceParamModel : BDXBridgeModel {
    BOOL _needVolumeDown;
    NSString *_url;
}

@property (copy, nonatomic) NSString *url;
@property (nonatomic) BOOL needVolumeDown;

+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)needVolumeDown;
- (void)setNeedVolumeDown:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end
