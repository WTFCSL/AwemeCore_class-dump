//
//     Generated by private class-dump
//

@class NSDictionary;
@protocol AWECarrierLoginViewDelegate;

@protocol AWECarrierLoginView <NSObject>

@property (weak, nonatomic) id<AWECarrierLoginViewDelegate> delegate;
@property (retain, nonatomic) NSDictionary *trackInfo;

- (id)onShowThirdPlatforms;
- (void)onStartLoading;
- (void)onEndLoading;
- (void)didAppaear;
- (void)quickLoginFromDetainAlert;
- (id)initWithModel:(id)arg0;
- (void)didDisappear;
- (id)delegate;
- (void)setDelegate:(id)arg0;
- (id)trackInfo;
- (void)setTrackInfo:(id)arg0;

@end
