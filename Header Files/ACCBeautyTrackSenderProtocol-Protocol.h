//
//     Generated by private class-dump
//

@class RACSignal, AWEVideoPublishViewModel;

@protocol ACCBeautyTrackSenderProtocol <NSObject>

@property (retain, nonatomic) AWEVideoPublishViewModel *publishModel;
@property (readonly, nonatomic) RACSignal *beautySwitchButtonClickedSignal;
@property (readonly, nonatomic) RACSignal *modernBeautyButtonClickedSignal;
@property (readonly, nonatomic) RACSignal *flowServiceWillStartRecordSignal;
@property (readonly, nonatomic) RACSignal *flowServiceDidCompleteRecordSignal;
@property (readonly, nonatomic) RACSignal *composerBeautyViewControllerDidSwitchSignal;
@property (readonly, nonatomic) RACSignal *beautyDataFetchCompleteSignal;

- (id)publishModel;
- (void)setPublishModel:(id)arg0;
- (id)beautySwitchButtonClickedSignal;
- (id)modernBeautyButtonClickedSignal;
- (id)flowServiceWillStartRecordSignal;
- (id)flowServiceDidCompleteRecordSignal;
- (id)composerBeautyViewControllerDidSwitchSignal;
- (id)beautyDataFetchCompleteSignal;

@end
