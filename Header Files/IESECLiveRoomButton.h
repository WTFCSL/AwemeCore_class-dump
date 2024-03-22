//
//     Generated by private class-dump
//

@class NSString, IESECLiveStateBannerView, IESECLiveReplayDataStore;

@interface IESECLiveRoomButton : UIButton <IESECLiveReplayComponentViewProtocol> {
    BOOL _isFading;
    IESECLiveReplayDataStore *_dataStore;
    IESECLiveStateBannerView *_introducingView;
}

@property (nonatomic) BOOL isFading;
@property (retain, nonatomic) IESECLiveStateBannerView *introducingView;
@property (retain, nonatomic) IESECLiveReplayDataStore *dataStore;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)containerViewDidAppear:(BOOL)arg0;
- (void)dataStoreChanged;
- (id)introducingView;
- (void)setIntroducingView:(id)arg0;
- (BOOL)isFading;
- (void)fadeAnimation;
- (void)setIsFading:(BOOL)arg0;
- (void).cxx_destruct;
- (void)setDataStore:(id)arg0;
- (id)initWithDataStore:(id)arg0;
- (id)dataStore;

@end