//
//     Generated by private class-dump
//

@class NSString;

@interface AFDSetSchoolPopupResponseModel : AWEBaseApiModel {
    BOOL _shouldShow;
    NSString *_defaultSchoolName;
    NSString *_comment;
}

@property (nonatomic) BOOL shouldShow;
@property (copy, nonatomic) NSString *defaultSchoolName;
@property (copy, nonatomic) NSString *comment;

+ (id)JSONKeyPathsByPropertyKey;

- (id)defaultSchoolName;
- (void)setDefaultSchoolName:(id)arg0;
- (void).cxx_destruct;
- (id)comment;
- (BOOL)shouldShow;
- (void)setComment:(id)arg0;
- (void)setShouldShow:(BOOL)arg0;

@end