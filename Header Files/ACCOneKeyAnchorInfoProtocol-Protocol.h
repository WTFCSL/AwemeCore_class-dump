//
//     Generated by private class-dump
//

@class NSString;

@protocol ACCOneKeyAnchorInfoProtocol <NSObject>

@property (copy, nonatomic) NSString *templateId;
@property (copy, nonatomic) NSString *templateTitle;
@property (nonatomic) long long templateSource;
@property (nonatomic) BOOL enabled;
@property (nonatomic) BOOL firstGuide;
@property (nonatomic) BOOL canUseOriginTemplate;
@property (nonatomic) BOOL usingOriginTemplate;
@property (copy, nonatomic) NSString *albumTip;

- (id)templateTitle;
- (void)setTemplateTitle:(id)arg0;
- (BOOL)usingOriginTemplate;
- (BOOL)canUseOriginTemplate;
- (void)setUsingOriginTemplate:(BOOL)arg0;
- (id)albumTip;
- (BOOL)firstGuide;
- (void)setFirstGuide:(BOOL)arg0;
- (void)setCanUseOriginTemplate:(BOOL)arg0;
- (void)setAlbumTip:(id)arg0;
- (BOOL)shouldUseOriginTemplate;
- (void)markShowedFirstGuide;
- (BOOL)shouldShowFirstGuide;
- (BOOL)enabled;
- (void)setEnabled:(BOOL)arg0;
- (id)templateId;
- (void)setTemplateId:(id)arg0;
- (id)initWithJson:(id)arg0;
- (long long)templateSource;
- (void)setTemplateSource:(long long)arg0;

@end