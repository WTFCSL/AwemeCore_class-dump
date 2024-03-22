//
//     Generated by private class-dump
//

@class NSDictionary, AWEUserModel, NSString;
@protocol AWEAwemeDetailBottomBarCommonContextProtocol;

@interface AFDFollowRequestBottomBarContext : NSObject <AFDFollowRequestBottomBarContextProtocol> {
    id<AWEAwemeDetailBottomBarCommonContextProtocol> _commonCtx;
    NSDictionary *_logExtraDict;
    AWEUserModel *_homepageUser;
    id /* block */ _updateBlock;
}

@property (retain, nonatomic) id<AWEAwemeDetailBottomBarCommonContextProtocol> commonCtx;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (retain, nonatomic) AWEUserModel *homepageUser;
@property (copy, nonatomic) id /* block */ updateBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (void)setCommonCtx:(id)arg0;
- (id)homepageUser;
- (void)setHomepageUser:(id)arg0;
- (id)commonCtx;
- (void).cxx_destruct;
- (id /* block */)updateBlock;
- (void)setUpdateBlock:(id /* block */)arg0;

@end