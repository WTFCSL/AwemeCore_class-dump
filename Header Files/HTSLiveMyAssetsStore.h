//
//     Generated by private class-dump
//

@class NSString, HTSEventContext, NSArray;
@protocol IESLiveRoomServiceAdapter, IESLiveMyAssetsDelegate;

@interface HTSLiveMyAssetsStore : NSObject <HTSLiveMyAssetActions, HTSLiveMessageSubscriber> {
    BOOL _shouldShowReddot;
    BOOL _disableGift;
    BOOL _assetGuideViewed;
    HTSEventContext *_trackContext;
    id<IESLiveRoomServiceAdapter> _room;
    NSArray *_assets;
    NSString *_toolbarTip;
    NSArray *_groupCountConfigs;
    id<IESLiveMyAssetsDelegate> _delegate;
    double _timeInvtervalWithServer;
}

@property (nonatomic) double timeInvtervalWithServer;
@property (retain, nonatomic) NSString *toolbarTip;
@property (nonatomic) BOOL assetGuideViewed;
@property (nonatomic) BOOL disableGift;
@property (retain, nonatomic) HTSEventContext *trackContext;
@property (retain, nonatomic) id<IESLiveRoomServiceAdapter> room;
@property (nonatomic) BOOL shouldShowReddot;
@property (retain, nonatomic) NSArray *assets;
@property (retain, nonatomic) NSArray *groupCountConfigs;
@property (weak, nonatomic) id<IESLiveMyAssetsDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)trackContext;
- (void)setTrackContext:(id)arg0;
- (void)didSetAttachingDIContext;
- (void)bindActions;
- (BOOL)convergedModule;
- (BOOL)preJudgePkcardWithCurrentAnchorRoomByLocal;
- (void)cleanLocalPkcardIdentifyWithCurrentAnchorRoom;
- (void)handleNoticeMessage:(id)arg0;
- (id)toolbarTip;
- (void)setToolbarTip:(id)arg0;
- (void)myAssetListUpdated:(id)arg0 at:(id)arg1 updateMomentType:(long long)arg2;
- (BOOL)shouldShowReddot;
- (void)setShouldShowReddot:(BOOL)arg0;
- (id)groupCountConfigs;
- (void)setGroupCountConfigs:(id)arg0;
- (double)timeInvtervalWithServer;
- (void)setTimeInvtervalWithServer:(double)arg0;
- (void)determineShouldShowReddot:(id)arg0;
- (void)addLocalPkcardWithCurrentAnchorRoom;
- (void)setDisableGift:(BOOL)arg0;
- (BOOL)shouldShowAssetGuide;
- (void)onAssetGuideViewed;
- (BOOL)assetGuideViewed;
- (void)setAssetGuideViewed:(BOOL)arg0;
- (BOOL)pr_isInMseqRoom;
- (BOOL)disableGift;
- (void).cxx_destruct;
- (void)setAssets:(id)arg0;
- (id)delegate;
- (id)assets;
- (void)setDelegate:(id)arg0;
- (id)room;
- (void)setRoom:(id)arg0;
- (void)messageReceived:(id)arg0;
- (double)currentTimeStamp;
- (id)initWithRoom:(id)arg0;

@end
