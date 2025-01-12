//
//     Generated by private class-dump
//

@class NSPointerArray, AWEPlayInteractionComponentGlobalPriorityManager;

@interface AWEPlayInteractionComponentGlobalPriorityController : AWEPlayInteractionBaseController {
    AWEPlayInteractionComponentGlobalPriorityManager *_globalPriorityManager;
    NSPointerArray *_allElements;
}

@property (retain, nonatomic) AWEPlayInteractionComponentGlobalPriorityManager *globalPriorityManager;
@property (retain, nonatomic) NSPointerArray *allElements;

- (void)dealloc;
- (void)updateAllSubViews;
- (id)globalPriorityManager;
- (void)setupGlobalPriorityManager;
- (void)bindProperties;
- (void)processGlobalAvoid;
- (void)setGlobalPriorityManager:(id)arg0;
- (void)activateComponentWithAllElements;
- (void).cxx_destruct;
- (id)allElements;
- (void)setAllElements:(id)arg0;
- (void)reset;
- (void)viewDidLoad;

@end
