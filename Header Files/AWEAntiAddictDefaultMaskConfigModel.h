//
//     Generated by private class-dump
//

@class NSString;

@interface AWEAntiAddictDefaultMaskConfigModel : MTLModel <MTLJSONSerializing> {
    NSString *_mainTitle;
    NSString *_subTitle;
    NSString *_enterText;
    NSString *_exitText;
    NSString *_laterRemindText;
}

@property (readonly, copy, nonatomic) NSString *mainTitle;
@property (readonly, copy, nonatomic) NSString *subTitle;
@property (readonly, copy, nonatomic) NSString *enterText;
@property (readonly, copy, nonatomic) NSString *exitText;
@property (readonly, copy, nonatomic) NSString *laterRemindText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)enterText;
- (id)exitText;
- (id)laterRemindText;
- (void).cxx_destruct;
- (id)subTitle;
- (id)mainTitle;

@end
