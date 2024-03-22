//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEUndertakeActionFeedBottomBanner : MTLModel <MTLJSONSerializing> {
    NSString *_iconPic;
    NSString *_titleText;
    NSString *_descriptionText;
    NSString *_buttonText;
    NSString *_actionSchema;
    double _duration;
    NSDictionary *_extra;
    NSDictionary *_logExtra;
}

@property (copy, nonatomic) NSString *iconPic;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *actionSchema;
@property (nonatomic) double duration;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)arg0;
- (id)logExtra;
- (void)setLogExtra:(id)arg0;
- (id)actionSchema;
- (void)setActionSchema:(id)arg0;
- (id)iconPic;
- (void)setIconPic:(id)arg0;
- (void)setTitleText:(id)arg0;
- (void)setDescriptionText:(id)arg0;
- (void).cxx_destruct;
- (id)extra;
- (id)titleText;
- (double)duration;
- (id)buttonText;
- (id)descriptionText;
- (void)setDuration:(double)arg0;
- (void)setButtonText:(id)arg0;

@end
