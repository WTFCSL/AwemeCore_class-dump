//
//     Generated by private class-dump
//

@class NSString, IESLiveLinkLiveRtc;
@protocol IMultiChorusDelegate;

@interface IESLiveLinkMultiChorusManagerConfig : NSObject {
    IESLiveLinkLiveRtc *_rtcEngineKit;
    NSString *_userId;
    NSString *_roomId;
    id<IMultiChorusDelegate> _chorusDelegate;
}

@property (weak, nonatomic) IESLiveLinkLiveRtc *rtcEngineKit;
@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *roomId;
@property (weak, nonatomic) id<IMultiChorusDelegate> chorusDelegate;

- (id)roomId;
- (void)setRoomId:(id)arg0;
- (id)rtcEngineKit;
- (void)setRtcEngineKit:(id)arg0;
- (void)setChorusDelegate:(id)arg0;
- (id)chorusDelegate;
- (void).cxx_destruct;
- (id)userId;
- (void)setUserId:(id)arg0;

@end
