//
//     Generated by private class-dump
//

@class NSArray, AFDSchoolStoryBasicInfoModel;

@interface AFDSchoolStoryDetailResponseModel : AWEBaseApiModel {
    AFDSchoolStoryBasicInfoModel *_schoolBasicInfo;
    NSArray *_activityArray;
}

@property (retain, nonatomic) AFDSchoolStoryBasicInfoModel *schoolBasicInfo;
@property (retain, nonatomic) NSArray *activityArray;

+ (id)schoolBasicInfoJSONTransformer;
+ (id)activityArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)schoolBasicInfo;
- (void)setSchoolBasicInfo:(id)arg0;
- (id)activityArray;
- (void)setActivityArray:(id)arg0;
- (void).cxx_destruct;

@end
