//
//     Generated by private class-dump
//

@interface AWECoCreatorDataController : NSObject

+ (void)configureCoCreatorExternModelWithModel:(id)arg0;
+ (id)creatAuthorWithModel:(id)arg0;
+ (void)requestAwemeListWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)requestAwemeCountWithModel:(id)arg0 completion:(id /* block */)arg1;
+ (void)trackPrefetchCocreatorPost;
+ (void)configureVerifyInfoWithModel:(id)arg0 veriryInfoDict:(id)arg1;
+ (void)requestVerificationWithSecUserIDs:(id)arg0 completion:(id /* block */)arg1;
+ (BOOL)prelodCoCreatorInfoWithModel:(id)arg0 currentTime:(double)arg1;
+ (void)requestCoCreatorInfoWithModel:(id)arg0 coCreatorModel:(id)arg1 requestVerifyInfo:(BOOL)arg2 completion:(id /* block */)arg3;

@end