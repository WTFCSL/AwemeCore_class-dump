//
//     Generated by private class-dump
//

@class NSString;

@interface BDXBridgeSetCurrentSelectedVideoMethodParamModel : BDXBridgeModel {
    NSString *_remind_type;
    NSString *_aid;
    NSString *_primary_title;
    NSString *_secondary_title;
}

@property (copy, nonatomic) NSString *remind_type;
@property (copy, nonatomic) NSString *aid;
@property (copy, nonatomic) NSString *primary_title;
@property (copy, nonatomic) NSString *secondary_title;

+ (id)requiredKeyPaths;
+ (id)JSONKeyPathsByPropertyKey;

- (id)remind_type;
- (void)setPrimary_title:(id)arg0;
- (void)setSecondary_title:(id)arg0;
- (void)setRemind_type:(id)arg0;
- (id)primary_title;
- (id)secondary_title;
- (void).cxx_destruct;
- (void)setAid:(id)arg0;
- (id)aid;

@end
