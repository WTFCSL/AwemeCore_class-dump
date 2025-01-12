//
//     Generated by private class-dump
//

@class NSNumber, NSString, IESGCPInteractGameAPI;

@interface IESGCPInteractGameStore : NSObject <IESGCPDIContextSubscriber, IESGCPInteractGameRouter, IESGCPGameMetaDataActions> {
    BOOL _isInAnchorAudiencePlayTogether;
    NSNumber *_roomID;
    NSString *_anchorID;
    IESGCPInteractGameAPI *_api;
}

@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) IESGCPInteractGameAPI *api;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL isInAnchorAudiencePlayTogether;
@property (readonly, copy, nonatomic) NSString *gameStatusTrackString;

- (id)anchorID;
- (void)setAnchorID:(id)arg0;
- (void)didSetGameCPDIContext;
- (id)initWithRoomID:(id)arg0 anchorID:(id)arg1;
- (void)preloadInteractGameWithSchema:(id)arg0;
- (void)closeInteractGameWithSchema:(id)arg0;
- (void)openInteractGameWithSchema:(id)arg0 params:(id)arg1 completion:(id /* block */)arg2;
- (void)recordAnchorAudiencePlayTogether:(BOOL)arg0;
- (BOOL)isInAnchorAudiencePlayTogether;
- (id)gameStatusTrackString;
- (void)gameMetaDataDidUpdate;
- (id)interactGameMetaDataModel;
- (void)_preloadInteractGameIfNeededWithGameMetaData:(id)arg0;
- (void)_recordOpenInteractGameWithGameId:(id)arg0 roomId:(id)arg1 anchorId:(id)arg2;
- (void)_trueOpenInteractGameWithSchema:(id)arg0 params:(id)arg1;
- (BOOL)_liveRoomContainsInteractGame;
- (void).cxx_destruct;
- (id)roomID;
- (void)setRoomID:(id)arg0;
- (id)api;
- (void)setApi:(id)arg0;

@end
