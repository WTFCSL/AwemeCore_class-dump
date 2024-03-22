//
//     Generated by private class-dump
//

@class NSString, NSArray, AWECodeGenSearchCardConfigModel;

@interface AWECodeGenSearchCardModel : AWEBaseDataModel {
    BOOL _isNewVersion;
    NSString *_title;
    NSArray *_queryModelArray;
    AWECodeGenSearchCardConfigModel *_darkConfigModel;
    AWECodeGenSearchCardConfigModel *_lightConfigModel;
    long long _index;
    long long _startTime;
    long long _endTime;
    NSString *_modelID;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSArray *queryModelArray;
@property (retain, nonatomic) AWECodeGenSearchCardConfigModel *darkConfigModel;
@property (retain, nonatomic) AWECodeGenSearchCardConfigModel *lightConfigModel;
@property (nonatomic) BOOL isNewVersion;
@property (nonatomic) long long index;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (copy, nonatomic) NSString *modelID;

+ (id)propertyToModelClassInArrayMap;
+ (id)JSONKeyPathsByPropertyKey;

- (id)lightConfigModel;
- (id)darkConfigModel;
- (id)queryModelArray;
- (BOOL)isNewVersion;
- (void)setIsNewVersion:(BOOL)arg0;
- (void)setQueryModelArray:(id)arg0;
- (void)setDarkConfigModel:(id)arg0;
- (void)setLightConfigModel:(id)arg0;
- (void)setModelID:(id)arg0;
- (void)setIndex:(long long)arg0;
- (void)setStartTime:(long long)arg0;
- (void).cxx_destruct;
- (long long)endTime;
- (id)title;
- (long long)index;
- (long long)startTime;
- (id)modelID;
- (void)setEndTime:(long long)arg0;
- (void)setTitle:(id)arg0;

@end