//
//     Generated by private class-dump
//

@class AWEGeneralSearchActivityTagConfigModel;

@interface AWEGeneralSearchActivityTagModel : AWEBaseApiModel {
    long long _tagID;
    AWEGeneralSearchActivityTagConfigModel *_tagConfig;
}

@property (nonatomic) long long tagID;
@property (retain, nonatomic) AWEGeneralSearchActivityTagConfigModel *tagConfig;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)tagID;
- (void)setTagID:(long long)arg0;
- (void).cxx_destruct;
- (id)tagConfig;
- (void)setTagConfig:(id)arg0;

@end
