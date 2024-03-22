//
//     Generated by private class-dump
//

@class NSString;

@interface AWECommonRelationManager : NSObject <AWECommonRelationManagerProtocol> {
    BOOL _fullScreenPresentProfile;
    NSString *_enterFrom;
    NSString *_previousPage;
    long long _fromPageType;
    long long _prePageType;
}

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) BOOL fullScreenPresentProfile;
@property (nonatomic) long long fromPageType;
@property (nonatomic) long long prePageType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setEnterFrom:(id)arg0;
- (id)enterFrom;
- (void)setPrePageType:(long long)arg0;
- (void)setFromPageType:(long long)arg0;
- (long long)fromPageType;
- (long long)prePageType;
- (void)unfollowUser:(id)arg0 completion:(id /* block */)arg1;
- (void)transferToCommonRelationProfileForUser:(id)arg0 enterMethod:(id)arg1 extraRouterParams:(id)arg2;
- (void)setFullScreenPresentProfile:(BOOL)arg0;
- (void)followCommonRelation:(id)arg0 completion:(id /* block */)arg1;
- (void)trackUnfollow:(id)arg0;
- (id)p_commonRelationContextForUser:(id)arg0;
- (void)trackFollowCommonRelation:(id)arg0;
- (id)p_profileURLParamsForUser:(id)arg0 enterMethod:(id)arg1;
- (BOOL)fullScreenPresentProfile;
- (void)trackEnterCommonRelationProfile:(id)arg0 enterMethod:(id)arg1;
- (void).cxx_destruct;
- (id)previousPage;
- (void)setPreviousPage:(id)arg0;

@end