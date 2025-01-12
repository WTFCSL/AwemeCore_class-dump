//
//     Generated by private class-dump
//

@class NSString, AWEURLModel;

@interface AWEXiguaCommentRelatedBarModel : MTLModel <AWECommentListHeaderViewExtraInfoProtocol, MTLJSONSerializing> {
    NSString *_appID;
    AWEURLModel *_icon;
    NSString *_title;
    NSString *_openUrl;
    unsigned long long _type;
    NSString *_openAppSchema;
    NSString *_rightDesc;
    NSString *_jumpConfirmTitle;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *appID;
@property (copy, nonatomic) AWEURLModel *icon;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *openUrl;
@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *openAppSchema;
@property (copy, nonatomic) NSString *rightDesc;
@property (copy, nonatomic) NSString *jumpConfirmTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)iconImageURLs;
- (id)extraTitle;
- (id)couponDescription;
- (void)loadExtraDescriptionWithCompletion:(id /* block */)arg0;
- (id)customExtraView;
- (void)setOpenUrl:(id)arg0;
- (id)openUrl;
- (void)setRightDesc:(id)arg0;
- (id)rightDesc;
- (id)jumpConfirmTitle;
- (void)setJumpConfirmTitle:(id)arg0;
- (id)openAppSchema;
- (void)setOpenAppSchema:(id)arg0;
- (id)icon;
- (void)setAppID:(id)arg0;
- (void).cxx_destruct;
- (unsigned long long)type;
- (id)iconImageName;
- (id)title;
- (void)setType:(unsigned long long)arg0;
- (id)appID;
- (void)setIcon:(id)arg0;
- (void)setTitle:(id)arg0;
- (id)componentSeparator;

@end
