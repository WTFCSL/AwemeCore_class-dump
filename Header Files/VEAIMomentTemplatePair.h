//
//     Generated by private class-dump
//

@class NSString;

@interface VEAIMomentTemplatePair : NSObject {
    NSString *_momentId;
    long long _templateId;
    long long _momentSource;
}

@property (copy, nonatomic) NSString *momentId;
@property (nonatomic) long long templateId;
@property (nonatomic) long long momentSource;

- (long long)momentSource;
- (void)setMomentSource:(long long)arg0;
- (id)momentId;
- (void)setMomentId:(id)arg0;
- (void).cxx_destruct;
- (long long)templateId;
- (void)setTemplateId:(long long)arg0;

@end
