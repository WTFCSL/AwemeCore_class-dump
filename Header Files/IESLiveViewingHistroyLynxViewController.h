//
//     Generated by private class-dump
//

@class NSString, PuzzleHybridContainer;

@interface IESLiveViewingHistroyLynxViewController : UIViewController <IESHYHybridViewLifecycleProtocol> {
    BOOL _appearZeroTimes;
    PuzzleHybridContainer *_lynxContainer;
}

@property (retain, nonatomic) PuzzleHybridContainer *lynxContainer;
@property (nonatomic) BOOL appearZeroTimes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)lynxContainer;
- (void)setLynxContainer:(id)arg0;
- (void)setAppearZeroTimes:(BOOL)arg0;
- (BOOL)appearZeroTimes;
- (void)refreshLayout:(BOOL)arg0;
- (void)registerBridgeHandler;
- (void)viewDidAppear:(BOOL)arg0;
- (void).cxx_destruct;
- (void)viewWillDisappear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewWillAppear:(BOOL)arg0;
- (void)viewDidLoad;

@end
