//
//     Generated by private class-dump
//

@interface IESLiveSaveDataURLMethodImpl : IESLiveSaveDataURLMethod

- (void)callWithParamModel:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)saveMediaDidFinishSavingWithError:(id)arg0 contextInfo:(void *)arg1;
- (id)filePathByStrippingSandboxPath:(id)arg0;
- (void)requestPHAuthorization:(id /* block */)arg0;
- (void)saveBase64DataToAlbum:(id)arg0 fileURL:(id)arg1 saveToAlbum:(id)arg2 completion:(id /* block */)arg3;
- (void)saveMediaToAlbumWithURL:(id)arg0 isImage:(BOOL)arg1 completion:(id /* block */)arg2;
- (void)video:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;
- (void)image:(id)arg0 didFinishSavingWithError:(id)arg1 contextInfo:(void *)arg2;

@end
