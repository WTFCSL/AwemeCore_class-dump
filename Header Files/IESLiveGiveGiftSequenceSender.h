//
//     Generated by private class-dump
//

@class IESLiveGiveGiftTimeSequenceSender, IESLiveGiveGiftResponseSequenceSender, IESLiveGiftPanelDataSharing;
@protocol IESLiveGiveGiftSequenceSenderDataSource;

@interface IESLiveGiveGiftSequenceSender : NSObject {
    BOOL _isUsingResponseSender;
    IESLiveGiveGiftTimeSequenceSender *_timeSequenceSender;
    IESLiveGiveGiftResponseSequenceSender *_responseSequenceSender;
}

@property (retain, nonatomic) IESLiveGiveGiftTimeSequenceSender *timeSequenceSender;
@property (retain, nonatomic) IESLiveGiveGiftResponseSequenceSender *responseSequenceSender;
@property (nonatomic) BOOL isUsingResponseSender;
@property (weak, nonatomic) id<IESLiveGiveGiftSequenceSenderDataSource> dataSource;
@property (retain, nonatomic) IESLiveGiftPanelDataSharing *dataSharing;

- (void)didSetAttachingDIContext;
- (id)dataSharing;
- (void)setDataSharing:(id)arg0;
- (id)responseSequenceSender;
- (id)timeSequenceSender;
- (id)sequenceSender;
- (BOOL)isUsingResponseSender;
- (void)setTimeSequenceSender:(id)arg0;
- (void)setResponseSequenceSender:(id)arg0;
- (void)setIsUsingResponseSender:(BOOL)arg0;
- (void)run;
- (void)setDataSource:(id)arg0;
- (id)init;
- (id)dataSource;
- (void).cxx_destruct;
- (void)endTransaction:(BOOL)arg0;

@end