//
//     Generated by private class-dump
//

@class NSDictionary, BDUGLuckyPollingActivityCommon;

@interface BDUGLuckyPollingActivityInfo : BDUGLuckyJSONModel {
    BDUGLuckyPollingActivityCommon *_activityCommon;
    NSDictionary *_activityCustom;
}

@property (retain, nonatomic) BDUGLuckyPollingActivityCommon *activityCommon;
@property (copy, nonatomic) NSDictionary *activityCustom;

+ (id)modelCustomPropertyMapper;

- (id)activityCommon;
- (void)setActivityCommon:(id)arg0;
- (id)activityCustom;
- (void)setActivityCustom:(id)arg0;
- (id)initWithDictionary:(id)arg0 error:(id *)arg1;
- (void).cxx_destruct;

@end
