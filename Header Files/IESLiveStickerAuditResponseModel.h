//
//     Generated by private class-dump
//

@class NSNumber, NSString, NSDictionary;

@interface IESLiveStickerAuditResponseModel : MTLModel <MTLJSONSerializing> {
    BOOL _canEdit;
    NSNumber *_auditStatus;
    NSString *_auditNopassWarn;
    NSString *_prompt;
}

@property (readonly, nonatomic) NSNumber *auditStatus;
@property (readonly, copy, nonatomic) NSString *auditNopassWarn;
@property (readonly, nonatomic) BOOL canEdit;
@property (readonly, copy, nonatomic) NSString *prompt;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)auditStatus;
- (id)auditNopassWarn;
- (id)prompt;
- (void).cxx_destruct;
- (BOOL)canEdit;

@end
