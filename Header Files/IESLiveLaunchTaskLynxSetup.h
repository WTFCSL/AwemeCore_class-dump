//
//     Generated by private class-dump
//

@protocol IESLiveLynxService;

@interface IESLiveLaunchTaskLynxSetup : IESLiveBaseLaunchTask {
    id<IESLiveLynxService> _lynxService;
}

@property (retain, nonatomic) id<IESLiveLynxService> lynxService;

- (void)excute;
- (id)lynxService;
- (void)setLynxService:(id)arg0;
- (void).cxx_destruct;

@end
