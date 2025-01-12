//
//     Generated by private class-dump
//

@class NSDictionary, NSString;

@interface AWEPOILiveTrackUtils : NSObject <AWEPOILiveTrackerUtilsProtocol> {
    NSDictionary *_awemeInfo;
    NSDictionary *_liveRoomInfo;
}

@property (copy, nonatomic) NSDictionary *awemeInfo;
@property (copy, nonatomic) NSDictionary *liveRoomInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedUtils;

- (id)awemeInfo;
- (void)setAwemeInfo:(id)arg0;
- (id)liveRoomInfo;
- (void)setLiveRoomInfo:(id)arg0;
- (id)lifeInitialInfo;
- (id)logExtraTrackKey;
- (id)cidTrackKey;
- (void)updateAwemeInfo:(id)arg0 liveInfo:(id)arg1;
- (id)addLiveInfo:(id)arg0 toLifeExtraInfo:(id)arg1;
- (id)sourceTrackParams;
- (id)sourceTrackParamsWithScene:(long long)arg0 enterMethod:(long long)arg1;
- (id)p_liveRoomInfoAndADInfoDict;
- (void).cxx_destruct;

@end
