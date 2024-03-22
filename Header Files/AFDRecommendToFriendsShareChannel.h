//
//     Generated by private class-dump
//

@class NSString;

@interface AFDRecommendToFriendsShareChannel : AWEShareBaseChannel <AWEShareItemDelegate> {
    BOOL _originHasRecommendedState;
}

@property (nonatomic) BOOL originHasRecommendedState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)shareImage;
- (void)shareItem:(id)arg0 willAppear:(BOOL)arg1;
- (long long)shareCategory;
- (void)shareWithCompletion:(id /* block */)arg0;
- (void)setOriginHasRecommendedState:(BOOL)arg0;
- (BOOL)originHasRecommendedState;
- (void)recommendAwemeWithCompletion:(id /* block */)arg0;
- (void)cancelRecommendAwemeWithCompletion:(id /* block */)arg0;
- (id)shareType;
- (id)shareTitle;
- (BOOL)prepareWithContext:(id)arg0;

@end