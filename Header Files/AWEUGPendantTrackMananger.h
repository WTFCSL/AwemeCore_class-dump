//
//     Generated by private class-dump
//

@class NSString, NSMutableSet;

@interface AWEUGPendantTrackMananger : NSObject {
    BOOL _didTrackShow;
    NSString *_lastTrackedMaterialID;
    NSMutableSet *_trackedControlledPendantIDSet;
}

@property (retain, nonatomic) NSString *lastTrackedMaterialID;
@property (retain, nonatomic) NSMutableSet *trackedControlledPendantIDSet;
@property (nonatomic) BOOL didTrackShow;

+ (id)sharedInstance;

- (BOOL)didTrackShow;
- (void)setDidTrackShow:(BOOL)arg0;
- (BOOL)checkIfNeedTrackMaterialID:(id)arg0;
- (void)recordTrackedMaterialID:(id)arg0;
- (BOOL)hasTrackControlledThisColdLaunch:(id)arg0;
- (void)recordTrackControlledThisColdLaunch:(id)arg0;
- (void)setLastTrackedMaterialID:(id)arg0;
- (id)lastTrackedMaterialID;
- (id)trackedControlledPendantIDSet;
- (void)setTrackedControlledPendantIDSet:(id)arg0;
- (id)init;
- (void).cxx_destruct;

@end