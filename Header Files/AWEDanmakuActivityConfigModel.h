//
//     Generated by private class-dump
//

@class NSArray;

@interface AWEDanmakuActivityConfigModel : AWEBaseApiModel {
    NSArray *_pendants;
    NSArray *_eggs;
}

@property (copy, nonatomic) NSArray *pendants;
@property (copy, nonatomic) NSArray *eggs;

+ (id)pendantsJSONTransformer;
+ (id)eggsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)pendants;
- (id)eggs;
- (id)downloadResourcesModels;
- (void)setPendants:(id)arg0;
- (void)setEggs:(id)arg0;
- (void).cxx_destruct;

@end
