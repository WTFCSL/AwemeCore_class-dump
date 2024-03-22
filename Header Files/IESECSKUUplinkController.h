//
//     Generated by private class-dump
//

@class NSString, IESECSKUUplinkDataHelper;
@protocol IESECSKUUplinkControllerDelegate;

@interface IESECSKUUplinkController : NSObject <IESECSKUUplinkController> {
    id<IESECSKUUplinkControllerDelegate> _delegate;
    IESECSKUUplinkDataHelper *_dataHelper;
}

@property (weak, nonatomic) id<IESECSKUUplinkControllerDelegate> delegate;
@property (retain, nonatomic) IESECSKUUplinkDataHelper *dataHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dataHelper;
- (void)setDataHelper:(id)arg0;
- (void)updateSkipTriggersWithGlobalTriggers:(id)arg0 moduleTriggers:(id)arg1;
- (unsigned long long)addAndGetCurVersion;
- (unsigned long long)getCurVersion;
- (void)updateInstanceAfterQuery:(id)arg0;
- (BOOL)canShowLoading:(id)arg0;
- (BOOL)handleResponseWithYataInstance:(id)arg0 eventTrigger:(id)arg1 uplinkParams:(id)arg2 uplinkResponse:(id)arg3;
- (BOOL)handleTrigger:(id)arg0;
- (void)p_delegateTrackErrorType:(id)arg0 errorParams:(id)arg1;
- (void).cxx_destruct;
- (id)initWithDelegate:(id)arg0;
- (id)delegate;
- (void)setDelegate:(id)arg0;

@end
