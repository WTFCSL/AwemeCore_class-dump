//
//     Generated by private class-dump
//

@class IESLiveInnerFeedContext, NSString;

@interface IESLiveInnerFeedAntiAddictionController : NSObject <IESLiveFeedInnerAntiAddictService> {
    IESLiveInnerFeedContext *_context;
}

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)deleteAddictCardWithCellModel:(id)arg0;
- (BOOL)insertAddictCardCardWithCellModel:(id)arg0;
- (void)antiAddictCardLeave;
- (id)initWithContext:(id)arg0;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)context;

@end
