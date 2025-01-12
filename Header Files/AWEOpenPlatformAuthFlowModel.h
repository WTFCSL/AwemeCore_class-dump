//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface AWEOpenPlatformAuthFlowModel : MTLModel <MTLJSONSerializing> {
    BOOL _notSkipConfirm;
    NSString *_clientKey;
    NSDictionary *_scopes;
    NSString *_redirectURI;
    NSDictionary *_identityScope;
    NSString *_userType;
    NSString *_QRToken;
    NSString *_enterFrom;
    NSDictionary *_templateIDs;
    NSString *_commentID;
    NSString *_appIdentity;
    unsigned long long _apiVersion;
    NSString *_customSceneAuthWhen;
    NSString *_openExtraStr;
}

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSString *redirectURI;
@property (copy, nonatomic) NSDictionary *identityScope;
@property (copy, nonatomic) NSString *userType;
@property (copy, nonatomic) NSString *QRToken;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *templateIDs;
@property (nonatomic) BOOL notSkipConfirm;
@property (copy, nonatomic) NSString *commentID;
@property (copy, nonatomic) NSString *appIdentity;
@property (nonatomic) unsigned long long apiVersion;
@property (copy, nonatomic) NSString *customSceneAuthWhen;
@property (copy, nonatomic) NSString *openExtraStr;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)commentID;
- (void)setCommentID:(id)arg0;
- (id)appIdentity;
- (void)setAppIdentity:(id)arg0;
- (id)identityScope;
- (void)setIdentityScope:(id)arg0;
- (id)QRToken;
- (void)setQRToken:(id)arg0;
- (id)templateIDs;
- (void)setTemplateIDs:(id)arg0;
- (BOOL)notSkipConfirm;
- (void)setNotSkipConfirm:(BOOL)arg0;
- (id)customSceneAuthWhen;
- (void)setCustomSceneAuthWhen:(id)arg0;
- (id)openExtraStr;
- (void)setOpenExtraStr:(id)arg0;
- (id)clientKey;
- (id)userType;
- (id)scopes;
- (void)setScopes:(id)arg0;
- (id)init;
- (void).cxx_destruct;
- (void)setApiVersion:(unsigned long long)arg0;
- (void)setClientKey:(id)arg0;
- (unsigned long long)apiVersion;
- (void)setUserType:(id)arg0;
- (id)redirectURI;
- (void)setRedirectURI:(id)arg0;

@end
