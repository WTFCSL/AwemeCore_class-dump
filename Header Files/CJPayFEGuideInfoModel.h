//
//     Generated by private class-dump
//

@class NSString;

@interface CJPayFEGuideInfoModel : JSONModel {
    NSString *_guideType;
    NSString *_url;
}

@property (copy, nonatomic) NSString *guideType;
@property (copy, nonatomic) NSString *url;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (id)guideType;
- (void)setGuideType:(id)arg0;
- (void).cxx_destruct;
- (void)setUrl:(id)arg0;
- (id)url;

@end
