//
//     Generated by private class-dump
//

@class NSString;
@protocol IESLiveUserService, IESLiveFullLinkMonitor, IESLiveRoomService, IESLiveChatChannelMonitorDataSource;

@interface IESLiveChatChannelMonitorImpl : NSObject {
    id<IESLiveChatChannelMonitorDataSource> _dataSource;
    id<IESLiveFullLinkMonitor> _innerMonitor;
    id<IESLiveRoomService> _room;
    id<IESLiveUserService> _userService;
    NSString *_businessServiceName;
    NSString *_apiServiceName;
    NSString *_messageServiceName;
    NSString *_sdkAPIServiceName;
    NSString *_sdkCallbackServiceName;
}

@property (retain, nonatomic) id<IESLiveFullLinkMonitor> innerMonitor;
@property (retain, nonatomic) id<IESLiveRoomService> room;
@property (retain, nonatomic) id<IESLiveUserService> userService;
@property (copy, nonatomic) NSString *businessServiceName;
@property (copy, nonatomic) NSString *apiServiceName;
@property (copy, nonatomic) NSString *messageServiceName;
@property (copy, nonatomic) NSString *sdkAPIServiceName;
@property (copy, nonatomic) NSString *sdkCallbackServiceName;
@property (retain, nonatomic) id<IESLiveChatChannelMonitorDataSource> dataSource;

- (unsigned long long)eventModule;
- (id)userService;
- (void)setUserService:(id)arg0;
- (id)innerMonitor;
- (void)monitorIMMessageReceive:(id)arg0 description:(id)arg1 extra:(id)arg2;
- (void)monitorServerAPICall:(id)arg0 requestTimestamp:(double)arg1 error:(id)arg2 response:(id)arg3 extra:(id)arg4;
- (void)monitorWithServiceName:(id)arg0 eventType:(unsigned long long)arg1 extra:(id)arg2;
- (void)monitorSDKAPICall:(id)arg0 extra:(id)arg1;
- (void)monitorSDKCallback:(id)arg0 extra:(id)arg1;
- (void)monitorBusinessLogic:(id)arg0 extra:(id)arg1;
- (id)buildCommonParametersWithExtra:(id)arg0;
- (id)apiServiceName;
- (id)messageServiceName;
- (id)sdkAPIServiceName;
- (id)sdkCallbackServiceName;
- (id)businessServiceName;
- (id)buildCommonParameters;
- (void)setInnerMonitor:(id)arg0;
- (void)setBusinessServiceName:(id)arg0;
- (void)setApiServiceName:(id)arg0;
- (void)setMessageServiceName:(id)arg0;
- (void)setSdkAPIServiceName:(id)arg0;
- (void)setSdkCallbackServiceName:(id)arg0;
- (void)setDataSource:(id)arg0;
- (id)dataSource;
- (void).cxx_destruct;
- (id)room;
- (void)setRoom:(id)arg0;

@end
