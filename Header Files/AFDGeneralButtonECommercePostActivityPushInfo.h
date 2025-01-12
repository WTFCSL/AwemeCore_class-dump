//
//     Generated by private class-dump
//

@class NSString;

@interface AFDGeneralButtonECommercePostActivityPushInfo : MTLModel <MTLJSONSerializing> {
    NSString *_title;
    NSString *_content;
    NSString *_iconUrl;
    NSString *_actionTitle;
    NSString *_activityUrl;
}

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *iconUrl;
@property (copy, nonatomic) NSString *actionTitle;
@property (copy, nonatomic) NSString *activityUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconUrl;
- (void)setIconUrl:(id)arg0;
- (id)activityUrl;
- (void)setActivityUrl:(id)arg0;
- (id)actionTitle;
- (void).cxx_destruct;
- (id)content;
- (void)setActionTitle:(id)arg0;
- (id)title;
- (void)setContent:(id)arg0;
- (void)setTitle:(id)arg0;

@end
