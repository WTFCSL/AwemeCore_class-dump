//
//     Generated by private class-dump
//

@class IESLiveGameOpenPlatformSonicEmulator;

@interface IESLiveGameOpenPlatformSonicLauncher : IESLiveGameOpenPlatformLauncherBaseImpl {
    IESLiveGameOpenPlatformSonicEmulator *_emulator;
    id /* block */ _loadPanelCompletion;
}

@property (retain, nonatomic) IESLiveGameOpenPlatformSonicEmulator *emulator;
@property (copy, nonatomic) id /* block */ loadPanelCompletion;

- (id)emulator;
- (void)setEmulator:(id)arg0;
- (void)loadPanelContainerWithCompletion:(id /* block */)arg0;
- (unsigned long long)resourceLoaderType;
- (id)currentEmulator;
- (void)launchScoreGame;
- (void)containerInstance:(id)arg0 didGetOpenCapabilityList:(id)arg1;
- (void)loaderDidStartLoading:(id)arg0;
- (void)loader:(id)arg0 didFailToParseSchemaWithError:(id)arg1;
- (void)loader:(id)arg0 didDownloadInProgress:(unsigned long long)arg1 total:(unsigned long long)arg2;
- (void)loader:(id)arg0 didFinishDownloadingToPath:(id)arg1;
- (void)loader:(id)arg0 didFailToDownload:(id)arg1;
- (void)loader:(id)arg0 didFinishPostprocessingResource:(id)arg1 error:(id)arg2;
- (void)loader:(id)arg0 didFailToPostprocessWithError:(id)arg1;
- (void)loader:(id)arg0 didLoadConfig:(id)arg1;
- (void)loaderDidFinishLoadContent:(id)arg0 exception:(id)arg1;
- (void)loaderDidRenderFirstFrame:(id)arg0;
- (void)loaderDidRenderSubContainerFirstFrame:(id)arg0;
- (void)loader:(id)arg0 sendFrameBuffer:(struct __CVBuffer { } *)arg1 withCMTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })arg2;
- (void)loader:(id)arg0 didReceiveException:(id)arg1;
- (void)willBeginLaunchingWithResult:(BOOL)arg0;
- (void)didFinishLaunchingWithResult:(BOOL)arg0 error:(id)arg1;
- (void)didFinishLoadingResource:(id)arg0 error:(id)arg1;
- (id)loadScoreResources;
- (void)setupEmulatorEnv;
- (void)setLoadPanelCompletion:(id /* block */)arg0;
- (id /* block */)loadPanelCompletion;
- (void)sendRunningInForeground;
- (void)_startShareScreenIfNeeded;
- (void).cxx_destruct;
- (void)_init;
- (id)initWithConfiguration:(id)arg0;
- (id)loadResources;

@end
