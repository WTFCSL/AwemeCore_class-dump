//
//     Generated by private class-dump
//

@class NSString, NSDictionary, AWEAwemeModel, NSMutableDictionary, NSNumber;
@protocol AWEPlayInteractionViewControllerNewProtocol, AFDRichContentContainerDelegate, AWEPlayVideoDelegate, AWEPlayVideoViewControllerDelegate, AWEAwemePlayVideoBaseContainer, AWEAwemePlayInteractionUpdateDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEPlayInteractionBizControllerProtocol, AWEAwemePlayInteractionPlayDelegate, AWEPlayInteractionViewControllerProtocol, AWEPlayVideoViewControllerContainerProtocol, AFDRichContentAlbumImageDelegateProtocol, AWEStoryContainerViewControllerDelegate, AFDRichContentProgressControllerDelegate, AWEAwemePlayInteractionPanelDelegate;

@interface AWEAwemeBaseVideoContext : NSObject <AWEAwemeBaseVideoContextProtocol> {
    BOOL isFullScreen;
    BOOL interactionControllerIsScrollDisabled;
    struct EngineAudioWrapper { } *audioWrapper;
    id<AFDRichContentProgressControllerDelegate, AWEPlayVideoDelegate, AWEAwemePlayVideoBaseContainer, AFDRichContentContainerDelegate, AWEPlayVideoViewControllerDelegate, AWEPlayVideoViewControllerContainerProtocol, AFDRichContentAlbumImageDelegateProtocol> baseViewController;
    NSDictionary *context;
    double defaultSeekToTime;
    NSString *enterFrom;
    id<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionBizControllerProtocol> interactionController;
    id<AWEPlayInteractionViewControllerNewProtocol> interactionNewController;
    NSDictionary *logExtraDict;
    AWEAwemeModel *model;
    NSString *reactId;
    NSString *referString;
    NSMutableDictionary *richIndexDict;
    NSString *ruleId;
    NSNumber *usingLogExtraDictEnterMethod;
    struct EngineVideoWrapper { } *videoWrapper;
    NSString *adEventName;
    id<AWEStoryContainerViewControllerDelegate> storyDelegate;
}

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSDictionary *context;
@property (retain, nonatomic) NSDictionary *logExtraDict;
@property (copy, nonatomic) NSString *enterFrom;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) double defaultSeekToTime;
@property (copy, nonatomic) NSString *reactId;
@property (copy, nonatomic) NSString *ruleId;
@property (copy, nonatomic) NSString *adEventName;
@property (retain, nonatomic) NSMutableDictionary *richIndexDict;
@property (nonatomic) struct EngineAudioWrapper { } *audioWrapper;
@property (nonatomic) struct EngineVideoWrapper { } *videoWrapper;
@property (nonatomic) BOOL interactionControllerIsScrollDisabled;
@property (retain, nonatomic) NSNumber *usingLogExtraDictEnterMethod;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerProtocol, AWEAwemePlayInteractionPlayDelegate, AWEAwemePlayInteractionPanelDelegate, AWEAwemePlayInteractionCommerceDelegate, AWEAwemePlayInteractionUpdateDelegate, AWEPlayInteractionBizControllerProtocol> interactionController;
@property (weak, nonatomic) id<AWEPlayInteractionViewControllerNewProtocol> interactionNewController;
@property (weak, nonatomic) id<AFDRichContentProgressControllerDelegate, AWEPlayVideoDelegate, AWEAwemePlayVideoBaseContainer, AFDRichContentContainerDelegate, AWEPlayVideoViewControllerDelegate, AWEPlayVideoViewControllerContainerProtocol, AFDRichContentAlbumImageDelegateProtocol> baseViewController;
@property (weak, nonatomic) id<AWEStoryContainerViewControllerDelegate> storyDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)reactId;
- (void)setReactId:(id)arg0;
- (id)referString;
- (void)setEnterFrom:(id)arg0;
- (void)setReferString:(id)arg0;
- (void)setLogExtraDict:(id)arg0;
- (id)logExtraDict;
- (id)enterFrom;
- (id)adEventName;
- (void)setAdEventName:(id)arg0;
- (void)setStoryDelegate:(id)arg0;
- (id)storyDelegate;
- (id)interactionNewController;
- (void)setInteractionNewController:(id)arg0;
- (double)defaultSeekToTime;
- (void)setDefaultSeekToTime:(double)arg0;
- (struct EngineAudioWrapper { } *)audioWrapper;
- (void)setAudioWrapper:(struct EngineAudioWrapper { } *)arg0;
- (struct EngineVideoWrapper { } *)videoWrapper;
- (void)setVideoWrapper:(struct EngineVideoWrapper { } *)arg0;
- (id)usingLogExtraDictEnterMethod;
- (void)setUsingLogExtraDictEnterMethod:(id)arg0;
- (id)richIndexDict;
- (BOOL)interactionControllerIsScrollDisabled;
- (void)setRichIndexDict:(id)arg0;
- (void)setInteractionControllerIsScrollDisabled:(BOOL)arg0;
- (void)setModel:(id)arg0;
- (BOOL)isFullScreen;
- (void).cxx_destruct;
- (void)setContext:(id)arg0;
- (id)model;
- (void)setInteractionController:(id)arg0;
- (id)interactionController;
- (id)context;
- (void)setIsFullScreen:(BOOL)arg0;
- (id)baseViewController;
- (void)setBaseViewController:(id)arg0;
- (void)setRuleId:(id)arg0;
- (id)ruleId;

@end
