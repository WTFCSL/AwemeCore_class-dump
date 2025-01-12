//
//     Generated by private class-dump
//

@class NSNumber, AWEURLModel;

@interface AWEHumanEnhancedAudioModel : AWEBaseApiModel {
    AWEURLModel *_mainURL;
    double _loudless;
    double _peak;
    NSNumber *_bitRate;
}

@property (readonly, nonatomic) AWEURLModel *mainURL;
@property (nonatomic) double loudless;
@property (nonatomic) double peak;
@property (retain, nonatomic) NSNumber *bitRate;

+ (id)mainURLJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)mainURL;
- (double)loudless;
- (void)setLoudless:(double)arg0;
- (id)bitRate;
- (void).cxx_destruct;
- (void)setBitRate:(id)arg0;
- (double)peak;
- (void)setPeak:(double)arg0;

@end
