//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol DYSharedLoginViewDelegate;

@protocol DYSharedLoginView <NSObject>

@property (weak, nonatomic) id<DYSharedLoginViewDelegate> delegate;
@property (copy, nonatomic) NSDictionary *trackInfo;

- (void)updateWithUserModel:(id)arg0;
- (void)loginFromDetainAlert;
- (void)startLogin;
- (void)stopLoginWithError:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)didDisappear;
- (id)delegate;
- (void)didAppear;
- (void)setDelegate:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
