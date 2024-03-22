//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@interface AWEVSNoticeDetailModel : AWEBaseApiModel {
    NSString *_vsSchemaUrl;
    NSNumber *_vs;
    NSNumber *_episodeId;
}

@property (copy, nonatomic) NSString *vsSchemaUrl;
@property (retain, nonatomic) NSNumber *vs;
@property (retain, nonatomic) NSNumber *episodeId;

+ (id)JSONKeyPathsByPropertyKey;

- (id)vs;
- (id)vsSchemaUrl;
- (void)setVs:(id)arg0;
- (void)setVsSchemaUrl:(id)arg0;
- (void).cxx_destruct;
- (id)episodeId;
- (void)setEpisodeId:(id)arg0;

@end
