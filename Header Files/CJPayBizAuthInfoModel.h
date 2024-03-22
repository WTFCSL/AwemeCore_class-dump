//
//     Generated by private class-dump
//

@class NSString, NSDictionary, CJPayAuthAgreementContentModel, NSArray;
@protocol CJPayMemAgreementModel;

@interface CJPayBizAuthInfoModel : JSONModel {
    BOOL _isNeedAuthorize;
    BOOL _isAuthed;
    BOOL _isConflict;
    NSString *_conflictActionURL;
    NSString *_idType;
    NSString *_idCodeMask;
    NSString *_idNameMask;
    CJPayAuthAgreementContentModel *_authAgreementContentModel;
    NSString *_guideMessage;
    NSDictionary *_protocolGroupNames;
    NSArray<CJPayMemAgreementModel> *_agreements;
    NSString *_protocolCheckBox;
}

@property (nonatomic) BOOL isNeedAuthorize;
@property (nonatomic) BOOL isAuthed;
@property (nonatomic) BOOL isConflict;
@property (copy, nonatomic) NSString *conflictActionURL;
@property (copy, nonatomic) NSString *idType;
@property (copy, nonatomic) NSString *idCodeMask;
@property (copy, nonatomic) NSString *idNameMask;
@property (retain, nonatomic) CJPayAuthAgreementContentModel *authAgreementContentModel;
@property (copy, nonatomic) NSString *guideMessage;
@property (copy, nonatomic) NSDictionary *protocolGroupNames;
@property (copy, nonatomic) NSArray<CJPayMemAgreementModel> *agreements;
@property (copy, nonatomic) NSString *protocolCheckBox;

+ (id)keyMapper;
+ (BOOL)propertyIsOptional:(id)arg0;

- (BOOL)isAuthed;
- (void)setIsAuthed:(BOOL)arg0;
- (id)disagreeContent;
- (id)tipsContent;
- (id)guideMessage;
- (id)protocolGroupNames;
- (id)agreements;
- (void)setAgreements:(id)arg0;
- (id)protocolCheckBox;
- (void)setProtocolCheckBox:(id)arg0;
- (id)idNameMask;
- (id)idCodeMask;
- (BOOL)isNeedAuthorize;
- (void)setProtocolGroupNames:(id)arg0;
- (void)setGuideMessage:(id)arg0;
- (id)authAgreementContentModel;
- (void)setIsNeedAuthorize:(BOOL)arg0;
- (void)setIsConflict:(BOOL)arg0;
- (id)conflictActionURL;
- (void)setConflictActionURL:(id)arg0;
- (void)setIdCodeMask:(id)arg0;
- (void)setIdNameMask:(id)arg0;
- (void)setAuthAgreementContentModel:(id)arg0;
- (void).cxx_destruct;
- (BOOL)isConflict;
- (id)idType;
- (void)setIdType:(id)arg0;

@end