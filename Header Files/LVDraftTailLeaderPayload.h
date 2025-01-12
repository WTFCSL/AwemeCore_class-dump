//
//     Generated by private class-dump
//

@class NSString, LVDraftTailLeaderPackage;

@interface LVDraftTailLeaderPayload : LVDraftVideoPayload {
    struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *__ptr_; struct __shared_weak_count *__cntrl_; } _cppmodel;
}

@property (retain, nonatomic) LVDraftTailLeaderPackage *tailPackage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *accountID;
@property (nonatomic) BOOL hiddenContent;
@property (copy, nonatomic) NSString *textPrivate;

- (BOOL)isDefaultContent;
- (id)initWithCPPModel:(struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *x0; struct __shared_weak_count *x1; })arg0;
- (id)copyToAnother;
- (id)copyToNewObject;
- (void)copyCategoryToNewObject:(id)arg0;
- (void)copyCategoryToNewObject:(id)arg0;
- (struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *x0; struct __shared_weak_count *x1; })cppmodel;
- (void)setCPPModel:(struct shared_ptr<CutSame::MaterialTailLeader> { struct MaterialTailLeader *x0; struct __shared_weak_count *x1; })arg0;
- (id)textPrivate;
- (void)setTextPrivate:(id)arg0;
- (BOOL)hiddenContent;
- (void)setHiddenContent:(BOOL)arg0;
- (void)setTailPackage:(id)arg0;
- (id)tailPackage;
- (void)updateVideoAsset;
- (id)accountInfoRenderContent;
- (id)init;
- (void).cxx_destruct;
- (void)setText:(id)arg0;
- (id)copyWithZone:(struct _NSZone { } *)arg0;
- (id)title;
- (id)accountID;
- (id)text;
- (id)video;
- (void)setAccountID:(id)arg0;
- (id).cxx_construct;
- (void)setTitle:(id)arg0;
- (id)renderContent;
- (BOOL)hasAccountInfo;

@end
