//
//     Generated by private class-dump
//

@class IESECLiveRoomParams, NSMutableDictionary;

@interface IESECLiveMonitorCommonInfo : NSObject {
    BOOL _openWithSaaS;
    IESECLiveRoomParams *_roomParams;
    NSMutableDictionary *_basicInfo;
}

@property (retain, nonatomic) IESECLiveRoomParams *roomParams;
@property (retain, nonatomic) NSMutableDictionary *basicInfo;
@property (nonatomic) BOOL openWithSaaS;

- (id)basicInfo;
- (void)setBasicInfo:(id)arg0;
- (id)p_currentUserID;
- (BOOL)openWithSaaS;
- (void)setOpenWithSaaS:(BOOL)arg0;
- (id)initWithRoomParams:(id)arg0;
- (id)basicMonitorInfo;
- (void)p_generateBasicInfo;
- (id)roomParams;
- (BOOL)p_isAudience;
- (void)setRoomParams:(id)arg0;
- (void).cxx_destruct;

@end
