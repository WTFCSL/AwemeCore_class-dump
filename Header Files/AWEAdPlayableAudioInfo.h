//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAdPlayableAudioInfo : MTLModel <MTLJSONSerializing> {
    BOOL _shouldMute;
    NSString *_audioUrl;
}

@property (nonatomic) BOOL shouldMute;
@property (copy, nonatomic) NSString *audioUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)audioUrl;
- (void)setAudioUrl:(id)arg0;
- (void)setShouldMute:(BOOL)arg0;
- (void).cxx_destruct;
- (BOOL)shouldMute;

@end
