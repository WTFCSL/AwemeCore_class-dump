//
//     Generated by private class-dump
//

@class NSString, IESLiveGuideContentPanelModel;
@protocol IESLiveGuideProvider;

@interface IESLiveGuideContentPanelStore : NSObject <IESLiveGuideActions> {
    IESLiveGuideContentPanelModel *_model;
    id<IESLiveGuideProvider> _guideProvider;
}

@property (retain, nonatomic) id<IESLiveGuideProvider> guideProvider;
@property (retain, nonatomic) IESLiveGuideContentPanelModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)bindActionWithGuideModel:(id)arg0;
- (id)guideProvider;
- (void)setGuideProvider:(id)arg0;
- (id)initWithModel:(id)arg0;
- (void)setModel:(id)arg0;
- (void).cxx_destruct;
- (id)model;

@end