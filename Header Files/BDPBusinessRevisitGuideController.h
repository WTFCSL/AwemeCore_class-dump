//
//     Generated by private class-dump
//

@class NSDictionary, BDPUniqueID;

@interface BDPBusinessRevisitGuideController : BDPHostPanelContentBusinessController {
    BDPUniqueID *_uniqueID;
    unsigned long long _currentActionType;
    NSDictionary *_commonTrackParams;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) unsigned long long currentActionType;
@property (copy, nonatomic) NSDictionary *commonTrackParams;

- (void)setCurrentActionType:(unsigned long long)arg0;
- (unsigned long long)currentActionType;
- (id)commonTrackParams;
- (void)setCommonTrackParams:(id)arg0;
- (void).cxx_destruct;
- (id)uniqueID;
- (void)setUniqueID:(id)arg0;

@end
