//
//     Generated by private class-dump
//

@class NSString, AWECommentModel, NSDictionary;

@interface AWECommentActionModel : NSObject {
    BOOL _isSubComment;
    BOOL _attitudeWithDigg;
    NSString *_referString;
    NSString *_enterFrom;
    NSString *_previousPage;
    id /* block */ _completion;
    AWECommentModel *_comment;
    NSDictionary *_extraParams;
    long long _actionType;
    NSString *_attitudeType;
}

@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWECommentModel *comment;
@property (retain, nonatomic) NSDictionary *extraParams;
@property (nonatomic) BOOL isSubComment;
@property (nonatomic) long long actionType;
@property (copy, nonatomic) NSString *attitudeType;
@property (nonatomic) BOOL attitudeWithDigg;

- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (id)enterFrom;
- (BOOL)attitudeWithDigg;
- (id)initWithComment:(id)arg0 referString:(id)arg1 enterFrom:(id)arg2 previousPage:(id)arg3 isSubComment:(BOOL)arg4 actionType:(long long)arg5 attitudeType:(id)arg6 attitudeWithDigg:(BOOL)arg7 extraParams:(id)arg8 completion:(id /* block */)arg9;
- (void)setIsSubComment:(BOOL)arg0;
- (void)setAttitudeType:(id)arg0;
- (id)attitudeType;
- (BOOL)isSubComment;
- (id)extraParams;
- (void)setExtraParams:(id)arg0;
- (void)setAttitudeWithDigg:(BOOL)arg0;
- (void)setActionType:(long long)arg0;
- (long long)actionType;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;
- (id)comment;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;
- (void)setComment:(id)arg0;

@end
