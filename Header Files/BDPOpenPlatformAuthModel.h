//
//     Generated by private class-dump
//

@class NSString, NSDictionary;

@interface BDPOpenPlatformAuthModel : NSObject {
    BOOL _notSkipConfirm;
    NSString *_clientKey;
    NSDictionary *_scopes;
    NSDictionary *_identityScope;
    NSString *_commentID;
    NSDictionary *_extraData;
}

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSDictionary *identityScope;
@property (copy, nonatomic) NSString *commentID;
@property (nonatomic) BOOL notSkipConfirm;
@property (copy, nonatomic) NSDictionary *extraData;

- (id)commentID;
- (void)setCommentID:(id)arg0;
- (id)identityScope;
- (void)setIdentityScope:(id)arg0;
- (BOOL)notSkipConfirm;
- (void)setNotSkipConfirm:(BOOL)arg0;
- (id)clientKey;
- (id)scopes;
- (void)setScopes:(id)arg0;
- (void).cxx_destruct;
- (void)setClientKey:(id)arg0;
- (void)setExtraData:(id)arg0;
- (id)extraData;

@end