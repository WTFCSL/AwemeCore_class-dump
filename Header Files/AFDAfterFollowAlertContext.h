//
//     Generated by private class-dump
//

@class NSString, AWEUserModel;

@interface AFDAfterFollowAlertContext : NSObject {
    BOOL _isEnterprise;
    NSString *_mobileKey;
    NSString *_enterFrom;
    AWEUserModel *_user;
    id /* block */ _completion;
}

@property (copy, nonatomic) NSString *mobileKey;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isEnterprise;
@property (retain, nonatomic) AWEUserModel *user;
@property (copy, nonatomic) id /* block */ completion;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (id)mobileKey;
- (void)setMobileKey:(id)arg0;
- (void)setIsEnterprise:(BOOL)arg0;
- (void)setUser:(id)arg0;
- (BOOL)isEnterprise;
- (id)user;
- (id /* block */)completion;
- (void).cxx_destruct;
- (void)setCompletion:(id /* block */)arg0;

@end
