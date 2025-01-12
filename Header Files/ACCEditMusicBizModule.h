//
//     Generated by private class-dump
//

@class AWEVideoPublishViewModel;
@protocol ACCEditServiceProtocol, IESServiceProvider, ACCEditTextReaderServiceProtocol, ACCBusinessInputData;

@interface ACCEditMusicBizModule : NSObject {
    id<IESServiceProvider> _serviceProvider;
    id<ACCEditServiceProtocol> _editService;
    AWEVideoPublishViewModel *_repository;
    id<ACCBusinessInputData> _inputData;
    id<ACCEditTextReaderServiceProtocol> _editTextReaderService;
}

@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) id<ACCEditServiceProtocol> editService;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<ACCBusinessInputData> inputData;
@property (weak, nonatomic) id<ACCEditTextReaderServiceProtocol> editTextReaderService;

+ (void)fetchMusicModelWithMusicConfig:(id)arg0 completion:(id /* block */)arg1;

- (id)editService;
- (void)setEditService:(id)arg0;
- (BOOL)isImageAlbum;
- (void)replaceAudio:(id)arg0 completeBlock:(id /* block */)arg1;
- (id)localMusicAssetForURL:(id)arg0;
- (id)editTextReaderService;
- (void)setEditTextReaderService:(id)arg0;
- (void)updatePublishModelForDetailMusic:(id)arg0;
- (id)audioEffectService;
- (void)fetchMusicModelWithCompletion:(id /* block */)arg0;
- (void)replaceAudioForImage:(id)arg0 completeBlock:(id /* block */)arg1;
- (void)downloadMusicIfneedWithCompletion:(id /* block */)arg0;
- (void)clipWithRange:(struct _HTSAudioRange { double x0; double x1; })arg0 repeatCount:(long long)arg1;
- (void)clearMusicConfigAssembler;
- (void).cxx_destruct;
- (void)setServiceProvider:(id)arg0;
- (void)setup;
- (void)setRepository:(id)arg0;
- (id)initWithServiceProvider:(id)arg0;
- (id)serviceProvider;
- (id)repository;
- (id)inputData;
- (void)setInputData:(id)arg0;

@end
