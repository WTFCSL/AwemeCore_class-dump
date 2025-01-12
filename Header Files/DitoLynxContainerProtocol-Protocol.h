//
//     Generated by private class-dump
//

@class NSString, NSNumber;

@protocol DitoLynxContainerProtocol <NSObject>

@property (copy, nonatomic) NSString *containerID;
@property (copy, nonatomic) NSString *ditoNodeTag;
@property (readonly, nonatomic) NSNumber *geckoID;
@property (readonly, nonatomic) BOOL isLoadSuccess;

- (void)sendEvent:(id)arg0 params:(id)arg1;
- (id)geckoID;
- (BOOL)isLoadSuccess;
- (id)ditoNodeTag;
- (void)setDitoNodeTag:(id)arg0;
- (void)setContainerID:(id)arg0;
- (id)containerID;

@optional

- (id)lynxView;
- (double)calculatePreRenderHeight;
- (void)updateClipsToBounds:(BOOL)arg0;
- (void)componentViewSendLynxCustomEvent:(id)arg0 eventParams:(id)arg1 viewID:(id)arg2;
- (id)innerLynxView:(id)arg0;
- (void)updateLynxWithBizData:(id)arg0;
- (void)subscribeBDXEvent;
- (id)nestedScrollViewWithViewID:(id)arg0;
- (long long)lynxPreloadType;

@end
