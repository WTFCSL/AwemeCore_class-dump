//
//     Generated by private class-dump
//

@class IESLiveUnitedMatrixRequest, NSString, IESLiveMatrixEntranceView;

@interface IESLiveUnitedMatrixFragment : IESLiveRoomComponent <HTSLiveMessageSubscriber> {
    BOOL _isLandscapeEnterInnerLive;
    BOOL _hide;
    IESLiveMatrixEntranceView *_matrixEntrance;
    IESLiveUnitedMatrixRequest *_requestManager;
    long long _orientation;
}

@property (retain, nonatomic) IESLiveMatrixEntranceView *matrixEntrance;
@property (retain, nonatomic) IESLiveUnitedMatrixRequest *requestManager;
@property (nonatomic) BOOL isLandscapeEnterInnerLive;
@property (nonatomic) long long orientation;
@property (nonatomic) BOOL hide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)componentShouldActive:(id)arg0;

- (void)setHide:(BOOL)arg0;
- (void)trackEvent:(id)arg0 params:(id)arg1;
- (void)componentBindService;
- (void)componentCreate;
- (void)componentMount;
- (void)componentOrientationChanged:(long long)arg0;
- (void)setIsLandscapeEnterInnerLive:(BOOL)arg0;
- (id)matrixEntrance;
- (void)refreshEntranceShowState;
- (void)inquireMatrixEntrance;
- (BOOL)isLandscapeEnterInnerLive;
- (void)updateEntranceHiddenState:(BOOL)arg0;
- (void)openMatrixDetailPage;
- (void)insertMatrixToolbarItem;
- (void)setMatrixEntrance:(id)arg0;
- (void).cxx_destruct;
- (long long)orientation;
- (id)requestManager;
- (BOOL)hide;
- (void)setOrientation:(long long)arg0;
- (void)messageReceived:(id)arg0;
- (void)setRequestManager:(id)arg0;

@end
