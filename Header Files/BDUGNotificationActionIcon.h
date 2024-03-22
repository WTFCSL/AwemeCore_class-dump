//
//     Generated by private class-dump
//

@class NSString;

@interface BDUGNotificationActionIcon : NSObject {
    NSString *_templateImageName;
    NSString *_systemImageName;
}

@property (copy, nonatomic) NSString *templateImageName;
@property (copy, nonatomic) NSString *systemImageName;

+ (id)iconWithSystemImageName:(id)arg0;
+ (id)iconWithTemplateImageName:(id)arg0;

- (void)setTemplateImageName:(id)arg0;
- (void).cxx_destruct;
- (id)systemImageName;
- (void)setSystemImageName:(id)arg0;
- (id)templateImageName;

@end