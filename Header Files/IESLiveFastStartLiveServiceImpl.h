//
//     Generated by private class-dump
//

@class NSString, IESLiveFastStartLiveViewModel;

@interface IESLiveFastStartLiveServiceImpl : NSObject <IESLiveFastStartLiveService> {
    IESLiveFastStartLiveViewModel *_viewModel;
}

@property (retain, nonatomic) IESLiveFastStartLiveViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startLiveWithSourceParams:(id)arg0 completion:(id /* block */)arg1;
- (id)sourceParams;
- (BOOL)needClean:(id)arg0;
- (void).cxx_destruct;
- (void)setViewModel:(id)arg0;
- (id)viewModel;
- (void)clear;

@end