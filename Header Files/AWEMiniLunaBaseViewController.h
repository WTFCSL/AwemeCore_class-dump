//
//     Generated by private class-dump
//

@class NSString;

@interface AWEMiniLunaBaseViewController : UIViewController <AWEMiniLunaBaseViewControllerProtocol> {
    double _appearTimestamp;
}

@property (nonatomic) double appearTimestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isMiniLuna;
- (void)setAppearTimestamp:(double)arg0;
- (double)appearTimestamp;
- (id)musicService;
- (id)p_commonParams;
- (id)eventModel;
- (id)currentMusicModel;
- (id)init;
- (void)viewDidAppear:(BOOL)arg0;
- (void)viewDidDisappear:(BOOL)arg0;
- (void)viewDidLoad;

@end
