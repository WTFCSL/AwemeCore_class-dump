//
//     Generated by private class-dump
//

@class NSString, NSArray, AWESearchHotSpotRelatedVSProgramLiveModel, AWESearchHotSpotRelatedVSProgramUserModel, AWESearchHotSpotRelatedVSProgramVideoModel;

@interface AWESearchHotSpotRelatedInfoModel : AWEBaseApiModel {
    long long _type;
    NSString *_title;
    NSArray *_userList;
    NSArray *_backgroundList;
    AWESearchHotSpotRelatedVSProgramVideoModel *_vsVideoModel;
    AWESearchHotSpotRelatedVSProgramLiveModel *_vsLiveModel;
    AWESearchHotSpotRelatedVSProgramUserModel *_vsUserModel;
}

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSArray *userList;
@property (retain, nonatomic) NSArray *backgroundList;
@property (retain, nonatomic) AWESearchHotSpotRelatedVSProgramVideoModel *vsVideoModel;
@property (retain, nonatomic) AWESearchHotSpotRelatedVSProgramLiveModel *vsLiveModel;
@property (retain, nonatomic) AWESearchHotSpotRelatedVSProgramUserModel *vsUserModel;

+ (id)userListJSONTransformer;
+ (id)backgroundListJSONTransformer;
+ (id)vsVideoModelJSONTransformer;
+ (id)vsLiveModelJSONTransformer;
+ (id)vsUserModelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void)setUserList:(id)arg0;
- (id)backgroundList;
- (void)setBackgroundList:(id)arg0;
- (id)vsVideoModel;
- (void)setVsVideoModel:(id)arg0;
- (id)vsLiveModel;
- (void)setVsLiveModel:(id)arg0;
- (id)vsUserModel;
- (void)setVsUserModel:(id)arg0;
- (void).cxx_destruct;
- (long long)type;
- (id)title;
- (void)setType:(long long)arg0;
- (id)userList;
- (void)setTitle:(id)arg0;

@end
