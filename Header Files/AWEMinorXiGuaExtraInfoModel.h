//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEMinorXiGuaExtraInfoModel : MTLModel <MTLJSONSerializing> {
    long long _IPCategory;
    NSString *_categoryName;
    NSString *_area;
    NSString *_year;
    long long _status;
    long long _duration;
    NSArray *_aliasList;
    NSArray *_relatedStaffList;
    NSArray *_videoTitleList;
}

@property (nonatomic) long long IPCategory;
@property (copy, nonatomic) NSString *categoryName;
@property (copy, nonatomic) NSString *area;
@property (copy, nonatomic) NSString *year;
@property (nonatomic) long long status;
@property (nonatomic) long long duration;
@property (copy, nonatomic) NSArray *aliasList;
@property (copy, nonatomic) NSArray *relatedStaffList;
@property (copy, nonatomic) NSArray *videoTitleList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (long long)IPCategory;
- (void)setIPCategory:(long long)arg0;
- (id)aliasList;
- (void)setAliasList:(id)arg0;
- (id)relatedStaffList;
- (void)setRelatedStaffList:(id)arg0;
- (id)videoTitleList;
- (void)setVideoTitleList:(id)arg0;
- (id)year;
- (void)setYear:(id)arg0;
- (void).cxx_destruct;
- (long long)status;
- (long long)duration;
- (void)setStatus:(long long)arg0;
- (void)setDuration:(long long)arg0;
- (id)categoryName;
- (void)setCategoryName:(id)arg0;
- (id)area;
- (void)setArea:(id)arg0;

@end