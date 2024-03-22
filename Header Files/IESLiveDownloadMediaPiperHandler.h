//
//     Generated by private class-dump
//

@class IESLiveScreenRecordToolActionService, NSString;

@interface IESLiveDownloadMediaPiperHandler : NSObject <IESLivePiperHandlerProtocol> {
    IESLiveScreenRecordToolActionService *_recordService;
}

@property (retain, nonatomic) IESLiveScreenRecordToolActionService *recordService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)registerHandlerWithBridge:(id)arg0;
- (id)recordService;
- (void)setRecordService:(id)arg0;
- (void).cxx_destruct;

@end
