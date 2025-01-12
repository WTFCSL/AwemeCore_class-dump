//
//     Generated by private class-dump
//

@protocol BDCLUPnPResponseDelegate <NSObject>

- (void)upnpSetAVTransportURIResponse;
- (void)upnpGetTransportInfoResponse:(id)arg0;

@optional

- (void)upnpSetNextAVTransportURIResponse;
- (void)upnpPauseResponse;
- (void)upnpPlayResponse;
- (void)upnpResumeResponse;
- (void)upnpStopResponse;
- (void)upnpSeekResponse;
- (void)upnpNextResponse;
- (void)upnpPreviousResponse;
- (void)upnpSetVolumeResponse;
- (void)upnpAddVolumeResponse;
- (void)upnpSubVolumeResponse;
- (void)upnpSpeedResponse;
- (void)upnpMessageResponse;
- (void)upnpGetVolumeResponse:(id)arg0;
- (void)upnpGetPositionInfoResponse:(id)arg0;
- (void)upnpErrorInfoResponse:(id)arg0 action:(id)arg1;
- (void)upnpUndefinedResponse:(id)arg0 postXML:(id)arg1;
- (void)upnpGetStatusInfoResponse:(id)arg0;

@end
