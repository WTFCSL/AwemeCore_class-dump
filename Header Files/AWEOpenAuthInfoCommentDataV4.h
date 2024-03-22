//
//     Generated by private class-dump
//

@class NSString, NSArray;

@interface AWEOpenAuthInfoCommentDataV4 : MTLModel <MTLJSONSerializing, AWEOpenAuthInfoCommentDataProtocol> {
    NSString *commentId;
    NSArray *scopes;
    NSString *comment;
    long long showCommentStatus;
    NSString *showCommentMessage;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *commentId;
@property (copy, nonatomic) NSArray *scopes;
@property (copy, nonatomic) NSString *comment;
@property (nonatomic) long long showCommentStatus;
@property (copy, nonatomic) NSString *showCommentMessage;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setCommentId:(id)arg0;
- (id)commentId;
- (long long)showCommentStatus;
- (void)setShowCommentStatus:(long long)arg0;
- (id)showCommentMessage;
- (void)setShowCommentMessage:(id)arg0;
- (id)scopes;
- (void)setScopes:(id)arg0;
- (void).cxx_destruct;
- (id)comment;
- (void)setComment:(id)arg0;

@end
