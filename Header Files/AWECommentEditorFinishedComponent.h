//
//     Generated by private class-dump
//

@class AWECommentEditorFinishedView, NSMutableDictionary;
@protocol ACCFilterService, ACCSequenceEditServiceProtocol, ACCEditViewContainer, ACCVideoEditFlowControlService, ACCEditServiceProtocol;

@interface AWECommentEditorFinishedComponent : ACCFeatureComponent {
    id<ACCEditViewContainer> _viewContainer;
    id<ACCEditServiceProtocol> _editService;
    id<ACCSequenceEditServiceProtocol> _sequenceEditService;
    id<ACCVideoEditFlowControlService> _flowService;
    AWECommentEditorFinishedView *_finishedView;
    id<ACCFilterService> _filterService;
    NSMutableDictionary *_editInfoTrackerDict;
}

@property (weak, nonatomic) id<ACCEditViewContainer> viewContainer;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) id<ACCSequenceEditServiceProtocol> sequenceEditService;
@property (retain, nonatomic) id<ACCVideoEditFlowControlService> flowService;
@property (retain, nonatomic) AWECommentEditorFinishedView *finishedView;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) NSMutableDictionary *editInfoTrackerDict;

- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)editService;
- (void)loadComponentView;
- (void)setEditService:(id)arg0;
- (void)setFilterService:(id)arg0;
- (id)filterService;
- (id)flowService;
- (void)setFlowService:(id)arg0;
- (id)sequenceEditService;
- (void)setSequenceEditService:(id)arg0;
- (void)commentImageEditInfoTracker;
- (void)setupFinishButton;
- (void)setFinishedView:(id)arg0;
- (void)onFinishButtonDidClick;
- (id)finishedView;
- (void)prepareMerge;
- (void)addEditInfoTrackerInfoParams;
- (void)setEditInfoTrackerDict:(id)arg0;
- (id)editInfoTrackerDict;
- (void).cxx_destruct;
- (id)viewContainer;
- (void)setViewContainer:(id)arg0;

@end